class Student:
    def __init__(self, roll_no, name, marks):
        self.roll_no = roll_no               # Perform calculation
        self.name = name                     # Perform calculation
        self.marks = marks                   # Perform calculation

    def display(self):
        print(f"Roll No: {self.roll_no}")    # Display create a structure for student d... result
        print(f"Name   : {self.name}")       # Display create a structure for student d... result
        print(f"Marks  : {self.marks}")      # Display create a structure for student d... result

s1 = Student(101, "Sujit Kumar", 96.0)       # Perform calculation
print("--- Student Details ---")             # Display create a structure for student d... result
s1.display()
