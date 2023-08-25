#include <stdio.h>

int dp[1002];
int main()
{
    int K,N;
    int cnt = 0;
    scanf("%d %d",&N,&K);
    for(int i=2;i<=N;i++)
    {
        for (int j = 1; j*i <=N ;j++)
        {
            if (dp[i*j] == 0)
            {
                dp[i*j] = 1;
                cnt++;
                if (cnt == K)
                {
                    printf("%d",i*j);
                    return 0;
                }
            }
        }
    }
}