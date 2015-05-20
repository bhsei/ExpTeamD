typedef long wchar_t;

extern int printf(char const * __format, ...);

int main(void)
{
  printf("%d\n", 5UL);
  printf("%d\n", 20UL / sizeof(wchar_t));
  return 0;
}


