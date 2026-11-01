from itertools import combinations

transactions = [                                          # Assign variable value
    {"milk", "bread", "butter"},
    {"bread", "butter"},
    {"milk", "bread"},
    {"milk", "bread", "butter", "eggs"},
    {"bread", "eggs"}
]

min_support_count = 3                                     # Assign variable value
total_transactions = len(transactions)                    # Assign variable value

item_counts = {}                                          # Assign variable value
for t in transactions:                                    # Iterate through loop
    for item in t:                                        # Iterate through loop
        item_counts[item] = item_counts.get(item, 0) + 1  # Assign variable value

frequent_1 = {item: count for item, count in item_counts.items() if count >= min_support_count}
print("Frequent 1-Itemsets (Support >= 3):", frequent_1)  # Display output result

pair_counts = {}                                          # Assign variable value
for t in transactions:                                    # Iterate through loop
    for pair in combinations(sorted(t), 2):               # Iterate through loop
        pair_counts[pair] = pair_counts.get(pair, 0) + 1  # Assign variable value

frequent_2 = {pair: count for pair, count in pair_counts.items() if count >= min_support_count}
print("Frequent 2-Itemsets:", frequent_2)                 # Display output result
