from collections import Counter
import math

def euclidean_distance(p1, p2):                                                              # Function definition
    return math.sqrt(sum((a - b) ** 2 for a, b in zip(p1, p2)))                              # Return result

def knn_predict(train_data, target, k=3):                                                    # Function definition
    distances = [(euclidean_distance(point, target), label) for point, label in train_data]  # Assign variable value
    distances.sort(key=lambda x: x[0])                                                       # Assign variable value
    k_nearest = [label for _, label in distances[:k]]                                        # Assign variable value
    return Counter(k_nearest).most_common(1)[0][0]                                           # Return result

train_dataset = [                                                                            # Assign variable value
    ([1.0, 1.1], "A"),
    ([1.2, 0.9], "A"),
    ([5.0, 5.2], "B"),
    ([5.3, 4.8], "B")
]

sample = [1.1, 1.0]                                                                          # Assign variable value
predicted_label = knn_predict(train_dataset, sample, k=2)                                    # Assign variable value
print("Sample:", sample, "Predicted class:", predicted_label)                                # Display output result
