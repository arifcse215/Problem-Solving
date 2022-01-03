#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long low, up, fix, total, i, j, k, c, mx, t;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>low>>up;
        mx=0;
        for(j=low;j<=up;j++){
            c=0;
            for(k=1;k<=sqrt(j);k++){
                if(j%k==0){
                    c+=1;
                    if(j/k==k){}
                    else{c+=1;}
            }
        }
        if(mx<c){
            mx=c;
            fix=j;
          }
     }
      cout<<"Between "<<low<<" and " <<up<<", "<<fix<<" has a maximum of "<<mx<<" divisors."<<endl;
  }
  return 0;
}

