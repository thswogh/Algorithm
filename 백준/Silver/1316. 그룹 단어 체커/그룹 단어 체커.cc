#   include<stdio.h>
#   include<string.h>
int main()
{
    int N,group_num=0;
    char s[101];
    char alphabet[26];
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%s",s);
        for(int j=0;j<26;j++)
            alphabet[j] =0;
        for(int k=0;k<strlen(s);k++)
        {
            if(alphabet[s[k]-'a'] ==0)
            {
                alphabet[s[k]-'a'] =1;
            }
            else
            {
                if(s[k-1] != s[k])
                    break;
            }
            if(k == strlen(s)-1)
                group_num++;
        }
    }
    printf("%d",group_num);
}