#include <stdio.h>
int person(int a, int b, int c){
    if((a>b && a<c)||(a<b&&a>c)){
        return a;
    }
    else if((b>a&&b<c)||(b<a&&b>c)){
        return b;
    }
    else{
        return c;
    }
}
int main() {
    int t, i;
    int p1, p2, p3;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
        scanf("%d%d%d", &p1, &p2, &p3);
        int result = person(p1, p2, p3);
        printf("Case %d: %d\n", i, result);
    }
    return 0;
}
