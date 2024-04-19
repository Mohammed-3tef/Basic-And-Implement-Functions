# Basic Projects:
---> **Small Basics Projects by some languages like: C++, Python, ....etc.**

## The Algorithms :
<details>
 <summary>( I )  Sequence Arrangement Solver.</summary>
 
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
 <summary>( III ) The Most Repeated Character.</summary>

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
 <summary>( IV ) .</summary>

</details>
