#include <stdio.h>
int main()
{
   int N, k = 1;
   scanf("%d", &N);
   {
      for (int i = 2; i <= N / 2; i++)
      {
         if (N % i == 0)
         {
            k = 0;
            break;
         }
      }
   }
   if (k == 0)
      printf("NO");
   else
      printf("YES");
   return 0;
}