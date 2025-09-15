'''
By importing libraries
import numpy as np
rows=int(input("Enter number of rows:"))
columns=int(input("Enter number of columns:"))
matrix = np.array([list(map(int, input().split())) for _ in range(rows)])
print(matrix)
newmatrix=np.transpose(matrix)
print(newmatrix)'''

#Withot importing libraries
rows=int(input("Enter number of rows:"))
columns=int(input("Enter number of columns:"))
matrix=[]
for i in range(rows):
    matrix.append([int (x) for x in input(). split()])
def print_matrix(m):
    for r in m:
        print(*r)
    print()
print("\nOrignal Matrix:")
print_matrix(matrix)

def swap_rows(m,i,j):
    m[i], m[j]= m[j],m[i]

print("\nAfter swapping row 0 and row 1:")
swap_rows(matrix,0,1)
print_matrix(matrix)

def multiply(m,i,k):
    for c in range(len(m[i])):
        m[i][c] *=k

print("\nAfter multiplying row 1 by 2:")
multiply(matrix,1,2)
print_matrix(matrix)
