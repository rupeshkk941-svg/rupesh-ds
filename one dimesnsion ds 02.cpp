#include <stdio.h>

int main(){
	int array [5] ={10,20,30,40,50};
	int i;
	printf("elements of the array are :\n");
	
	for (i =0; i <5; i++) {
		printf("array[%d] = %d\n" ,i, array[i]);
	}
return 0;
}
