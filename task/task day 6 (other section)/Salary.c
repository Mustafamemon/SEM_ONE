#include<stdio.h>
void
main ()
{
  int Y, S, I;
  printf ("Enter Years of service: ");
  scanf ("%d", &Y);
  if (Y <= 3)
    printf ("No Increment");
  else if (Y > 3)
    {
      printf ("Enter Your Salary in PKR :");
      scanf ("%d", &S);
	}
    if (S >= 40000)
	{
	  I = S * 0.02;
	  printf ("You have an increment %d PKR", I);
	  S = S + I;
	  printf (" Now your Salary is %d PKR", S);
	}
    if (S < 40000 && S >= 20000)
	{
	  I = S * 0.025;
	  printf ("You have an increment %d PKR", I);
	  S = S + I;
	  printf (" Now your Salary is %d PKR", S);
	}
      if (S < 20000 && S >= 15000)
	{
	  I = S * 0.04;
	  printf ("You have an increment %d PKR", I);
	  S = S + I;
	  printf (" Now your Salary is %d PKR", S);
	}
      if (S < 15000 && S >= 10000)
	{
	  I = S * 0.07;
	  printf ("You have an increment %d PKR", I);
	  S = S + I;
	  printf (" Now your Salary is %d PKR", S);
	}
    }

