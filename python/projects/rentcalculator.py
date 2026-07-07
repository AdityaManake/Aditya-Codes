class RentCalculator:
    def __init__(self, monthly_rent=0, months=12):
        self.monthly_rent=monthly_rent
        self.months=months
    def inputDetails(self):
        self.number_of_people=int(input("Enter number of people sharing the rent: "))
        self.monthly_rent=float(input("Enter the total monthly rent: "))
        self.maintenance_cost=float(input("Enter the monthly maintenance cost: "))
        self.other_expenses=float(input("Enter any other monthly expenses: "))
    def calculateShare(self):
        self.total_monthly_cost=self.monthly_rent + self.maintenance_cost + self.other_expenses
        self.share_per_person=self.total_monthly_cost/self.number_of_people
    def displayShare(self):
        print(f"Total monthly cost: {self.total_monthly_cost:.2f} Rs")
        print(f"Share per person: {self.share_per_person:.2f} Rs")

rent1=RentCalculator()
rent1.inputDetails()
rent1.calculateShare()
rent1.displayShare()

