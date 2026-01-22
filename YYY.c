//CH.SC.U4AIE25020
//2^N TIME COMPLEXITY  -  RECURSIVE FIBONACCI SERIES
#include <stdio.h>

    int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2); 
}

int main() {
    int n = 10;   
    printf("fib(%d) = %lld\n", n, fib(n));
    return 0;
}
