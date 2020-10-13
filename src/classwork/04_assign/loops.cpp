//cpp

int factorial(int num) {
  
   // for loop
  
   int fact = 1;
  
   for (int i=1; i<=num; i++) {
      
       fact *= i;
   }

   return fact;
}