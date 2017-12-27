#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        int result=((((((n*567)/9)+7492)*235)/47)-498);
        result=abs((result%100)/10);
        cout<<result<<endl;
        t--;
    }
    return 0;
}
