#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (char x : s)
    {
        if (x == '(' || x == '[' || x == '{')
        {
            st.push(x);
        }
        else
        {
            if (st.empty())
            {
                cout << "INVALID\n";
                return;
            }
            else
            {
                st.pop();
            }
        }
    }
    if(st.empty()){
        cout << "VALID\n";
    }
    else{
        cout << "INVALID\n";
    }
}

int main(){
    int q; cin >> q;
    while(q--){
        solve();
    }
    return 0;
}