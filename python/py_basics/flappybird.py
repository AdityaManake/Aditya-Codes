import pygame
import random

# Initialize Pygame
pygame.init()

# Screen dimensions
SCREEN_WIDTH = 400
SCREEN_HEIGHT = 600
GROUND_HEIGHT = 80

# Colors
WHITE = (255, 255, 255)
BLUE = (0, 150, 255)
GREEN = (0, 200, 0)
RED = (255, 0, 0)

# Game settings
FPS = 60
GRAVITY = 0.5
JUMP_STRENGTH = -8
PIPE_SPEED = 3
PIPE_WIDTH = 70
PIPE_GAP = 150

# Initialize screen
screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
pygame.display.set_caption("Floppy Bird")
clock = pygame.time.Clock()

# Font
font = pygame.font.SysFont(None, 40)


def draw_text(text, color, x, y):
    img = font.render(text, True, color)
    screen.blit(img, (x, y))


class Bird:
    def __init__(self):
        self.x = 100
        self.y = SCREEN_HEIGHT // 2
        self.radius = 20
        self.vel = 0

    def update(self):
        self.vel += GRAVITY
        self.y += self.vel

    def jump(self):
        self.vel = JUMP_STRENGTH

    def draw(self):
        pygame.draw.circle(screen, RED, (int(self.x), int(self.y)), self.radius)

    def get_rect(self):
        return pygame.Rect(self.x - self.radius, self.y - self.radius, self.radius * 2, self.radius * 2)


class Pipe:
    def __init__(self, x):
        self.x = x
        self.height = random.randint(100, 400)
        self.passed = False

    def update(self):
        self.x -= PIPE_SPEED

    def draw(self):
        # Top pipe
        pygame.draw.rect(screen, GREEN, (self.x, 0, PIPE_WIDTH, self.height))
        # Bottom pipe
        pygame.draw.rect(screen, GREEN, (self.x, self.height + PIPE_GAP, PIPE_WIDTH, SCREEN_HEIGHT))

    def get_top_rect(self):
        return pygame.Rect(self.x, 0, PIPE_WIDTH, self.height)

    def get_bottom_rect(self):
        return pygame.Rect(self.x, self.height + PIPE_GAP, PIPE_WIDTH, SCREEN_HEIGHT)


def main():
    bird = Bird()
    pipes = [Pipe(SCREEN_WIDTH + 100)]
    score = 0
    running = True
    game_over = False

    while running:
        clock.tick(FPS)
        screen.fill(BLUE)

        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            if not game_over and event.type == pygame.KEYDOWN:
                if event.key == pygame.K_SPACE:
                    bird.jump()

        if not game_over:
            bird.update()

            # Pipe logic
            for pipe in pipes:
                pipe.update()

                if pipe.x + PIPE_WIDTH < 0:
                    pipes.remove(pipe)
                    pipes.append(Pipe(SCREEN_WIDTH))

                if not pipe.passed and pipe.x < bird.x:
                    pipe.passed = True
                    score += 1

                # Collision detection
                if bird.get_rect().colliderect(pipe.get_top_rect()) or bird.get_rect().colliderect(pipe.get_bottom_rect()):
                    game_over = True

            # Ground / ceiling collision
            if bird.y > SCREEN_HEIGHT - GROUND_HEIGHT or bird.y < 0:
                game_over = True

        # Draw
        bird.draw()
        for pipe in pipes:
            pipe.draw()

        pygame.draw.rect(screen, WHITE, (0, SCREEN_HEIGHT - GROUND_HEIGHT, SCREEN_WIDTH, GROUND_HEIGHT))
        draw_text(f"Score: {score}", (0, 0, 0), 10, SCREEN_HEIGHT - GROUND_HEIGHT + 20)

        if game_over:
            draw_text("Game Over", RED, SCREEN_WIDTH // 2 - 80, SCREEN_HEIGHT // 2)

        pygame.display.update()

    pygame.quit()


if __name__ == "__main__":
    main()
