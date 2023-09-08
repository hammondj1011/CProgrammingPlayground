#include <stdio.h>


int main(){

	int LENGTH = 5;
	int i;

	char test[LENGTH];

	for (i =0;i<LENGTH;i++){
		test[i]=97+i;
		printf("the value at char is %c\n",test[i]);
	}

return 0;
}
