extern int printf(char const * __format, ...);

struct s;

union _490;

union _490 {
  short i[3];
  int d;
};

struct _491;

struct _491 {
  struct s * hd;
  struct s * tl;
};

struct s {
  char c;
  union _490 n;
  struct _491 l;
};

char tbl[20];

struct bits1;

struct bits1 {
  unsigned int a : 1;
  unsigned int b : 6;
};

char b1[1];

struct bits2;

struct bits2 {
  unsigned int a : 1;
  unsigned int b : 6;
  unsigned int c : 28;
};

char b2[8];

int main(void)
{
  printf("sizeof(struct s) = %d, sizeof(tbl) = %d\n", sizeof(struct s),
         sizeof(char[20]));
  printf("sizeof(struct bits1) = %d, sizeof(b1) = %d\n",
         sizeof(struct bits1), sizeof(char[1]));
  printf("sizeof(struct bits2) = %d, sizeof(b2) = %d\n",
         sizeof(struct bits2), sizeof(char[8]));
  return 0;
}


