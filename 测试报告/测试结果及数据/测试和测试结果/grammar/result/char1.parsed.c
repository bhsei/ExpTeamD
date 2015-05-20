extern int printf(char const * __format, ...);

int foo(char x)
{
  char y;
  y = x;
  return ++x > y;
}

int main(void)
{
  int i;
  for (i = -127 - 1; i <= 127; i++) {
    printf("%d ", foo(i));
    if ((i & 31) == 31) {
      printf("\n");
    }
  }
  return 0;
}


