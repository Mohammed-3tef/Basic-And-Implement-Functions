
>**Algorithm H.cpp**:
>>![image](https://github.com/Mohammed-Atef-20231143/Basics/assets/161865675/bf073561-4fb6-455f-af6c-0c4f015aac67)
>>![image](https://github.com/Mohammed-Atef-20231143/Basics/assets/161865675/9f32eecc-2257-4927-b806-d91be819ac2a)
>>
>> 1. ***Input and Initialization***:
>>>    - `int n;`: We declare an integer variable `n` to store the number of elements (people in line).
>>>    - `cin >> n;`: We read the value of `n` from the standard input (keyboard).
>>>    - `vector<int> arr(n), position(n, 0);`: We create two vectors:
>>>        - `arr` to store the input sequence of people.
>>>        - `position` to keep track of the positions directly behind each person (initialized with zeros).
>>>    - `int x = 0;`: We initialize an integer variable `x` to zero. This variable will later store the starting position.
>>
>> 2. ***Reading the Input Sequence***:
>>>    - We use a `for` loop to read the input sequence into the `arr` vector.
>>>    - If the current element is not `-1`, we update the `position` vector to reflect the position of that element in the sequence.
>>>    - If the current element is `-1`, we set `x` to the current index plus one, indicating the starting position.
>>
>> 3. ***Output the Sequence***:
>>>    - We print the starting position (stored in `x`).
>>>    - Then, we follow the chain of positions using a `while` loop:
>>>        - If the next position is not zero (i.e., there's a valid successor), we print the next position and update `x` to that position.
>>>        - We continue this process until we reach the end of the chain (when the next position is zero).
>>
>>4. ***End of Program***

###
