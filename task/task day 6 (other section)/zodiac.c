#include<stdio.h>
#include<conio.h>
int
main ()
{
  int M, D;
  printf ("1=JAN\n2=FEB\n3=MARCH\n4=APRIL......\n12=DEC");
  printf ("\nEnter The Month: ");
  scanf ("%d", &M);
  printf ("Enter The Day: ");
  scanf ("%d", &D);
  if (D > 31 || M > 12)
    {
      printf ("Default");
    }
  else if (M == 12 && D >= 22)
    printf ("Capricorn");
  if (M == 1 && D <= 19)
    printf ("Capricorn");
  if (M == 1 && D >= 20)
    printf ("Aquarius");
  if (M == 2 && D <= 17)
    printf ("Aquarius");
  if (M == 2 && D >= 18)
    printf ("Pisces");
  if (M == 3 && D <= 19)
    printf ("Pisces");
  if (M == 3 && D >= 20)
    printf ("Aries");
  if (M == 4 && D <= 19)
    printf ("Aries");
  if (D >= 20 && M == 4)
    printf ("Taurus");
  if (M == 5 && D <= 20)
    printf ("Taurus");
  if (D >= 21 && M == 5)
    printf ("Gemini");
  if (M == 6 && D <= 20)
    printf ("Gemini");
  if (D >= 21 && M == 6)
    printf ("Cancer");
  if (M == 7 && D <= 22)
    printf ("Cancer");
  if (D >= 23 && M == 7)
    printf ("Leo");
  if (M == 8 && D <= 22)
    printf ("Leo");
  if (D >= 23 && M == 8)
    printf ("Virgo");
  if (M == 9 && D <= 22)
    printf ("Virgo");
  if (D >= 23 && M == 9)
    printf ("Libra");
  if (M == 10 && D <= 22)
    printf ("Libra");
  if (D >= 23 && M == 10)
    printf ("Scorpio");
  if (M == 11 && D <= 21)
    printf ("Scorpio");
  if (D >= 22 && M == 11)
    printf ("Sagittarius ");
  if (M == 12 && D <= 21)
    printf ("Sagittarius ");

}

