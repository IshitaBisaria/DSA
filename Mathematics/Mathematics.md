 - Modular Arithmetic
 - Euclid's Algorithm for GCD and LCM
 - Trailing Zeroes in a Factorial
 - Check for Prime Numbers :  O(n), O(sqrt(n)), leaving iterations for 2 and 3 O(sqrt(n)
 - Prime Factors : O(n^2logn), O(nlogn), leaving iterations for 2 and 3
 - All Divisors for a Number : Not in order, In order
 - Sieve of Erathosthenes
 - Power of a Number : Recursive, Iterartive
 - Digits in a Factorial : for n < 10^5 : floor of the log10 of a number + 1 gives the number of digits in the number
 - Digits in a Factorial : for n > 10^5 : Kamenetsky’s formula : Factorial = log10((n/e)^n * sqrt(2*pi*n)), digits = floor(factorial) + 1
 - Exactly 3 Divisors : Only the squares of prime numbers are the numbers with exactly 3 divisors.


```
%m where m is 1e9 + 7
```

```
return gcd(b, a%b);
```

```
for(int i = 5;i <= n; i *= 5)
    ans += n/i;
```

```
    for(int i=2;i<n;i++)
        if(n%i == 0)
            return false;
    return true;
```

```
    for(int i=2;i*i<n;i++)
        if(n%i == 0)
            return false;
    return true;
```

```
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; i*i <= n;i += 6)
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    return true;
```
