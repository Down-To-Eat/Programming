class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no

    def display(self):
        print(self.name, self.roll_no)


s1 = Student("Rahul", 101)

s1.display()

class Student:
    def __init__(self, name, roll):
        self.name = name
        self.roll = roll

    def display(self):
        print(self.name, self.roll)


s1 = Student("Rahul", 101)
s2 = Student("Amit", 102)
s3 = Student("Priya", 103)

s1.display()
s2.display()
s3.display()