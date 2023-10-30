#include<stdio.h>
int main()
{
    int Phy,Chem,Bio,Math,Comp;
      float total,percentage;
    scanf("%d%d%d%d%d",&Phy,&Chem,&Bio,&Math,&Comp);
    total=Phy+Chem+Bio+Math+Comp;
    percentage=(total/500)*100;
    if (percentage>=90)
    {
        printf("Grade A");
    }
    else if (percentage>=80)
    {
        printf("Grade B");
    }
    else if (percentage>=70)
    {
        printf("Grade C");
    }
    else if (percentage>=60)
    {
        printf("Grade D");
    }
    else if (percentage>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}