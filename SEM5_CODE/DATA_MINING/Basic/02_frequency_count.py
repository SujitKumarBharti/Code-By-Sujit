values = ["red", "blue", "red", "green", "blue", "red"]
frequencies = {}

for value in values:
    frequencies[value] = frequencies.get(value, 0) + 1  # Count each category

for value, count in sorted(frequencies.items()):
    print(value, count)