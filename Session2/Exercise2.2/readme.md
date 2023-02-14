
# Exercise 2.2

Implement a small program where you divide 7 with 3 and print the result. Also, find the remainder using the modulo operator. First, use int’s as types variables to hold the values. Thentry to fix the problems observed using other datatypes.

## Solution
Base code:

```c
#include <stdio.h>

int main() {
    double a, b;
    a = 7;
    b = 3;

    printf("Result of %d / %d = %d\n", a, b, a/b);
    return 0;
}
```

Implementation with int’s ends with a result that is an int - 7/3 = 2

In order to get more accurate result, int’s should be replaced with double's.

```c
#include <stdio.h>

int main() {
    double a, b;
    a = 7;
    b = 3;

    printf("Result of %f / %f = %f\n", a, b, a/b);
    return 0;
}
```

Now 7.000000/3.000000 = 2.333333





