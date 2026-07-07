import random

die = [1, 2, 3, 4, 5, 6]
events = {
    "A": [2, 4, 6],
    "B": [1, 3, 5],
    "C": [5, 6]
}


sample = [random.choice(die) for _ in range(10000)]

successes = 0
for name, outcomes in events.items():
   
    for num in sample:
        if num in outcomes:
            successes += 1

    probability = successes / len(sample)
    print(f"The probability of event {name} is {probability:.4f}")
    successes = 0
