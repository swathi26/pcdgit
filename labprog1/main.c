#include <stdio.h>
#include <math.h>
int main()
{
  float a,b,c,d,r1,r2,ir,rr;
  printf("enter the coeffients of quadratic equation");
  scanf("%f,%f,%f"&a,&b,&c);
  d=b*b-4*a*c
  if (d==0);}
  r1=r2=-b/(2*a);
  printf(" the roots are real and equal r1=%f\n",r1);
}
  else if (d>0) {
  r1=(-b+sqrt(d))/(2*a);
  r2=(-b-sqrt(d))/(2*a);
  printf("the roots are real r1=%f r2=%f\n,r1,r2);
} 
  else{ 
  rr= -b/(2*a);
  ir=sqrt(-d)/(2*a);
  printf(" the roots are complex r1=%f+i%f&& r2=%f-i%f\n,rr,ir,rr,ir);
} 
  return 0;
} 

