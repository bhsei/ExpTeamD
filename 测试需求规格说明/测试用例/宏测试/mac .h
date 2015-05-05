#ifndef HEAD_PROTECT
#define HEAD_PROTECT

#include<stdio.h>

//正常定义
#define  TO_STRING(p) #p


//可能出现二义性
#define N 2+3


#define area(X) X*X


#ifdef  MYFILE

#define myprintf(str)  fprintf(MYFILE,str)



#else

#define myprintf(str)  fprintf(stdout,str)

#endif


#endif
