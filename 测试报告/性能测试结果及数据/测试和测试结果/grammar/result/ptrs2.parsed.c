typedef unsigned int size_t;

extern void * malloc(size_t __size);

typedef double Matrix[4][4];

Matrix * CopyMatrix(Matrix * Mat)
{
  int i;
  int j;
  Matrix * Res;
  Res = (void *) 0;
  if (Mat == 0) {
    return Mat;
  }
  Res = malloc(sizeof(Matrix));
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 4; j++) {
      (*Res)[i][j] = (*Mat)[i][j];
    }
  }
  return Res;
}

Matrix * IdentMatrix(void)
{
  Matrix SI;
  SI[0][0] = 1.00E0;
  SI[0][1] = 0.00E0;
  SI[0][2] = 0.00E0;
  SI[0][3] = 0.00E0;
  SI[1][0] = 0.00E0;
  SI[1][1] = 1.00E0;
  SI[1][2] = 0.00E0;
  SI[1][3] = 0.00E0;
  SI[2][0] = 0.00E0;
  SI[2][1] = 0.00E0;
  SI[2][2] = 1.00E0;
  SI[2][3] = 0.00E0;
  SI[3][0] = 0.00E0;
  SI[3][1] = 0.00E0;
  SI[3][2] = 0.00E0;
  SI[3][3] = 1.00E0;
  return CopyMatrix(&SI);
}


