# String to Integer (atoi) – C Implementation

This repository contains a clean and optimized C implementation of the **"String to Integer (atoi)"** problem from LeetCode.

## 📌 Problem Statement

Implement the `myAtoi(char *s)` function, which converts a string to a 32-bit signed integer.

The function must:

1. Ignore leading whitespace.
2. Handle optional '+' or '-' sign.
3. Read digits until a non-digit character appears.
4. Return 0 if no valid digits are found.
5. Clamp the result within the 32-bit signed integer range:
   - Minimum: -2^31
   - Maximum: 2^31 - 1

---

## 🚀 Approach

- Skip leading spaces.
- Determine sign.
- Convert digit characters to numeric value.
- Use `long` to safely detect overflow.
- Clamp result using `INT_MAX` and `INT_MIN`.

Time Complexity: **O(n)**  
Space Complexity: **O(1)**  

---
