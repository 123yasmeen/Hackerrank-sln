#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d", &n);
    int i;
    for(i=0;i<5;i++)
    {
        int mod;
        mod=n%10;
        sum+=mod;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}
