# Program: BinaryToDecimal_v1
# Purpose: A program to convert a string representing
#          a valid binary number to decimal

# Prompt the user to enter a binary string
binary_string = input("Enter a binary string (only 1s and 0s): ")

# Check if the input string contains only 0s and 1s
if all(bit in '01' for bit in binary_string):

    # Convert the binary string to decimal and print the result

    decimal_equivalent = 0
    for i in range(len(binary_string)):
        decimal_equivalent += int(binary_string[i]) * 2**(len(binary_string) - i - 1)
    print("Decimal equivalent:", decimal_equivalent)

else:
    print("Invalid input! Please enter a binary string containing only 1s and 0s.")
