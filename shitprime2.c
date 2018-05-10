#include <stdio.h>
#include <stdbool.h>

int main(){
	printf("put the star number \n");
	
	bool is_prime ;
	int start, last, primecnt;
	int numArray[1000];
	start = last = primecnt = 0;

	scanf("%d", &start);
	printf("last number:\n");
	scanf("%d", &last);
	printf("start : %d last : %d\n", start, last);

	for(; start<last; start++){
		if(start==2){
			printf("number 2 is prime\n");
		}
		for(int i=2; i<start; i++){
			is_prime=true;
			if(start%i==0){
				is_prime=false;
				break;
			}
		}
		if(is_prime){
			printf("number %d is prime\n", start);
			numArray[primecnt++] = start;
			is_prime=false;	
		}
	}
	printf("prime number count:%d \n ", primecnt+1);
	for(int i=0; i<primecnt; i++)
		printf(" %d ", numArray[i]);

	return 0;
}
