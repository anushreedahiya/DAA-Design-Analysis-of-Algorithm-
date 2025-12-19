## Design and Analysis of Algorithms (DAA)
### Overview
Design and Analysis of Algorithms (DAA) is a core computer science subject that focuses on developing efficient algorithms and analyzing their performance in terms of time complexity and space complexity.
This repository contains implementations and theoretical explanations of fundamental algorithms used in searching, sorting, graph processing, greedy techniques, and dynamic programming.
The goal of this project is to:
-Understand how algorithms are designed
-Analyze their efficiency
-Compare multiple approaches to solve the same problem
-Apply algorithms to real-world scenarios

### Algorithm Analysis
Algorithm analysis evaluates the performance of an algorithm in terms of:
* **Time Complexity** – number of operations executed
* **Space Complexity** – amount of memory used

### Asymptotic Notations
* **Big-O (O)**: Upper bound (worst-case)
* **Omega (Ω)**: Lower bound (best-case)
* **Theta (Θ)**: Tight bound (average-case)

## Algorithms Covered
### Searching Algorithms
#### 1. Linear Search
###### Theory:
Linear search is the simplest searching technique where each element of the list is checked sequentially until the target element is found or the list ends.
###### Key Points:
-Works on both sorted and unsorted data
-Easy to implement
-Inefficient for large datasets
###### Time Complexity:
-Best Case: O(1)
-Average Case: O(n)
-Worst Case: O(n)

#### 2. Binary Search
###### Theory:
Binary search works on sorted arrays by repeatedly dividing the search space into half. It compares the middle element with the target value and discards half of the elements accordingly.
###### Key Points:
-Much faster than linear search
-Requires sorted data
-Uses divide-and-conquer strategy
###### Time Complexity:
-Best Case: O(1)
-Worst Case: O(log n)

### Sorting Algorithms
#### 3. Quick Sort
###### Theory:
Quick sort is a divide-and-conquer algorithm that selects a pivot element and partitions the array such that elements smaller than the pivot are on the left and larger ones on the right.
###### Advantages:
-Very fast in practice
-In-place sorting
###### Disadvantages:
-Worst-case complexity if pivot selection is poor
###### Time Complexity:
-Best/Average Case: O(n log n)
-Worst Case: O(n²)

#### 4. Merge Sort
###### Theory:
Merge sort divides the array into smaller subarrays until each subarray has one element, then merges them in sorted order.
###### Key Points:
-Stable sorting algorithm
-Uses extra memory
-Suitable for large datasets
###### Time Complexity:
-Best/Average/Worst Case: O(n log n)

### Graph Algorithms
#### 5. Kruskal’s Algorithm
###### Theory:
Kruskal’s algorithm finds a Minimum Spanning Tree (MST) by selecting edges in increasing order of weight while avoiding cycles.
###### Approach:
-Sort edges by weight
-Use Union-Find to detect cycles
###### Time Complexity:
O(E log E)

#### 6. Prim’s Algorithm
###### Theory:
Prim’s algorithm also finds a Minimum Spanning Tree but grows the tree one vertex at a time by selecting the minimum weight edge connected to the tree.
###### Key Difference from Kruskal:
-Works better on dense graphs
###### Time Complexity:
-Using priority queue: O(E log V)

#### 7. Dijkstra’s Algorithm
###### Theory:
Dijkstra’s algorithm finds the shortest path from a source vertex to all other vertices in a weighted graph with non-negative edge weights.
###### Applications:
-GPS navigation
-Network routing
###### Time Complexity:
O(E log V)

#### 8. Dijkstra (Input: Vertex & Edge)
###### Theory:
This version takes dynamic input of vertices and edges and computes shortest paths using adjacency lists or matrices.
###### Purpose:
-Understand real-time graph input handling
-Practical implementation of shortest path problems

### Greedy Algorithms
#### 9. Fractional Knapsack
###### Theory:
Fractional knapsack allows taking fractions of items to maximize total profit.
###### Strategy:
-Sort items by profit/weight ratio
-Pick items greedily
###### Time Complexity:
O(n log n)

#### 10. Optimal Merge Pattern
###### Theory:
Optimal Merge Pattern minimizes the total cost of merging files by always merging the two smallest files first.
###### Variants Covered:
-Standard Optimal Merge Pattern
-Multiplier-based Optimal Merge Pattern
-Files with size ≤ 500
-Step-wise printing of merge and multiplier cost
###### Applications:
-File compression
-External sorting
###### Time Complexity:
O(n log n)

### Dynamic Programming
#### 11. 0/1 Knapsack
###### Theory:
In 0/1 knapsack, items cannot be divided. Each item can either be included or excluded.
###### Approach:
-Use DP table
-Build solution bottom-up
###### Time Complexity:
O(nW)

#### 12. Floyd–Warshall Algorithm
###### Theory:
Floyd–Warshall is a multi-source shortest path algorithm that computes shortest paths between all pairs of vertices.
###### Key Features:
-Handles negative weights (no negative cycles)
-Uses adjacency matrix
###### Time Complexity:
O(V³)

#### 13. Floyd–Warshall (With Example)
###### Theory:
This implementation includes a step-by-step example to clearly show how distances are updated across iterations.

#### 14. Floyd Time Travel Problem
###### Theory:
This problem uses Floyd–Warshall to detect negative cycles, which indicate time travel or paradox scenarios.
###### Key Concept:
If dist[i][i] < 0, a negative cycle exists.

### Hybrid Algorithms
#### 15. Merge Sort with Binary Search
###### Theory:
Data is first sorted using merge sort and then searched using binary search to ensure fast retrieval.

#### 16. Optimal with Quick Sort
###### Theory:
Quick sort is used to optimize merging and searching operations for better average-case performance.


### Comparison Summary
| Algorithm           | Paradigm         | Time Complexity |
| ------------------- | ---------------- | --------------- |
| Linear Search       | Brute Force      | O(n)            |
| Binary Search       | Divide & Conquer | O(log n)        |
| Merge Sort          | Divide & Conquer | O(n log n)      |
| Quick Sort          | Divide & Conquer | O(n log n)      |
| Kruskal             | Greedy           | O(E log E)      |
| Prim                | Greedy           | O(V²)           |
| Dijkstra            | Greedy           | O(V²)           |
| Floyd–Warshall      | DP               | O(V³)           |
| Fractional Knapsack | Greedy           | O(n log n)      |
| 0/1 Knapsack        | DP               | O(nW)           |


#### Conclusion
This README provides a structured overview of **DAA algorithms with theory, paradigms, and complexity analysis**. Understanding these algorithms builds a strong foundation for problem-solving, competitive programming, and system design.
