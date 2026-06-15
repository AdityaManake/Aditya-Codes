import torch 
import numpy as np 
my_tensor= torch.arange(15)
#reshaping if the size is known 
my_tensor=my_tensor.reshape(3,5)
# reshaping if we dont know the size just put -1 in that place 
my_tensor=my_tensor.reshape(5,-1)
print(my_tensor)

#slicing 
print(my_tensor[1:3,])

tensor_a= torch.tensor([1,2,3,4,5])
tensor_b=torch.tensor([5,4,3,2,1])
#addition
print(torch.add(tensor_a,tensor_b))
#substraction 
print(torch.subtract(tensor_a,tensor_b))
#multiplication 
print(torch.multiply(tensor_a,tensor_b))
#division
print(torch.divide(tensor_a,tensor_b))
#exponential
print(torch.pow(tensor_a,2))
#remainder
print(torch.remainder(tensor_a,tensor_b))