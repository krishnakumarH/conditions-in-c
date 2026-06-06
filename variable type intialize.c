//we can also initalize using like this constant name it will identify as default.
//signed store both pos and neg values
//unsigned stores only pos values
#include <stdio.h>

int main()
{
    signed int a = 25;                  // int              printf("int                 : %d\n", a);
    unsigned int b = 25U;        // unsigned int     printf("unsigned int        : %u\n", b);
    

    signed long int c = 25L;            // long int          printf("long int            : %ld\n", c);
    unsigned long int d = 25UL;  // unsigned long int   printf("unsigned long int   : %lu\n", d);
  

    signed long long int e = 25LL;      // long long int            printf("long long int       : %lld\n", e);
    unsigned long long f = 25ULL;// unsigned long long int  ` printf("unsigned long long  : %llu\n", f);
   

    float g = 25.5f;             // float                     printf("float               : %f\n", g);
    double h = 25.5;             // double                      printf("double              : %f\n", h);
    long double i = 25.5L;       // long double                    printf("long double         : %Lf\n", i);

    char j = 'A';                // character                     printf("char                : %c\n", j); 

  
    

    return 0;
}
```
