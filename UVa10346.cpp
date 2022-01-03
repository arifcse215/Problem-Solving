#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,d,t,m;
    while(cin>>n>>k){
        t=0; d=0; m=0;
        t=n;
        z:
            m=n/k;
            t+=n/k;
            d=m;
            d+=n%k;
            if(d/k>=1){
                n=d;
                d=0;
                goto z;
            }
            cout<<t<<endl;
    }
    return 0;
}
