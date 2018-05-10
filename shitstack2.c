#include <stdio.h>
#define MAX 1000
#define PUSH 1
#define POP 2
#define SIZE 3
#define TOP 4
#define SHOW 5

//functions
void push();
void pop();
void empty();
void top();
int  size(int );
void show();

// variables
int count = 0;
int stack[MAX];


int main(){
	int i;
	int cmd; 

	printf("STACKSTACK\n");
	printf("cmd types : 1(push) 2(pop) 3(size) 4(top) 5(show)\n");
	
	while(1){
		scanf("%d", &cmd);
		switch(cmd){
			case PUSH:
				push();
				break;
			case POP:
				pop();
				break;
			case SIZE:
				size(0);	
				break;			
			case TOP:
				top();
				break;
			case SHOW:
				show();
				break;
			default:
				printf("there is no command for this \n");
				break;
		}		
	}
	return 0;
}

void show()
{
	int i = 0;
	if(count == 0){
		printf("stack empty\n");
		return;
	}

	printf("stack list\n");
	while(i<count)
		printf("%d \n",stack[i++]);

	return;
}
void push(){
	int val;

	printf("push number: ");
	scanf("%d", &val);
	printf("\n");

	stack[count] = val;
	size(1); 		// count +1

	return;
}
void pop(){
	if(count){
		printf("pop number: %d\n", stack[size(-1)]);
		stack[count] = 0;
	}else if(count==0)
		printf("stack is already empty\n");
	return;
	
}
void empty(){
	if(count)
		printf("stack is not empty\n");
	return;
}
int size(int i){
	
	if(i==1 || i==-1)
		count = count + i;	
	else if(count==0)
		printf("stack is empty\n");
	else if(i==0&&count!=0)
		printf("stack size is %d\n", count);
	else
		printf("wrong i");

	return count;

//	for(int i=0;   ; i++){
//		printf("stack[%d] = %d\n", i, stack[i]);	
//		count=i;
//	}
}
void top(){
	printf("top value of the stack is: %d\n\n", stack[count-1]);
	return;
}
