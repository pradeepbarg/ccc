#include <stdio.h>
int main() {
    int n, i;
    // since we are taking, set the start value at 1.
    int factorial = 1;
    // define the value of n for which we have
    // to compute the factorial.
    n = 5;
    // run the loop from 1 to that number, multiplying
    // the previous result with i. 

    // no factorial for negative number, check if number is negative
    if(n<0)
    {
        printf("Factorial does not exist");
        return 1;
    }
    for (i = 1; i <= n; ++i) {
        factorial = factorial * i;
    }
    printf("Factorial of %d = %d", n, factorial);
    return 0;
