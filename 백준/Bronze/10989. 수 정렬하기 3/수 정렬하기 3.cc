#include <stdio.h>
int main()
{
    int N, tmp;
    scanf("%d", &N);
    int cnt[10001] = {
        0,
    };
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &tmp);
        ++cnt[tmp];
    }
    for (int i = 0; i < 10001; i++)
    {
        for (int j = 1; j <= cnt[i]; j++)
            printf("%d\n", i);
    }
}