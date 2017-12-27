#include<bits/stdc++.h>
using namespace std;
int main()
{
    double p,n;
    while(cin>>n>>p)
    {
	    cout.precision(0);
        cout<<pow(p,1.0/n)<<endl;
    }
    return 0;
}
