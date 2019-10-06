#include<stdio.h>
int func ();
void func1 ();
void func2 ();
void func3 ();
void func4 ();
void func5 ();
void
main ()
{
  int n, row;
  printf ("Enter the number of rows ");
  scanf ("%d", &n);
  row = 3 * n;
  n = n / 2;
  func (row, 1, n);
  func5 (1, n, row);
}

int
func (int row, int i, int n)
{
  if (i <= row)
    {
      func1 (1, row, i);
      func2 (n, 1);
      func3 (1, i);
      printf ("*");
      printf ("\n");
      func1 (1, row, i);
      printf ("*");
      func4 (1, n, i);
      printf ("*");
      printf ("\n");
      func1 (1, row, i);
      printf ("*");
      func4 (1, n, i);
      printf ("*");
      printf ("\n");
      return func (row, i = n + i, n);
    }
  return (row, i = n + i, n);
}

void
func1 (int j, int row, int i)
{
  if (j <= row - i)
    {
      printf (" ");
      return func1 (++j, row, i);
    }

}

void
func2 (int n, int k)
{
  if (k <= n)
    {
      printf ("*");
      return func2 (n, ++k);
    }
}

void
func3 (int k, int i)
{
  if (k <= i)
    {
      printf (" ");
      return func3 (++k, i);
    }
}

void
func4 (int l, int n, int i)
{
  if (l < n + i)
    {
      printf (" ");
      return func4 (++l, n, i);
    }
}

void
func5 (int l, int n, int row)
{
  if (l <= row + n + 1)
    {
      printf ("*");
      return func5 (++l, n, row);
    }
}

