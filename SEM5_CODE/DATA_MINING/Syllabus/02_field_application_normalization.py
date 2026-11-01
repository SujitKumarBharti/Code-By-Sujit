def min_max_normalize(data):                                                 # Function definition
    min_val = min(data)                                                      # Assign variable value
    max_val = max(data)                                                      # Assign variable value
    if max_val == min_val:                                                   # Check condition
        return [0.0 for _ in data]                                           # Return result
    return [(x - min_val) / (max_val - min_val) for x in data]               # Return result

raw_scores = [45, 82, 95, 60, 78, 90, 88]                                    # Assign variable value
normalized_scores = min_max_normalize(raw_scores)                            # Assign variable value
print("Raw scores:", raw_scores)                                             # Display output result
print("Normalized scores (0-1):", [round(x, 2) for x in normalized_scores])  # Display output result
