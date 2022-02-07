/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}

 int minumum(int no1,int no2){
    if(no1>no2){
       return no2;}
    else if (no2>no1){
       return no1;}
 }

int maximum(int x1,int x2){
   if(x1>x2){
     return x1;}
   else if(x2>x1){
      return x2;}
}

int multiply(int y1,int y2){
   return y1*y2; }
