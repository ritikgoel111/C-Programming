#include<stdio.h>
int main()
{
int a,b;
char n;
printf("ENTER VALUE A and B ");
scanf("%d%d",&a,&b);
printf("\n PRESS + FOR ADDITION");
printf("\n PRESS - FOR SUBTRACTION");
printf("\n PRESS * FOR MULTIPLICATION");
printf("\n PRESS / FOR DIVISION");
printf("\n PRESS %% FOR MODULUS\n");
scanf(" %c",&n);
switch(n)
{
case '+':
printf("THE SUM IS %d ",a+b);
break;
case '-':
printf("\nTHE DIFFERENCE IS %d",a-b);
break;
case '*':
printf("\nTHE PRODUCT IS %d",a*b);
break;
case '/':
printf("\nTHE DIVISION IS %d",a/b);
break;
case '%':
printf("\nTHE MODULUS IS %d",a%b);
break;
default:
printf("ENTER A VALID CHOICE");
return 0;
}
}
