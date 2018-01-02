<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int f91(int n)
{
    if(n<=100)
        return f91(f91(n+11));
    else
        return n-10;
}
int main(){
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
    return 0;
}
=======
#include<bits/stdc++.h>
using namespace std;
int f91(int n)
{
    if(n<=100)
        return f91(f91(n+11));
    else
        return n-10;
}
int main(){
    int n;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
    return 0;
}
>>>>>>> 0bf03f94397e363e45eb76d55aa6437dc6a9c47f
