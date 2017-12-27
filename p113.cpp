#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,p;
    while(cin>>n>>p)
    {
        int i,flag;
        double c=1;
        for(i=1;;i++)
        {
            c=c*n;
            if(c==p)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<i<<endl;
    }
    return 0;
}
