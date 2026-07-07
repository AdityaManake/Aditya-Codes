import random as rnd 
choices = ['rock', 'paper', 'scissors']
def computer_choice():
    return rnd.choice(choices)
def user_choice():
    user_input=input("Enter rock, paper or scissors:").lower()
    while user_input not in choices:
        user_input=input("Invalid input. Please enter rock, paper or scissors:").lower()
    return user_input
def determine_winner(user, computer):
    if user==computer:
        return "It is a tie!"
    elif(user=='rock' and computer=='scissors') or (user=='paper' and computer=='rock')or (user=='scissors' and computer=='paper'):
        return "You win!"
    else:
        return "Computer Wins!"
def play_game():
    user=user_choice()
    computer=computer_choice()
    print(determine_winner(user,computer))

play_game()