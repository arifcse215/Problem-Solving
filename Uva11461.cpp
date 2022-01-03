#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,s,r,i,j;
    while(cin>>a>>b){
        if(a==0||b==0){break;}
        if(a>b||b>100000){break;}
        c=0;
        for(i=a;i<=b;i++){
            j=i;
            s=sqrt(j);
            s=s*s;
            if(s==j){c++;}
        }
        cout<<c<<endl;
    }
    return 0;
}

