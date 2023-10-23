#include <stdio.h>
int main()
{
    int N, a, b;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        int num = 1;
        for (int j = 1; j <= b; j++)
        {
            num = (num * a) % 10;
        }
        if (num == 0)
            printf("10\n");
        else
            printf("%d\n", num);
    }
}