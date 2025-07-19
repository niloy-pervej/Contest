#include<stdio.h>
int main()
{
    int T;
    float aofs,aofc,aofr;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
     float r;
     scanf("%f",&r);
     aofs=4*r*r;
     aofc=2*acos(0.0)*r*r;
     aofr=aofs-aofc;
     printf("%.2f\n",aofr);
    }
    return 0;
}