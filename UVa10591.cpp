#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],sum=0,n, i, j, c,k,t,l;
    cin>>t;
    for(l=1;l<=t;l++){
    cin>>n;
    k=n;
    y:
    c=0;
    z:
        sum=0;
        arr[c]=n%10;
        c++;
        n=n/10;
        if(n>0){
            goto z;
        }
        for(i=0;i<c;i++){
            arr[i]=arr[i]*arr[i];
        }
        for(j=0;j<c;j++){
            sum+=arr[j];
        }
        if(sum>9){
            n=sum;
            goto y;
        }
        else{
            if(sum==1){
                cout<<"Case #"<<l<<": "<<k<<" is a Happy number."<<endl;
            }
            else{
                cout<<"Case #"<<l<<": "<<k<<" is an Unhappy number."<<endl;
            }
        }
    }
    return 0;
}

