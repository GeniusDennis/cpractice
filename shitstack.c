#include <stdio.h>

void push(int, int *);
void pop(int, int *);
void empty(int *);
void top(int *);
int getcnt(int *);

int main(){
	int length, i;
	length = i = 0;	
//	int stack[1000] ;

	printf("put stack info : 1, number of number. 2, numbers \n");	
	scanf("%d", &length);
	int stack[length];
	// init stack
	for(int i=0; i<length; i++) 	
		stack[i] = 0;

	for(int i=0; i<length; i++)
		scanf("%d", &stack[i]);
	
	while(i<length)
		printf("%d ",stack[i++]);
////////////////////////////making stack///////////////////////
	printf("length = %d, count =%d", length, getcnt(stack));

	return 0;
}
void push(int val, int *stack){
	
}
void pop(int val, int *stack){
}
void empty(int *stack){
}
int getcnt(int *stack){
	int count = 0;	

	for(int i=0; i<1000  ; i++){
		printf("stack[%d] = %d\n", i, stack[i]);	
		count=i;
	}
	return count+1;
}
void top(int *stack){
}
