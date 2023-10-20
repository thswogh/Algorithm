#include <stdio.h>
#define MAX(a, b) a > b ? a : b
int main()
{
    int A, B, AA = 0, BB = 0;
    scanf("%d %d", &A, &B);
    while (A)
    {
        AA *= 10;
        AA += (A % 10);
        A /= 10;
    }
    while (B)
    {
        BB *= 10;
        BB += (B % 10);
        B /= 10;
    }
    printf("%d", MAX(AA, BB));
}