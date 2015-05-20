extern int printf(char const * __format, ...);

unsigned char foo(unsigned short n)
{
  printf("%d\n", n);
  return -30;
}

int main(void)
{
  int x;
  x = foo(-123456);
  printf("%d\n", x);
  return 0;
}


