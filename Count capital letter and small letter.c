#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[104];
    int capital=0,small=0;
   scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
     if(isupper(str[i]))
     capital++;
     if(islower(str[i]))
     small++;
    }
    printf("%d%d",capital,small);
    return 0;

}