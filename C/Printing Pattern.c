#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,vdis,hdis,dis;
    scanf("%d", &n);
      int len=2*n-1;
      int i,j;
  	for(i=0;i<len;i++)
      {
          for(j=0;j<len;j++)
          {
                vdis=i<len-i?i:len-i-1;
                hdis=j<len-j?j:len-j-1;
                dis=vdis>hdis?hdis:vdis;
                printf("%d ",n-dis);
          }
          printf("\n");
      }
    return 0;
}
