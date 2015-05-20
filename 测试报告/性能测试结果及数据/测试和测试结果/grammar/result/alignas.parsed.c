extern int printf(char const * __format, ...);

int _Alignas(16) a;

char filler1;

int _Alignas(16) b[3];

typedef int int3[3];

int3 _Alignas(16) bb;

char filler2;

struct s;

struct s {
  char y;
  int _Alignas(16) x;
};

struct s c;

char filler3;

struct s _Alignas(32) d;

char filler4;

union u;

union u {
  int _Alignas(16) x;
  char y;
};

union u e;

char filler5;

union u _Alignas(32) f;

char filler6;

struct s g[3];

char filler7;

struct _Alignas(64) ss;

struct _Alignas(64) ss {
  char y;
  int _Alignas(16) x;
};

struct ss h[3];

char filler8;

int main(void)
{
  printf("a: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(int _Alignas(16)),
         (unsigned int) __alignof(int _Alignas(16)), (unsigned int) &a & 0xF);
  printf("b: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(int _Alignas(16)[3]),
         (unsigned int) __alignof(int _Alignas(16)[3]),
         (unsigned int) &b & 0xF);
  printf("bb: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(int3 _Alignas(16)),
         (unsigned int) __alignof(int3 _Alignas(16)),
         (unsigned int) &bb & 0xF);
  printf("c: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(struct s), (unsigned int) __alignof(struct s),
         (unsigned int) &c & 0xF);
  printf("d: size = %u, alignment = %u, address mod 32 = %u\n",
         (unsigned int) sizeof(struct s _Alignas(32)),
         (unsigned int) __alignof(struct s _Alignas(32)),
         (unsigned int) &d & 0x1F);
  printf("e: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(union u), (unsigned int) __alignof(union u),
         (unsigned int) &e & 0xF);
  printf("f: size = %u, alignment = %u, address mod 32 = %u\n",
         (unsigned int) sizeof(union u _Alignas(32)),
         (unsigned int) __alignof(union u _Alignas(32)),
         (unsigned int) &f & 0x1F);
  printf("g: size = %u, alignment = %u, address mod 16 = %u\n",
         (unsigned int) sizeof(struct s[3]),
         (unsigned int) __alignof(struct s[3]), (unsigned int) &g & 0xF);
  printf("h: size = %u, alignment = %u, address mod 64 = %u\n",
         (unsigned int) sizeof(struct ss[3]),
         (unsigned int) __alignof(struct ss[3]), (unsigned int) &h & 0x3F);
  return 0;
}


