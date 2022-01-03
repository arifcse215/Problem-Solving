#include <stdio.h>
int main()
{
    int t, i, j, m;
    scanf("%d", &t);
    while(t--)
    {
        int n, c[10];
        for(i=0; i<10; i++) c[i]=0;
        scanf("%d", &n);
        for(i=1; i<=n; i++)
        {
            j = i;
            while(j!=0)
            {
                m=j%10;
                c[m]++;
                j/=10;
            }
        }
        for(i=0; i<9; i++) printf("%d ", c[i]);
        printf("%d\n", c[9]);
    }
    return 0;
}
