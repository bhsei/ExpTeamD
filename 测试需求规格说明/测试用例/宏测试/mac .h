#ifndef HEAD_PROTECT
#define HEAD_PROTECT

#include<stdio.h>

//��������
#define  TO_STRING(p) #p


//���ܳ��ֶ�����
#define N 2+3


#define area(X) X*X


#ifdef  MYFILE

#define myprintf(str)  fprintf(MYFILE,str)



#else

#define myprintf(str)  fprintf(stdout,str)

#endif


#endif
