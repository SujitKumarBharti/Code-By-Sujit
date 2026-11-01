class Address:
    def __init__(self, city, state):
        self.city = city                                 # Perform calculation
        self.state = state                               # Perform calculation

class Person:
    def __init__(self, name, age, address):
        self.name = name                                 # Perform calculation
        self.age = age                                   # Perform calculation
        self.address = address                           # Perform calculation

p = Person("Sujit", 20, Address("Ranchi", "Jharkhand"))  # Perform calculation

print("Person Details:")                                 # Display demonstrate nested structures (N... result
print(f"Name : {p.name}")                                # Display demonstrate nested structures (N... result
print(f"Age  : {p.age}")                                 # Display demonstrate nested structures (N... result
print(f"City : {p.address.city}")                        # Display demonstrate nested structures (N... result
print(f"State: {p.address.state}")                       # Display demonstrate nested structures (N... result
