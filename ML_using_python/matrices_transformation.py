import numpy as np
rows=int(input("Enter number of rows:"))
columns=int(input("Enter number of columns:"))
matrix=[]
for i in range(rows):
    row=[]
    for j in range(columns):
        row.append(int(input(f"Enter element {[i+1]}{[j+1]}:")))
    matrix.append(row)
#r1=r1*4
if rows>=1:
    for i in range(columns):
        matrix[0][i]=matrix[0][i]*4
#r2<->r3
if rows>=3:
    matrix[1],matrix[2]=matrix[2],matrix[1]
#c3=c3-10
if columns>=3:
    for i in range(rows):
        matrix[i][2]=matrix[i][2]-10
#c1=c1<->c2
if columns>=2:
    for i in range(rows):
        matrix[i][0],matrix[i][1]=matrix[i][1],matrix[i][0]
for i in range(len(matrix)):
    print(*matrix[i])

r=np.array(matrix)
rank=np.linalg.matrix_rank(r)
print("Rank of the matrix is:",rank)