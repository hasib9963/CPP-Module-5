#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[0]<<endl;
    cout<<s.at(0)<<endl;
    cout<<s[s.size()-1]<<endl;// last element access
    cout<<s.back()<<endl; // last element access function.
    cout<<s.front()<<endl; // first element access.
    return 0;
}