class Student:
    def __init__(self, roll_no, name, marks):
        self.roll_no = roll_no                                        # Perform calculation
        self.name = name                                              # Perform calculation
        self.marks = marks                                            # Perform calculation

students = [                                                          # Perform calculation
    Student(1, "Aarav", 88.5),
    Student(2, "Bhavna", 92.0),
    Student(3, "Chetan", 81.5),
]

print("--- Student Directory ---")                                    # Display store and display details of mul... result
for s in students:                                                    # Iterate through loop
    print(f"Roll: {s.roll_no}, Name: {s.name:<8}, Marks: {s.marks}")  # Display store and display details of mul... result
