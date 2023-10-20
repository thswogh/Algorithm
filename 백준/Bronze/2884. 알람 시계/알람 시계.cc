#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    if (M - 45 < 0)
    {
        M = 60 - (45 - M);
        if (H - 1 < 0)
            H = 23;
        else
            --H;
    }
    else
        M -= 45;
    printf("%d %d", H, M);
}
