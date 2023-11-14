 #include "main.h"
   
   int decimalToOctal(unsigned int n)
   {
       int octalNum[32];
       int j, i = 0;
       int count = 0;
   
       if (n == 0) {
          _putchar('0');
          return (1);
      }
     while (n > 0) {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
     }
 for (j = i - 1; j >= 0; j--) {
	 _putchar(octalNum[j] + '0');
         count++;
     }
 
      return (count);
   }
