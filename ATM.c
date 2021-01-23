#include<stdio.h>
int main()
{
int a=1748,b,n,bal=15287,widr,depo,upd;
printf("*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t");
printf(" WELCOME TO ATM BANKING");
printf ("\n YOU HAVE THE FOLLOWING OPTIONS :");
printf("\n1. CHECK AMOUNT BALANCE.");
printf("\n2. WITHDRAW AMOUNT.");
printf("\n3. DEPOSIT AMOUNT.");
printf("\n4. EXIT.");
printf("\n ENTER YOUR PIN ");
scanf("%d",&b);
if(a==b)
{
    printf("ENTER YOU CHOICE ",n);
    scanf("%d",&n);
 switch(n)
 {
 case 1:
  printf("YOUR BALANCE IS : %d",bal);
  break;
 case 2:
  printf("WITHDRAW AMOUNT :");
  scanf("%d",&widr);
  upd=bal-widr;
   if(upd<0)
    printf("CAN'T GET IT!!");
   else
  printf("UPDATED AMOUNT :%d",upd);
  break;
 case 3:
  printf("DEPOSIT AMOUNT");
  scanf("%d",&depo);
  printf("UPDATED AMOUNT :%d",bal+depo);
  break;
  case 4:
  printf("EXIT ");
  break;
  default:
    printf("THANKYOU FOR USING OUR ATM");
 }
}
else
    printf("ENTER VALID CHOICE");
return 0;
}

