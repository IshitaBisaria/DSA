 - Check for kth bit is set or not
    ```
        - Form a no with kth bit as set and & it with original no.
        - Right shift the number by k bits and & it with 1.
    ```
 - Odd no. Last bit - 1 amd 0 in Even number
 - << : multiphy by 2, >> : divide by 2
 - Leftmost Set bit - MSB, Rightmost Set bit - LSB
 - Set Bit - 1, Unset Bit - 0
 - Check for Set Bit - (n&(1<<i)) != 0
 - XOR Properties : x^x = 0, x^0 = x
 - Set Bit : n | (1<<i)
 - Unset Bit : n & ~(1<<i)
 - Toggle Bit : n ^ (1<<k)
 - Print Binary:
    ``` C++
        for(int i = 10; i >= 0; i--)
            cout << (n >> i) & 1;
    ```
 - 5th Bit of UpperCase is 0 and LowerCase is 1.
 - Position of Rightmost Set bit : log2(n & -n) + 1
 - Rightmost Set Bit Mass : n & -n or n ^ ~(n-1)
    ```
        Eg: 18 : 10010
            -18 : 01110
            18 & -18 : 00010
            17 : 10001
            ~17 : 01110
            18 & ~17 : 00010
    ```
 - (-n) rotates all the bits from left to right till the last set bit.
 - Largest power of 2
    ``` C++
        int x = 0;
        while((1<<x) <= n)
            x++;
        return x-1;
    ```
 - Count Set Bits
    ```
        - Naive Method : Traversing all Bits
        - Brian Kerningham's Algorithm : 
            - (n-1) will rotate all the bits till the last set bit.
            - n = n & (n-1)
            - Runs for the number of set bits
            - O(no. of set bits)
        - __builtin_popcount(n) : count the number of set bits
    ```
 - Power of 2
    ```
        The power of 2 will only have 1 set bit
    ```
 - One Odd Occurring
    ``` C++
        // x ^ x = 0
        for(int i = 0; i < n; i++)
            ans ^= arr[i];
        return ans;
    ```
 - Missing Number
    ``` C++
        // XOR of all the numbers from 1 to n+1 and then again XOR of all the elements with the res.
        for(int i = 1; i <= n+1; i++)
            ans ^= i;
        for(int i = 0; i < n; i++)
            ans ^= arr[i];
        return ans;
    ```
 - Two Odd Occurring
    ``` C++
        // Take the xor of all the numbers and then the xor variable will have xor of the two odd occurring numbers.
        int xor = 0;
        for(int i =0; i < n; i++)
            xor = xor ^ arr[i];
        // Find the rightmost set bit mass by using the formula : n&-n or n&~(n-1)
        int rsbm = n & -n;
        // Divide the array in two groups of numbers having the rightmost set bit as on
        // and the numbers having this rightmost set bit as off.
        // The xor of the numbers of the first group will give the first number
        // and the xor of the second group will give the second number.
        int ans1 = 0, ans2 = 0;
        for(int i =0; i < n; i++)
            if(rsbm & arr[i] != 0) {
                ans1 = ans1 ^ arr[i];
            else
                ans2 = ans2 ^ arr[i];
        }
        cout<< ans1 << " " << ans2;
    ```
 - Power Set using Bitwise
    ```
        Iterates form 0 to 2^n - 1 and then check for 0 for not pick and 1 for pick and then pick up
        int n = s.size();
        for(int i = 0; i < 2^n - 1; i++) {
            for(int j = 0; j < n; j++) {
                // if( jth bit is set) Pick that element
                if(i & (1 << j) != 0)
                    cout<<s[j];
            }
            cout<<endl;
        }
    ```
 - Number is Sparse or not
    ```
        if(n & (n >> 1)) // or n & (n << 1)
            return false;
        return true;
    ```
 - Count Set Bits from 1 to n
 - Longest Consecutive 1's
    ```
        int ans = 0;
        while(n) {
            n = n & (n >> 1); // or n = n & (n << 1);
            ans++;
        }
        return ans;
    ```
 - Binary to Gray Code
    ```
        return n ^ (n >> 1);
    ```
 - Gray code to Binary
 - Swap all odd and even bits
 - Maximum AND value
