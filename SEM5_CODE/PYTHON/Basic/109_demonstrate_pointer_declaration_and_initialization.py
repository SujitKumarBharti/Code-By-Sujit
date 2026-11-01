val = [10, 20, 30]                           # Perform calculation
ref = val                                    # ref points to the exact same list in memory

print("Original val list :", val)            # Display demonstrate pointer declaration ... result
print("Address of val     :", id(val))       # Display demonstrate pointer declaration ... result
print("Address of ref     :", id(ref))       # Display demonstrate pointer declaration ... result

ref.append(40)                               # Modifying via reference

print("After modification via ref:")         # Display demonstrate pointer declaration ... result
print("val list           :", val)           # Display demonstrate pointer declaration ... result
