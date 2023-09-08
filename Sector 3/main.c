#include <stdio.h>


int main(){

int x=5;
int *y;

y = &x;

printf("The value at y is %p\n",y);
printf("The value at *y is %d\n",*y);
printf("the meta y is %p\n",&y);

printf("Let's move to double pointers...\n");

//notice that **z is going to be a pointer to a pointer
int **z;

//here we are assigning the address from y TO Z
z = &y;

printf("The z is %p\n",z);
printf("The value of y at z is %p\n",*z);
printf("The value stored in z is %d\n",**z);

return 0;
}
