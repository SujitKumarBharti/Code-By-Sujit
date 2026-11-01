class ProtectedWorksheet:
    def __init__(self, sheet_name):                         # Function definition
        self.sheet_name = sheet_name                        # Assign variable value
        self.cells = {}                                     # Assign variable value
        self.locked_cells = set()                           # Assign variable value

    def set_cell(self, cell, value, lock=False):            # Function definition
        if cell in self.locked_cells:                       # Check condition
            raise PermissionError(f"Cell {cell} is locked and protected!")
        self.cells[cell] = value                            # Assign variable value
        if lock:                                            # Check condition
            self.locked_cells.add(cell)

sheet = ProtectedWorksheet("FinancialReport")               # Assign variable value
sheet.set_cell("A1", "Gross Revenue: $500,000", lock=True)  # Assign variable value
print("Cell A1 stored value:", sheet.cells["A1"])           # Display output result
try:
    sheet.set_cell("A1", "Tampered Value")
except PermissionError as e:
    print("Security policy enforced:", e)                   # Display output result
