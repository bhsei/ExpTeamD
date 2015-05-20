extern int printf(char const * __format, ...);

int x = 42;

_Bool y = 777;

int main(void)
{
  _Bool a;
  _Bool b;
  _Bool c;
  _Bool d;
  _Bool e;
  _Bool f;
  _Bool g;
  _Bool h;
  _Bool i;
  a = x;
  b = x >= 100;
  c = (_Bool) &x;
  d = a && b;
  e = a || b;
  f = a & b;
  g = a | b;
  h = 3.14E0;
  i = 0.0E0;
  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("c = %d\n", c);
  printf("d = %d\n", d);
  printf("e = %d\n", e);
  printf("f = %d\n", f);
  printf("g = %d\n", g);
  printf("h = %d\n", h);
  printf("i = %d\n", i);
  printf("y = %d\n", y);
  return 0;
}


