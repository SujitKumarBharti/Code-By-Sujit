def mean_squared_error(actual, predicted):                                     # Function definition
    return sum((a - p) ** 2 for a, p in zip(actual, predicted)) / len(actual)  # Return result

def mean_absolute_error(actual, predicted):                                    # Function definition
    return sum(abs(a - p) for a, p in zip(actual, predicted)) / len(actual)    # Return result

actual_values = [10.0, 20.0, 15.0, 30.0]                                       # Assign variable value
predicted_values = [12.0, 18.0, 14.0, 32.0]                                    # Assign variable value

mse = mean_squared_error(actual_values, predicted_values)                      # Assign variable value
mae = mean_absolute_error(actual_values, predicted_values)                     # Assign variable value
print("Actual:", actual_values)                                                # Display output result
print("Predicted:", predicted_values)                                          # Display output result
print("Mean Absolute Error (MAE):", round(mae, 2))                             # Display output result
print("Mean Squared Error (MSE):", round(mse, 2))                              # Display output result
