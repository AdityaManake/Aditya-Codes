import time
import threading
def calc_square(array):
    print("Calculating Square!")
    for num in array:
        time.sleep(0.2)
        print(f"square of {num} is {num*num}\n")

def calc_cube(array):
    print("Calculating cube!")
    for num in array:
        time.sleep(0.2)
        print(f"cube of {num} is {num*num*num}\n")
    
array=[1,8,7,5,3]
t=time.time()

#this is sequential execution
'''calc_square(array)
calc_cube(array)'''

#this is parallel execution
thread1=threading.Thread(target=calc_square,args=(array,))
thread2=threading.Thread(target=calc_cube,args=(array,))

thread1.start()
thread2.start()

thread1.join()
thread2.join()


print("done in:",time.time()-t)
print("Huh...I am done with all my work now!")
