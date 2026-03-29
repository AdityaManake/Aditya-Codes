import time
import multiprocessing

square_result=[]
def calc_square(array):
    global square_result 
    print("Calculating square!")
    for num in array:
        #time.sleep(5)
        print(f"Square of {num} is {num*num}")
        square_result.append(num*num)
    print(f"square result:{square_result}")

'''def calc_cube(array):
    print("Calculating cube!")
    for num in array:
        time.sleep(5)
        print(f"Cube of {num} is {num*num*num}")'''
        
if __name__ == "__main__":
    array=[2,3,8,9]
    p1=multiprocessing.Process(target=calc_square,args=(array,))
    #p2=multiprocessing.Process(target=calc_cube,args=(array,))
    p1.start()
    #p2.start()
    p1.join()
    #p2.join()
    print(f"square result:{square_result}") #this is not working because of multiprocessing as it creates a separate memory space for each process
    print("Done!")