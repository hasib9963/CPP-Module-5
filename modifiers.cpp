#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="Hello";
    // string b="A";
    // a=a+b;
    // a.append(b); // same task at previous line
    // cout<<a<<endl;
    // cout<<b<<endl;
    // a='HelloA'; works
    //a=a+b; //works
    //a[5]='A' // not works
    //this is the way to add charecter at last index.
    // a.push_back('A'); // works
    // a.pop_back();
    // a.pop_back(); // pop bac k use to delete last element
    // cout<<a<<endl;
    
    string a="HelloWorld";
    // a.erase(4,1);// erase charecter from string 4 define from where to delete 1 define how many charecter delete
    //a.erase(4,3);
    // a.replace(4,3,"so");// erase and replace charecter
    a.insert(5, "HAsib");
    cout<<a<<endl;
    return 0;
}