# Searching_in_cpp

## AIM
To study, understand, and implement various searching algorithms in C++, analyze their working principles, compare their efficiency, and determine the most suitable algorithm for different scenarios.

---

## SOFTWARE USED
- **VS Code**

---

## OBJECTIVES
- Implement searching algorithms in C++.  
- Understand **linear** and **binary search** techniques.  
- Analyze **time complexity** and **space complexity**.  
- Compare the efficiency of different searching algorithms.  
- Conclude which algorithm is best under given conditions.  

---

## THEORY
Searching algorithms are techniques used to locate a particular element in a dataset, such as arrays, linked lists, or databases.  

They are broadly categorized as:

### 1. Linear Search (Sequential Search)
- Examines each element one by one.  
- Simple to implement but inefficient for large datasets.  
- **Time Complexity:** O(n)  
- **Space Complexity:** O(1)  

### 2. Binary Search
- Applicable only on **sorted arrays**.  
- Repeatedly divides the search interval in half until the element is found.  
- More efficient than linear search.  
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1) iterative, O(log n) recursive  

### 3. Interpolation Search
- Predicts the likely position of the element using a formula based on the key.  
- Works best on **uniformly distributed sorted data**.  
- **Time Complexity:** O(log log n) (best), O(n) (worst)  
- **Space Complexity:** O(1)  

### 4. Exponential Search
- Designed for **unbounded or infinite lists**.  
- Steps:  
  1. Find the range by repeated doubling.  
  2. Apply binary search within the identified range.  
- **Time Complexity:** O(log n)  
- **Space Complexity:** O(1)  

### 5. Jump Search
- Jumps ahead by fixed steps to find the block containing the target element.  
- Performs linear search within that block.  
- Optimal step size = √n.  
- **Time Complexity:** O(√n)  
- **Space Complexity:** O(1)  

---

## Comparison Table

| Algorithm           | Best Case | Worst Case | Space Complexity | Data Requirement        |
|--------------------|-----------|------------|-----------------|-----------------------|
| Linear Search      | O(1)      | O(n)       | O(1)            | Sorted/Unsorted       |
| Binary Search      | O(1)      | O(log n)   | O(1)            | Sorted                |
| Interpolation Search | O(1)    | O(n)       | O(1)            | Sorted, Uniform       |
| Jump Search        | O(√n)     | O(√n)      | O(1)            | Sorted                |
| Exponential Search | O(log n)  | O(log n)   | O(1)            | Sorted                |


# Searching Algorithms – Algorithm Outlines

---

## 1. Binary Search Algorithm

**Precondition:** The array must be sorted.

**Algorithm:**
1. Initialize two pointers:  
   - `low = 0` (start of array)  
   - `high = size - 1` (end of array)  
2. Repeat while `low <= high`:  
   - Calculate middle index: `mid = (low + high) / 2`  
   - If `arr[mid] == key`, return `mid` (key found)  
   - If `arr[mid] < key`, set `low = mid + 1` (search right half)  
   - If `arr[mid] > key`, set `high = mid - 1` (search left half)  
3. If the loop ends without finding the key, return `-1` (key not found)  

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)  

---

## 2. Linear Search Algorithm

**Algorithm:**
1. Start from the first element (`i = 0`) of the array.  
2. Repeat for each element while `i < size`:  
   - If `arr[i] == key`, return `i` (key found)  
   - Increment `i` by 1  
3. If the loop ends without finding the key, return `-1` (key not found)  

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  

---

## 3. Sequential Search Algorithm

Sequential Search is similar to Linear Search but uses a `while` loop.

**Algorithm:**
1. Initialize `index = 0`.  
2. While `index < size`:  
   - If `arr[index] == key`, return `index` (key found)  
   - Increment `index` by 1  
3. If the loop ends without finding the key, return `-1` (key not found)  

**Time Complexity:** O(n)  
**Space Complexity:** O(1)  

---

## ✅ Summary

- **Binary Search** is faster but requires a **sorted array**.  
- **Linear Search** and **Sequential Search** can work on **unsorted arrays** but are slower for large datasets.  


