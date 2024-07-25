#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> a, b;
    int tmp,sum_a=0,sum_b=0, winning=0;

    for(int i =0;i<9;i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int i =0;i<9;i++)
    {
        cin >> tmp;
        b.push_back(tmp);
    }
    for(int i =0;i<8;i++)
    {
        sum_a += a[i];
        if (sum_a>sum_b) 
            winning++;
        sum_b += b[i];
    }
    if (sum_a + a[8] > sum_b) winning++;
    if (winning && sum_a+a[8] < sum_b+b[8])
        cout << "Yes";
    else cout << "No";
}