import random as rnd
choices=['rock','paper','scissors']
player_score=0
computer_score=0
num_round=int(input("Enter number of rounds you want to play:"))
def computer_choice():
    computer_input=rnd.choice(choices)
    print(f'Computer choice is: {computer_input}')
    return computer_input
def user_choice():
    user_input=int(input("Please enter 1 for rock, 2 for paper or 3 for scissors:"))
    while user_input not in [1, 2, 3]:
        user_input=int(input("Invalid input. Please enter 1 for rock, 2 for paper or 3 for scissors:"))
    print(f'User choice is: {choices[user_input-1]}')
    return choices[user_input-1]
def determine_winner(user, computer):
    global player_score
    global computer_score
    if user==computer:
        return "It is a tie!"
    elif(user=='rock' and computer=='scissors') or (user=='paper'and computer=='rock') or (user=='scissors' and computer=='paper'):
        player_score+=1
        return "You Win!"
    else:
        computer_score+=1
        return "Computer Wins!"

def play_round():
    for i in range(num_round):
        print(f"\nRound {i+1}")
        user=user_choice()
        computer=computer_choice()
        determine_winner(user,computer)
        print(f"Player score: {player_score}   Computer score: {computer_score}")
    if player_score>computer_score:
        print("\nCongratulations! You won the game!")
    elif player_score<computer_score:
        print("\nSorry! You lost the game.")
    else:
        print("\nIt's a tie!")
play_round()
