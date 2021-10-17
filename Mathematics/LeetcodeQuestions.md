1. [Excel Sheet Column Number](https://leetcode.com/problems/excel-sheet-column-number/)
    - ans = ans x 26 + order number of current character
2. [Ugly Number](https://leetcode.com/problems/ugly-number/)
    - check by dividing with all the three numbers, if n becomes 1, return true, else false
3. [Reverse Integer](https://leetcode.com/problems/reverse-integer/)
    - store the revere of the number in a long and them check for Overflow
4. [Happy Number](https://leetcode.com/problems/happy-number/)
    - If same number is found during the loop and its not 1, return false, else return true.
    - Fast and slow Pointer Approach, 7 is the only number < 10 which is a Happy Number.
5. [Roman to Integer](https://leetcode.com/problems/roman-to-integer)
    - if curr > prev add (curr-2*prev) in ans, else add prev in ans
