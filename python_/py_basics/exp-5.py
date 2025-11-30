from math import prod
total_outcomes=50
maths=30
science=20
both=10
p_A=maths/total_outcomes
p_B=science/total_outcomes
p_both=both/total_outcomes
numerator=prod([p_A])
denominator=prod([p_B])
p_A_given_B=numerator/denominator
print("P(A|B) =", p_A_given_B)