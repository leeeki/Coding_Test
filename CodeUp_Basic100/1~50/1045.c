#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    long a, b;
    scanf("%ld %ld", &a, &b);
    printf("%ld\n%ld\n%ld\n%ld\n%ld\n%.2f", a+b, a-b, a*b, a/b, a%b, (float)a/b);
    return 0;
}