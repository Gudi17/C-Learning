#include <stdio.h>

int width;
int height;

int area;
int perimeter;

int helper;

float pie;
int r;
float tita;

int x;

int main()
 {
   height = 7;
   width = 5;
   helper = 4;
   pie = 3.17;
   tita = 0.5;
   r = 7;

   //calculating part of maths

       perimeter = (width + height)*2;
       printf("The rectangle perimeter = %d inches\n",perimeter);

       area = (width * height);
       printf("The rectangle area = %d inches\n",area);

       area = 0.5*(helper * height);
       printf("The triangle area = %d inches\n" ,area);

       area = (pie * r * r * tita);
       printf("The circle area = %d cm\n" ,area);

       perimeter = 2*(pie * r * tita);
       printf("The cricle perimeter = %d cm\n", perimeter);
       
       
    return 0;
}