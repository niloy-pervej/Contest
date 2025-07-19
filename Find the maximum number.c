#include <stdio.h>
int main()
{
   int N;
   scanf("%d",&N);
   int a[100];
   for(int i=0;i<N;i++){
      scanf("%d",&a[i]);
   }
   int max=a[0];
   for(int i=0;i<N;i++){
      
      if(a[i]>max)
      max=a[i];

   }
   printf("%d",max);

}
  