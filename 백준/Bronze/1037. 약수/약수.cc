#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    //A가 N의 약수
    int n,tmp;
    vector <int> v;

    cin >> n;
    for(int i =0;i<n;i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());

    if(v.size() ==1 )
        cout << v[0] * v[0];
    else
        cout << v[0] * v[v.size()-1];
    

}