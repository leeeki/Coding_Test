#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    long a, b;
    scanf("%ld %ld",&a, &b);
    printf("%ld", a<<b);
    return 0;
}