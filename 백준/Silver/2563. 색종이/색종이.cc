#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int dp[100][100];

void result()
{
    int cnt=0;
    for(int i =0;i<100;i++)
        for(int j = 0 ;j<100;j++)
            if(dp[i][j]==1)
                cnt++;
    cout << cnt;
}

void cal(int a,int b)
{
    for(int i = a;i<a+10;i++)
        for(int j=b;j<b+10;j++)
            dp[i][j]=1;
}

int main()
{
    int n,a,b;
    
    cin >>n;
    for(int i = 0;i<n;i++)
    {
        cin >> a >> b;
        cal(a,b);
    }
    result();
}