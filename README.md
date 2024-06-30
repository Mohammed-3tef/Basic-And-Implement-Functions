# Basic Projects:
---> **Small Basics Projects and Implement Functions by some languages like: C++, Python, .... etc.**

## The Algorithms:
---> **They are algorithms for some not easy functions, And here they are:**

<details>
 <summary>( I ) Codes.</summary>
 
  1. ***Function Definitions***:
     
     1. **`checkBinary(string num)`**:
        - `int count = 0;`: Initializes an integer variable count to zero. This variable will keep track of the number of valid binary digits encountered.
        - `for (int i = 0; i < int(num.size()); i++)`: Iterates through each character in the input string `num`.
        - `int(num.size())`: calculates the length of the string.
        - `if (num[i] == '0' || num[i] == '1')`: Checks whether the current character at index `i` is either ‘0’ or ‘1’.
        - Inside the `if` block, the `count` variable is incremented by 1.
        - This means that for each valid binary digit encountered (‘0’ or ‘1’), the count increases.
        - After processing all characters, the function compares the final value of `count` with the length of the input string `num`.
        - If they are equal, it means that all characters in `num` are valid binary digits.
        - If the condition is true (i.e., all characters are valid binary digits), the function returns “`Yes`”.
        - Otherwise (if some characters are not valid binary digits), it returns “`No`”.

     2. **`binaryToDecimal(string num)`**:
        - `int dec = 0;`: Initializes an integer variable `dec` to store the final decimal value.
        - `deque<char> bit;`: Creates a deque (double-ended queue) called bit to store the reversed binary digits.
        - `for (int i = 0; i < int(num.size()); i++)`: Iterates through each character in the input string `num`.
        - `bit.push_front(num[i]);`: Adds each character to the front of the `bit` deque.
        - This effectively reverses the order of the binary digits.
        - `for (int i = 0; i < int(bit.size()); i++)`: Iterates through each index in the `bit` deque.
        - `static_cast<int>(bit[i]-'0')`: Converts the character at index `i` (either ‘0’ or ‘1’) to an integer (0 or 1).
        - `pow(2, i)`: Calculates 2 raised to the power of `i`.
        - `dec += ...`: Adds the product of the converted digit and the appropriate power of 2 to the `dec` value.
        - This step evaluates the value of each binary digit and accumulates the decimal value.
        - After processing all binary digits, the function returns the accumulated `dec` value, which represents the decimal equivalent of the binary number.

     3. **`decimalToBinary(int num)`**:
        - `string bin = "";`: Initializes an empty string called bin to store the binary representation.
        - `if (num == 0) {return "0";}`: Checks if the input `num` is zero.
        - If it is, the function immediately returns “0” (since the binary representation of zero is just “0”).
        - `while (num > 0) { ... }`: Enters a loop that continues until num becomes zero.
        - Inside the loop, the following steps are performed for each iteration:
           - `bin = char('0' + num % 2) + bin;`: Converts the remainder to a character (‘0’ or ‘1’) and appends it to the front of the `bin` string.
           - The `+ bin` part ensures that we build the binary representation from right to left.
           - `num /= 2;`: Divides num by 2, effectively shifting to the next binary place value.
        - After processing all binary places, the function returns the accumulated `bin` string, which represents the binary equivalent of the decimal number.

     4. **`addBinary(string A, string B)`**:
        - `if (A.length() > B.length()) {return addBinary(B, A);}`:
          - If the length of string `A` is greater than that of string `B`, swap the arguments and recursively call `addBinary(B, A)`.
          - This ensures that `A` is not shorter than `B`.
        - `int diff = B.length() - A.length();`: calculates the difference in lengths between `B` and `A`.
        - `string padding;`: initializes an empty string called `padding`.
        - The loop adds zeros to `padding` to make the lengths of `A` and `B` equal.
        - The main loop iterates through each index from right to left (from the end of the strings).
        - It performs binary addition based on the values of `A[i]` and `B[i]` and the carry (`carry`).
        - The result is accumulated in the `res` string.
        - Depending on the values of `A[i]` and `B[i]`, the carry is updated accordingly.
        - If the carry is ‘1’, it propagates to the next position.
        - If there’s a carry after processing all digits, it’s appended to the result.
        - The result is reversed to obtain the correct order.
        - Leading zeros are removed by finding the first non-zero digit.
        - The function returns the final result, which is the sum of the binary numbers represented by `A` and `B`.

     5. **`decimalToAnyBase(int n, int k)`**:
        - `string res = "";`: Initializes an empty string called `res` to store the result.
        - The `while` loop continues as long as `n` is greater than zero.
        - Inside the loop:
          - `to_string(n % k)`: Converts the remainder to a string and appends it to the `res` string.
          - `n /= k`: Divides `n` by `k`, effectively shifting to the next place value.
        - After processing all place values, the `res` string contains the digits in reverse order.
        - `reverse(res.begin(), res.end())`: Reverses the order of characters in the `res` string.
        - The function returns the final result, which represents the number in the specified base.
