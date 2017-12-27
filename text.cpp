#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    stringstream ss;
    ss<<a;
    string s1=ss.str();
    s1.reverse();
    cout<<s1;
    string s;
    cin>>s;
    stringstream geek(s);
    int a1=0;
    geek>>a1;
    cout<<a1;
    return 0;
}
