#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    queue <int> q;
    vector <int> v;
    int N,K;

    cin >> N >> K;
    for(int i = 1;i<=N;++i)
        q.push(i);
    while(!q.empty())
    {
        for(int i = 0;i<K-1;++i)
        {
            q.push(q.front());
            q.pop();
        }
        v.push_back(q.front());
        q.pop();
    }
    cout << "<";
    for(int i = 0;i<N-1;i++)
        cout << v[i] << ", ";
    cout << v[N-1] <<">";
}