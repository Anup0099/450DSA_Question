class Solution {
public:
    int countDigits(int num) {
         string str = to_string(num);

    // Initialize a count to keep track of the number of digits that divide num
    int count = 0;

    // Iterate through the digits in the string
    for (char c : str) {
      // Convert the current character to an integer
      int digit = c - '0';

      // Check if the digit divides num
      if (num % digit == 0) {
        // If it does, increment the count
        count++;
      }
    }

    // Return the count
    return count;
    }
};