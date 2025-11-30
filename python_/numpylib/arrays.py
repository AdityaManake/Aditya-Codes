import numpy as np
arr=np.array([1,2,3,4,5])
#used to create an array or a matrix with elements of 0
zeroes_array=np.zeros((2,2))
#used to create an array or a matrix with elements of 1
ones_array=np.ones((3,3))
#used to create an array or a matrix with elements of user's desire
filled_Array=np.full((2,2),7)
#used to create an identity matrix
identity_matrix=np.eye(3)
print("Normal array:")
print(arr)
print("Matrix with all elements as zero:")
print(zeroes_array)
print("Matrix with all elements as one:")
print(ones_array)
print("Matrix with all elements as users choice:")
print(filled_Array)
print("Identity matrix:")
print(identity_matrix)