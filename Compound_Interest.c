#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,CI,S;
    scanf("%f%f%f",&P,&R,&T);
    S=P* pow((1+R/100),T);
    CI=S-P;
    printf("%.2f",CI);
}