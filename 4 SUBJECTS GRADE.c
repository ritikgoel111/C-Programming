#include <stdio.h>
int main()
{
 int a,b,c,d,sum;
 float per;
 printf("ENTER THE MARKS OF 4 SUBJECTS ");
 scanf("%d%d%d%d",&a,&b,&c,&d);
  sum=a+b+c+d;
  per=((float)sum/400)*100;
  printf("THE TOTAL %%AGE IS %0.2f ",per);
  if(per<=40)
   printf("YOUR GRADE IS FAIL",per);
   else if(per<=50)
     printf("YOUR GRADE IS F",per);
   else if(per<=60)
   printf("YOUR GRADE IS E",per);
   else if(per<=70)
   printf("YOUR GRADE IS D",per);
   else if(per<=80)
   printf("YOUR GRADE IS C",per);
   else if(per<=90)
   printf("YOUR GRADE IS B",per);
   else
    printf("YOUR GRADE IS A",per);

  return 0;
}
