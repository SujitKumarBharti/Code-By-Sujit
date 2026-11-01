from typing import Union

class UnionContainer:
    def __init__(self, val: Union[int, float, str]):
        self.value = val                     # Perform calculation

    def get_info(self):
        return f"Value: {self.value} (Type: {type(self.value).__name__})"

u1 = UnionContainer(42)                      # Perform calculation
print(u1.get_info())                         # Display demonstrate union in C (dynamic ... result

u2 = UnionContainer(3.14159)                 # Perform calculation
print(u2.get_info())                         # Display demonstrate union in C (dynamic ... result

u3 = UnionContainer("Python Dynamic Union")  # Perform calculation
print(u3.get_info())                         # Display demonstrate union in C (dynamic ... result
