#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ara[3000],ara1[3000];
    int n;
    while(cin>>n)
    {
        int flag=0;
        for(int i=1;i<n+1;i++)
            cin>>ara[i];
        for(int i=1;i<n;i++)
        {
            ara1[i]=abs(ara[i]-ara[i+1]);
        }
        sort(ara1+1,ara1+n);
        for(int i=1;i<n;i++){
            if(ara1[i]==i);
            else{
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"Jolly"<<endl;
        else
            cout<<"Not jolly"<<endl;
    }
    return 0;
}
