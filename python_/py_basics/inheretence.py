'''
Inheritance is a mechanism in Object-Oriented Programming where a class (child / derived class) 
can reuse the properties and methods of another class (parent / base class)
'''
class Animal: #parent class 
    def speak(self):
        print("Animal speaks")
class Dog(Animal): #child class inheriting from Animal class
    def bark(self):
        print("Dogs bark")
dog1=Dog()
dog1.speak()
dog1.bark()