# LCM
#include <stdio.h>
void main()
{
  int n1,n2,num;
  printf("Enter two positive integers: ");
  scanf("%d %d", &n1, &n2);
  num=(n1>n2)?n1:n2;
  while(1)
  {
    if(num%n1==0&&num%n2==0)
    {
      printf("The LCM of %d and %d is %d",n1,n2,num);
      break;
    }
  ++num;
  }
}  
