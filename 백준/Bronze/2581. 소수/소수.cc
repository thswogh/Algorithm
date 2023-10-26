#include <stdio.h>

int isNum(int n)
{
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
            cnt++;
    }
    if (cnt == 1)
        return 1;
    return 0;
}

int main()
{
    int M, N, min = 10001, sum = 0, check;
    scanf("%d %d", &M, &N);
    for (int i = M; i <= N; ++i)
    {
        check = isNum(i);
        if (check)
        {
            sum += i;
            if (i < min)
                min = i;
        }
    }
    if (!sum)
        printf("-1");
    else
        printf("%d\n%d", sum, min);
}