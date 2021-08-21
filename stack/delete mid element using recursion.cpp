#include <iostream>
#include <stack>
using namespace std;
void solve(stack<int> &s, int k)
{
    if (k == 1)
    {
        s.pop();
        return;
    }

    int x = s.top();
    s.pop();
    solve(s, k - 1);
    s.push(x);
    return;
}
stack<int> middel(stack<int> &s, int size)
{
    if (s.size() == 0)
        return s;
    static int k = s.size() % 2 == 1 ? s.size() / 2 + 1 : s.size() / 2;
    solve(s, k);
    return s;
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    // cout<<s.size()<<endl;
    middel(s, s.size());
    while (s.size())
    {
        cout << s.top() << endl;
        s.pop();
    }
}

