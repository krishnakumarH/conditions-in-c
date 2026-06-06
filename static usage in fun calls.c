//static created only one tym in entire prgm
// instead of for lloop we use static->it remember data
//also static int y;it will assign automatic to y=0
#include<stdio.h>
void fun(){
static int n=0;  
n++;
fputs("%d",n);  //op=1,2,3
  //printf("%d,",n);
}

without static //op will be 1 1 1
