Sure, I can help you with that! This problem can be easily solved by iterating through the input string and checking for adjacent pairs of different characters. Here's a Python code to solve this problem:

```python
# Read the number of test cases
t = int(input())

# Iterate through test cases
for _ in range(t):
    n = int(input())  # Length of the string
    s = input()       # The string
    
    # Initialize a variable to keep track of the minimum length
    length = 0
    
    # Iterate through the characters of the string
    for i in range(1, n):
        # If the adjacent characters are different, increase the length by 2 and skip the next character
        if s[i] != s[i-1]:
            length += 2
            i += 1
    
    print(n - length)  # Output the minimum length
```

This code reads the input, iterates through the string while counting the adjacent different characters, and then outputs the minimum length for each test case.

I hope this helps! Let me know if you have any other questions. 😊
