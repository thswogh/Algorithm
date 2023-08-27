#   include <stdio.h>
int x[42];
int main()
{
    int n;
    int cnt = 0;
    for(int i = 0 ;i < 10 ;i++)
    {
        scanf("%d", &n);
        x[n % 42] = 1;
    }
    for(int i = 0;i<42;i++)
        if (x[i])
            cnt++;
    printf("%d",cnt);
}

