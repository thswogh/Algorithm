#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main()
{
    char s[81];
    int N, tmp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int total = 0;
        tmp = 0;
        scanf("%s", s);
        getchar();
        for (int j = 0; j < strlen(s); j++)
        {
            if (s[j] == 'O')
            {
                tmp++;
                total += tmp;
            }
            else
                tmp = 0;
        }
        printf("%d\n", total);
    }
}