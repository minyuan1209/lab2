#include <stdio.h>

int main() {
                                  /* declare string - as array of 10 char - and initialize it. d[8] and d[9] are still not initialized */
  char d[10] = "Silicon";  
    
  int i;
                             
  printf("Our string is: |%s|\n",d);

                                 
  for (i=0; i<10; i++) {                          
    printf("address of d[%d]: %p\n", i, (char*)&d[i]); 
  }

  return 0;
}
