#include<stdio.h>
#include<stdlib.h>

int main(){
	int * dynamicArray;
	int size = 5;
	int i;
	
	dynamicArray = (int*)malloc(size* sizeof(int));
	
	if(dynamicArray == NULL){
		printf("Memory allocation failed");
	}else {
		for (i =0; i<size ; i++){
			dynamicArray[i]=i *2;
		}
		free(dynamicArray);
	}
	return 0;
}
