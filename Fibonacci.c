#include<stdio.h>
int main()
{
  long num,s,i,j=1,m=0;
  printf("Enter a no. of");
  scanf("%ld",&num);
  if (num==1)
  printf("0"); // only 1 number is 0
  else
  {
    printf("0,1,"); //if 2, still this is fixed that first two no. will be (0,1)
    for(i=3;i<=num;i++)// Upto number which you want to print fibonacci series
    {
      s=m+j;
      printf("%ld,",s);
      m=j;
      j=s;
    }
  }
}
