class BankAccount:
    def __init__(self, accountnumber, balance):
        self.accountnumber = accountnumber
        self.__balance = balance  #private: we use __ to make it private

    def deposit(self, amount):
        self.__balance += amount

    def get_balance(self):
        return self.__balance

account = BankAccount("123456789", 5000)
print("Initial Balance :", account.get_balance())
account.deposit(2000)
print("New Balance:", account.get_balance())