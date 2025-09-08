'''
In OOP (Object-Oriented Programming), polymorphism means the same function or 
operation can behave differently depending on the object (or context) it’s applied to.
'''
#polymorphism with classes method overriding
class Bird:
    def sound(self):
        print("Birds can chirp")
class Crow:
    def sound(self):
        print("Crows can caw")
class Peacock:
    def sound(self):
        print("Peacocks can scream")
bird1=Crow()
bird2=Peacock()
bird1.sound()
bird2.sound()