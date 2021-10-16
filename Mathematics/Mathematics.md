# Table of Contents

 - [Modular Arithmetic](#Modular-Arithmetic)
 - [Euclid's Algorithm for GCD and LCM](#Euclid-GCD)
 - [Trailing Zeroes in a Factorial](#Trailing-Zeroes)
 - [Check for Prime Numbers](#Prime-Check)
 - [Prime Factors](#Prime-Factors)
 - [All Divisors for a Number](#Divisors)
 - [Sieve of Erathosthenes](#Sieve)
 - [Power of a Number : Binary Exponentiation](#Power)
 - [Digits in a Factorial](#Digits-in-Factorial)
 - [Exactly 3 Divisors](#Exacty-3-Divisors)


## Implementation
#### Modular-Arithmetic
```
    % m where m is 1e9 + 7
```

#### Euclid-GCD
``` C++
    return gcd(b, a%b);
```

#### Trailing-Zeroes
``` C++
    for(int i = 5;i <= n; i *= 5)
        ans += n/i;
```

#### Prime-Check
``` C++
    // O(n)
    for(int i=2;i<n;i++)
        if(n%i == 0)
            return false;
    return true;
```

``` C++
    // O(sqrt(n))
    for(int i=2;i*i<n;i++)
        if(n%i == 0)
            return false;
    return true;
```

``` C++
    // Further Optimisation leaving iterations for 2 and 3 O(sqrt(n)
    if(n == 2 || n == 3)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(int i = 5; i*i <= n;i += 6)
        if(n%i == 0 || n%(i+2) == 0)
            return false;
    return true;
```

#### Prime-Factors
``` C++
    // O(n^2logn)
    for(int i = 2;i < n;i++) {
        if(isPrime(i)) {
            int x = i;
            while(n%x == 0) {
                cout<<i<<" ";
                x* = i;
            }
        }
    }
```

``` C++
    // O(nlogn)
    for(int i = 2; i*i <= n;i++) {
        while(n % i == 0) {
            cout<<i<<" ";
            n /= i;
        }
    }
    if(n > 1)
        cout<<n;
```

``` C++
    // Further Optimisation leaving iterations for 2 and 3
    while(n % 2 == 0) {
        cout<< n <<" ";
        n /= 2;
    }
    while(n % 3 == 0) {
        cout<< n <<" ";
        n /= 3;
    }
    for(int i = 5; i*i <= n;i += 6) {
        while(n % i == 0) {
            cout<<i<<" ";
            n /= i;
        }
        while(n % (i+2) == 0) {
            cout<<i+2<<" ";
            n /= (i+2);
        }
    }
    if(n > 3)
        cout<<n;
```

#### Divisors
``` C++
    // Not in Order
    for(int i = 1; i*i <= n;i++) {
        if(n % i == 0) {
            cout<<i<<" ";
            if(i != n/i)
                cout<< n/i<<" ";
        }
    }
```

``` C++
    // In Order
    for(int i = 1; i*i <= n;i++) {
        if(n % i == 0)
            cout<<i<<" ";
    }
    for(;i>=1;i--) {
        if(n % i == 0)
            cout<<n/i<<" ";
    }
```

#### Sieve
``` C++
    bool primeSieve[n+1] = {true};
    for(int i = 2; i*i <= n; i++) {
        if(primeSieve[i]) {
            for(int j = i*i;j <= n; j += i)
                primeSieve[j] = false;
        }
    }
    for(int i = 2;i <= n;i++)
        if(isPrime[i])
            cout<<i<<" ";
```

#### Power
``` C++
    // Recursive
    int power(int x, int n) {
        int t = power(x, n/2);
        if(n % 2 == 0)
            return t*t;
        else
            return x*t*t;
    }
```

``` C++
    // Iterative
    while(n) {
        if(n & 1)
            res = (res * x) % m;
        x = (x * x) % m;
        n = n >> 1;
    }
    return res;
```

#### Digits-in-Factorial
```
    For n < 10^5 : floor of the log10 of a number + 1 gives the number of digits in the number
    Then, Using log Property : log(ab) = log(a) + log(b)
```

```
    For n > 10^5 : Kamenetsky’s formula : Factorial = log10((n/e)^n * sqrt(2*pi*n)), digits = floor(factorial) + 1
```

#### Exacty-3-Divisors
``` C++
     // Only the squares of prime numbers are the numbers with exactly 3 divisors
     int ans = 0;
     for(int i = 2; i*i <= n; i++) {
        if(isPrime(i))
            ans++;
     }
     return ans;
```
