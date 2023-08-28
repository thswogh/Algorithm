#   include <stdio.h>
int main(void)
{
    int n,k,sum = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&k);
        sum += k;
    }
    printf("%d",sum - n + 1);
}
