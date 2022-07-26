#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k) {
    int maxand=0,maxor=0,maxxor=0;
    int i,j;
  for(i=1;i<=n;i++)
  {
      for(j=i+1;j<=n;j++)
      {
      int and=i&j;
      int or=i|j;
      int xor=i^j;
      if(maxand<and&&and<k)
      maxand=and;
      if(maxor<or&&or<k)
      maxor=or;
      if(maxxor<xor&&xor<k)
       maxxor=xor;
      }
  }
  printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
