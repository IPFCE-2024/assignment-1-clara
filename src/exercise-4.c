/* add two numbers*/

#include <stdio.h>

int main(void){
int x; /*first value*/
int y; /*second value*/
int add; /*adds together*/

printf ("input two numbers\n");
scanf ("%d%d", &x, &y);

add = x + y;

printf ("the two numbers added together is %d.\n", add);

return 0;
}