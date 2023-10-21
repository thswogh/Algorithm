#include <stdio.h>
#define Min(a, b) a > b ? b : a
int main()
{
    int a, b, gcd;
    scanf("%d %d", &a, &b);
    int min = Min(a, b);
    for (int i = 1; i <= min; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    printf("%d\n%d", gcd, a * b / gcd);
}
// 최대공약수, 최소공배수