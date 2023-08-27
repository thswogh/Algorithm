#   include <stdio.h>

int main()
{
int x,y,w,h;
int len1,len2;

scanf("%d %d %d %d",&x ,&y,&w,&h);
len1 = (w-x) > (h-y) ? h-y:w-x;
len2 = x > y ? y: x;
len1 > len2 ? printf("%d",len2) : printf("%d",len1);
}

