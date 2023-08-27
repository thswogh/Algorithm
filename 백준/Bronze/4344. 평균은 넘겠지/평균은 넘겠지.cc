#   include <stdio.h>

int main(void)
{
    int C,N;
    int n[1000];
    double sum;
    int cnt;
    scanf("%d",&C);
    for(int i = 0;i < C; ++i)
    {
        scanf("%d",&N);
        sum = 0;
        cnt = 0;
        for(int j = 0 ;j < N; ++j)
        {
            scanf("%d",&n[j]);
            sum += n[j];
        }
        sum /= N;
        for(int j = 0;j <N; ++j)
            if (sum < n[j])
                cnt++;
        printf("%.3f%%\n",(double)cnt/N*100);
    }
}