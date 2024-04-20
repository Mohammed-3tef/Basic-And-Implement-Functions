# Basic Projects:
---> **Small Basics Projects by some languages like: C++, Python, .... etc.**

## The Algorithms :
---> **They are algorithms for some not easy functions, And here they are:**

<details>
 <summary>( I ) Count Letters.</summary>

 1. ***Function `printRLE`***:
    - This function takes a string `s` as input.
    - It sorts the characters in the string in ascending order.
    - It then counts the occurrences of each character:
        - While the current character is the same as the next character, it increments the count and moves to the next character.
        - When the next character is different, it prints the character and its count.
    - The function effectively prints the Run-Length Encoding (RLE) of the input string.

 2. ***Main Function***:
    - The `main` function starts by enabling fast I/O using the `Hero` macro.
    - It reads a string `x` from standard input (keyboard).
    - It calls the `printRLE` function with `x` as the argument to print the RLE of the input string.

 3. ***End of Program***:
    - The program returns 0 to indicate successful execution.

In summary, this code reads a string, sorts its characters, and then prints the RLE (character followed by its count) of the string. For example, if the input string is "**aaabbbcc**", the output will be:
```
a : 3
b : 3
c : 2
```

</details>


<details>
 <summary>( II ) Distinct Characters.</summary>

 1. ***Function `cntDistinct`***:
    - The function `cntDistinct` takes a string `str` as its parameter.
    - It creates an `unordered_set` named `s`, which stores unique elements.
    - A `for` loop iterates over each character in the string `str`.
    - Each character is inserted into the set `s`. If the character is already present, the set remains unchanged because sets only store unique elements.
    - After the loop completes, the function returns the size of the set `s`, which represents the count of unique characters in the string.

 2. ***Main Function***:
    - The `main` function starts by declaring a string variable `e`.
    - It reads a string from standard input (keyboard) and stores it in `e`.
    - It then calls the `cntDistinct` function with `e` as the argument and prints the result, which is the number of unique characters in the string `e`.
    - Finally, the program returns 0, indicating successful execution.
 
 3. ***End of Program.***
</details>


<details>
 <summary>( III ) Multiply the matrix by the scalar.</summary>

 1. ***Function Definitions***:
    - `void read_matrix(ll row, ll column, int** matrix)`: This function reads the elements of a matrix from the user. It takes the number of rows and columns as well as a pointer to a pointer of integers (which represents the matrix) as arguments.
    - `void write_matrix(ll row, ll column, int** matrix)`: This function prints the matrix to the console. It also takes the number of rows and columns and the matrix as arguments.
    - `void multiply_by_scalar(ll row, ll column, int** matrix, ll scalar)`: This function multiplies each element of the matrix by a scalar value provided by the user.

 2. ***Main Function***:
    - The `main` function begins with a greeting message to the user.
    - It then prompts the user to enter the number of rows and columns for the matrix.
    - Memory is dynamically allocated for the matrix using `new` based on the number of rows and columns entered by the user.
    - The `read_matrix` function is called to read the matrix elements from the user.
    - The `write_matrix` function is called to print the original matrix.
    - The user is prompted to enter a scalar value.
    - The `multiply_by_scalar` function is called to multiply the matrix by the scalar.
    - The `write_matrix` function is called again to print the modified matrix.

 3. ***Program Flow***:
    - The user is interactively involved throughout the program, entering the size of the matrix, its elements, and the scalar value for multiplication.
    - The program outputs the matrix before and after the scalar multiplication.

 4. ***Memory Management***:
    - We allocate memory for the matrix dynamically using `new`.
    - After using the matrix, we free the allocated memory using `delete[]`.

 5. ***End of Program***:
    - We display a thank-you message and terminate the program.

</details>

<details>
 <summary>( IV )  Sequence Arrangement Solver.</summary>
 
 1. ***Input and Initialization***:
    - `int n;`: We declare an integer variable `n` to store the number of elements (people in line).
    - `cin >> n;`: We read the value of `n` from the standard input (keyboard).
    - `vector<int> arr(n), position(n, 0);`: We create two vectors:
        - `arr` to store the input sequence of people.
        - `position` to keep track of the positions directly behind each person (initialized with zeros).
    - `int x = 0;`: We initialize an integer variable `x` to zero. This variable will later store the starting position.

 2. ***Reading the Input Sequence***:
    - We use a `for` loop to read the input sequence into the `arr` vector.
    - If the current element is not `-1`, we update the `position` vector to reflect the position of that element in the sequence.
    - If the current element is `-1`, we set `x` to the current index plus one, indicating the starting position.

 3. ***Output the Sequence***:
    - We print the starting position (stored in `x`).
    - Then, we follow the chain of positions using a `while` loop:
        - If the next position is not zero (i.e., there's a valid successor), we print the next position and update `x` to that position.
        - We continue this process until we reach the end of the chain (when the next position is zero).

 4. ***End of Program.***
</details>


<details>
 <summary>( V ) The Most Repeated Character.</summary>

1. ***Function `mostFrequent`***:
    - This function takes a string `text` as input.
    - It initializes variables: `max` (to track the maximum count), `count` (to count occurrences of each character), and `maxCharcter` (to store the most frequent character).
    - The outer loop iterates over characters from space `' '` to tilde `'~'`.
    - The inner loop counts how many times the current character appears in the input string `text`.
    - If the count is greater than the current maximum, it updates the maximum count and the most frequent character.
    - The function returns the most frequent character.

2. ***Main Function***:
    - The `main` function starts by declaring an integer variable `test`.
    - It reads a string `txt` from standard input (keyboard).
    - It calls the `mostFrequent` function with `txt` as the argument and prints the result (the most frequent character).

3. ***End of Program.***:
    - The program returns 0 to indicate successful execution.
</details>


<details>
 <summary>( VI ) .</summary>

</details>
