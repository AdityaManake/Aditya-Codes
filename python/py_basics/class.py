class Student():
    def initializeData(self,name,age):
        self.name=name
        self.age=age
    def show(self):
        print(f"{self.name}'s age is {self.age}")
student1=Student()
student1.initializeData("Aditya",17)
student1.show()
    