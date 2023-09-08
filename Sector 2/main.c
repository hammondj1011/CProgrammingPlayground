#include <stdio.h>

int Addition(int x, int y){

	return x + y;
}

void PrintMyNumber(int x, int y){

	printf("The result of addition of %d and %d is %d\n",x,y,Addition(x,y));
}

int main(){

	printf("Let's start!\n");

	PrintMyNumber(200,3);

return 0;
}


