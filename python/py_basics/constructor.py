class character:
    def __init__(self,name,attack,defence):  #constructor
        self.name=name
        self.attack=attack
        self.defence=defence
    def show(self):
        print(f"{self.name} deals {self.attack} damage and has {self.defence} defence")
worrior=character("Aditya",100,75)
archer=character("Archer",80,50)
worrior.show()
archer.show()