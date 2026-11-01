def impute_missing_mean(data):                                                  # Function definition
    valid_numbers = [x for x in data if x is not None]                          # Assign variable value
    mean_val = sum(valid_numbers) / len(valid_numbers) if valid_numbers else 0  # Assign variable value
    return [mean_val if x is None else x for x in data]                         # Return result

def simple_decision_rule(temperature, humidity):                                # Function definition
    if temperature > 30 and humidity > 70:                                      # Check condition
        return "Don't Play"                                                     # Return result
    return "Play"                                                               # Return result

dataset_with_missing = [25.0, None, 32.0, 28.0, None, 30.0]                     # Assign variable value
clean_dataset = impute_missing_mean(dataset_with_missing)                       # Assign variable value
print("Cleaned data:", [round(x, 1) for x in clean_dataset])                    # Display output result
print("Decision for (32C, 75%):", simple_decision_rule(32, 75))                 # Display output result
