extern int printf(char const * __format, ...);

int main(void)
{
  int i;
  int i__1;
  int i__2;
  int j;
  int i__3;
  int j__1;
  for (i = 0; i < 3; i++) {
    printf("loop1: %d\n", i);
  }
  i__1 = 0;
  for (/*nothing*/; i__1 < 3; i__1++) {
    printf("loop2: %d\n", i__1);
  }
  printf("old i = %d\n", i);
  i__2 = 0;
  for (/*nothing*/; i__2 < 3; i__2++) {
    j = i__2 * 2 + 1;
    printf("loop3: %d %d\n", i__2, j);
  }
  printf("old i = %d\n", i);
  i__3 = 0;
  j__1 = i__3 + 4;
  for (/*nothing*/; i__3 < 3; i__3++, j__1--) {
    printf("loop4: %d %d\n", i__3, j__1);
  }
  printf("old i = %d\n", i);
  return 0;
}


