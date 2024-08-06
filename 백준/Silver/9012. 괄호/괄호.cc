#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

void isVPS(string s)
{
    queue <int> q;
    for(int i =0;i<s.size();i++)
    {
        if (s[i]=='(')
            q.push(1);
        else if (s[i] == ')' && !q.empty())
            q.pop();
        else{
            cout <<"NO"<<endl;
            return;
        }
    }
    if(q.empty())
        cout << "YES" <<endl;
    else
        cout <<"NO"<<endl;
}

int main()
{
    int n;
    string s;

    cin >> n;
    for(int i = 0;i<n;i++)
    {
        cin >> s;
        isVPS( s);
    }
}