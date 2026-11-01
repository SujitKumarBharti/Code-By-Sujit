def train_test_split(dataset, test_ratio=0.3):                             # Function definition
    split_index = int(len(dataset) * (1 - test_ratio))                     # Assign variable value
    return dataset[:split_index], dataset[split_index:]                    # Return result

def k_fold_splits(dataset, k=3):                                           # Function definition
    fold_size = len(dataset) // k                                          # Assign variable value
    folds = []                                                             # Assign variable value
    for i in range(k):                                                     # Iterate through loop
        test = dataset[i * fold_size : (i + 1) * fold_size]                # Assign variable value
        train = dataset[: i * fold_size] + dataset[(i + 1) * fold_size :]  # Assign variable value
        folds.append((train, test))
    return folds                                                           # Return result

data = list(range(1, 10))                                                  # Assign variable value
train_set, test_set = train_test_split(data)                               # Assign variable value
print("Train set:", train_set)                                             # Display output result
print("Test set:", test_set)                                               # Display output result

folds = k_fold_splits(data, k=3)                                           # Assign variable value
print("Total K-folds generated:", len(folds))                              # Display output result
