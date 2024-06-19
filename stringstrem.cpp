#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s); // this idenfy each world in sentance
    string word;
    while(ss >> word)
    {
        cout<<word<<endl;
    }
    return 0;
}