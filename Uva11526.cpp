#include <stdio.h>
#include <math.h>

long func(int num){
    if(num<1)
        return 0;
    long sum = 0;
    int sqr = floor(sqrt(num)),i, last = num,temp;
    for (i=1; i<sqr+1; i++) {
        temp = num/i;
        sum += temp+(last-temp)*(i-1);
        last = temp;
    }
    if (num/sqr > sqr) {
        sum += sqr;
    }
    return sum;
}

int main(){
    int num,t;
    long int sum;
    scanf("%d", &t);
    while(t--){
        scanf("%d",&num);
        sum = func(num);
        printf("%ld\n", sum);
    }
    return 0;
}