</details>


<details>
 <summary>( II ) Count Words & Letters.</summary>

 1. ***Function Definitions***:

    1. **`void letter_count(string s)`**:
       - This function counts the occurrences of each letter in a given string and prints them out. Here’s how it works step by step:
          - `sort(all(s));`: The string s is sorted alphabetically, so all identical letters are next to each other.
          - `for (int i = 0; s[i] != '\0'; i++)`: A for loop starts, iterating over each character in the string until the null character \0 is reached (end of the string).
          - `if (isalpha(s[i]))`: Inside the loop, it checks if the current character is an alphabetic character.
          - `ll count = 1;`: A variable count is initialized to 1 to start counting the occurrences of the current letter.
          - `while (s[i] == s[i + 1]) {i++, count++;}`: A while loop continues as long as the current character is the same as the next one. For each match, i is incremented to move to the next character, and count is incremented to keep track of the number of occurrences.
          - `cout << s[i] << " => "<< count << endl;`: Once the while loop ends, the character and its count are printed.
    
    2. **`int word_count(string st, char sep = ' ')`**:
       - This function counts the number of words in a string, where words are separated by a specified separator (default is a space character ’ ') .Here’s how it works step by step:
          - `int count = 0;`: Initializes a word count to 0.
          - `bool inWord = false;`: A boolean flag to track whether the current position is inside a word.
          - `for (int i = 0; i < st.length(); i++)`: A for loop iterates over each character in the string.
          - `if (st[i] == sep)`: If the current character is the separator, it checks if it’s at the end of a word.
          - `else {inWord = true;}`: If the current character is not a separator, it’s part of a word, so set the flag to true.
          - `if (inWord) {count++;}`: After the loop, if it ends inside a word, increment the word count.

 2. ***Main Function***:
    - It reads a string `x` from the standard input.
    - It calls `letter_count` to print the count of each letter in x.
    - It calls `word_count` to print the total number of words in x.
    - Finally, the program returns 0, indicating successful execution.
 
 3. ***Example.***:

    Suppose we have the following input string:
    ```plaintext
    "Hello World! Welcome to C++ programming."
    ```
    
    Here's what the output would look like after running the `main` function with this input:
    
    ```plaintext
    The number of letters in the sentence in details:
    C => 1
    H => 1
    W => 2
    a => 1
    c => 1
    d => 1
    e => 3
    g => 2
    i => 1
    l => 4
    m => 3
    n => 1
    o => 5
    p => 1
    r => 3
    t => 1
    
    The number of words in the sentence = 6 words.
    ```
    
 5. ***End of Program.***
</details>


<details>
 <summary>( III ) Distinct Values & Get Index.</summary>

 1. ***Function Definitions***:

    1. **`int cntDistinct(string str)`**:
        - This function takes a string `str` as input.
        - It calculates the number of distinct characters (unique characters) in the given string.
        - Here's how it works:
            - It uses an `unordered_set<char>` (a set that automatically removes duplicates) to store unique characters.
            - The loop traverses the string, and for each character:
                - If the character is not already in the set, it inserts it.
                - If the character is already in the set, it is ignored (since it's not unique).
            - Finally, it returns the size of the set, which represents the count of distinct characters in the string.
    
    2. **`int countDistinct(int arr[], int n)`**:
        - This function takes an array of integers `arr` and its size `n` as input.
        - It calculates the number of distinct elements in the array.
        - Here's how it works:
            - It uses a `set<int>` (a set that automatically removes duplicates) to store unique elements.
            - The loop traverses the array, and for each element:
                - If the element is not already in the set, it inserts it.
                - If the element is already in the set, it is ignored (since it's not unique).
            - Finally, it returns the size of the set, which represents the count of distinct elements in the array.
    
    3. **`long long getIndex(vector<ll> v, ll K)`**:
        - This function takes a vector of `ll` (long long) integers `v` and a target value `K`.
        - It searches for `K` in the vector and returns its index if found; otherwise, it returns -1.
        - Here's how it works:
            - It uses the `find` function from the `<algorithm>` library to search for `K` in the vector.
            - If `K` is found, it calculates the index by subtracting the iterator position from the beginning of the vector.
            - If `K` is not present in the vector, it returns -1.

 2. ***Main Function***:
    - Reads a string `e` and calculates the number of distinct characters using `cntDistinct(e)`.
    - Reads an integer `n` and an array of integers `arr`. Calculates the number of distinct elements using `countDistinct(arr, n)`.
    - Reads a `long long` integer `k` and finds its index in the array using `getIndex(arr, k)`.
    - Prints the results accordingly.
    - Finally, the program returns 0, indicating successful execution.
 
 3. ***End of Program.***
</details>


<details>
 <summary>( IV ) Five in One.</summary>
 
1. ***Function Definitions***:
      - `Max()` : This function sorts the array in descending order (largest to smallest) and then prints the first element, which is the largest number in the array.
      - `Min()` : Similar to the Max function, but it sorts the array in ascending order (smallest to largest) and prints the first element, which is the smallest number.
      - `Prime()` : This function counts the number of prime numbers in the array. A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
      - `Palindrome()` : This function checks how many numbers in the array are palindromes. A palindrome is a number that reads the same backward as forward.
      - `divisors()` : This function returns the number of divisors of a given number. A divisor is a number that can divide another number without leaving a remainder.

2. ***Main Function***:

   1. **Read Number of Elements:**
      - The program prompts the user to enter the number of elements (`num`) that will be in the array.
   
   2. **Create and Fill the Array:**
      - An array `arr` is created with the size specified by the user. The program then reads the elements of the array from the user input.
   
   3. **Find and Display Maximum and Minimum:**
      - The `Max` and `Min` functions are called to find and display the largest and smallest numbers in the array.
   
   4. **Count and Display Prime Numbers:**
      - The `Prime` function is called to count and display the number of prime numbers in the array.
   
   5. **Count and Display Palindrome Numbers:**
      - The `Palindrome` function is called to count and display the number of palindrome numbers in the array.
   
   6. **Find the Number with Maximum Divisors:**
      - A loop runs through each element in the array, calling the `divisors` function to find the number of divisors for each element. It keeps track of the number with the most divisors and, in case of a tie, the larger number.
   
   7. **Display the Number with Maximum Divisors:**
      - After the loop, the program prints the number that has the maximum number of divisors.
   
   8. **End of Program:**
      - The program returns 0, which is a signal that the program has ended successfully.

</details>


<details>
 <summary>( V ) Multiply the matrix by the scalar.</summary>

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
 <summary>( VI )  Sequence Arrangement Solver.</summary>
 
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
 <summary>( VII ) The Most Repeated Character.</summary>

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
 <summary>( VIII ) .</summary>

</details>

<details>
 <summary>( IX ) .</summary>

</details>
