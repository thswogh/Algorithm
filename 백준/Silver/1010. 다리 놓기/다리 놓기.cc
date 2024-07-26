#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int T,N,M,result,tmp;
    
    cin >> T;
    for(int i =0;i<T;++i)
    {
        cin >> N >> M;
        result = 1;
        tmp = 1;
        for(int j = M ;j >M-N;j--)
        {
            result *= j;
            result /= tmp++;
        }
        cout << result <<endl;
        
    }
}