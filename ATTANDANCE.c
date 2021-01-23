#include<stdio.h>
int main()
{
int a,b;
float per;
printf("ENTER TOTAL NUMBER OF LECTURES DELIVERED:");
scanf("%d",&a);
printf("ENTER TOTAL NUMBER OF LECTURES ATTENDED:");
scanf("%d",&b);
per=((float)b/a)*100;
printf("THE TOTAL %%AGE OF ATTANDACE IS: %0.2f\n",per);
if(per<=50)
printf("SORRY!You have to attend extra class");
else
printf("Hurray!You can enjoy holidays");
return 0;
}
