#include <stdio.h>
#define Min(a, b) a > b ? b : a
#define Max(a, b) a > b ? a : b
int main()
{
    int a, b, gcd, lcm;
    scanf("%d %d", &a, &b);
    int min = Min(a, b);
    int max = Max(a, b);
    for (int i = 1; i <= min; i++)
        if (a % i == 0 && b % i == 0)
            gcd = i;
    for (int i = max; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
    }
    printf("%d\n%d", gcd, lcm);
}
// 최대공약수, 최소공배수