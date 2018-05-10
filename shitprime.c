#include <stdio.h>
#include <stdbool.h>

int main(){
	printf("put the number count\n");
	
	bool is_prime ;
	int count, div, primecnt;
	int numArray[1000];
	count = div = primecnt = 0;

	scanf("%d", &count);
	printf("count : %d\n", count);

	for(int i=0; i<count; i++){
		printf("number input :");
		scanf("%d", &numArray[i]);
	}	
	for(int i=0; i<count; i++){
		printf("num[%d] : %d\n", i, numArray[i]);
	}

	for(int j=0; j<count; j++){
		if(numArray[j]==2){
			primecnt++;
			continue;	
		}
		for(int i=2; i<numArray[j]; i++){
			is_prime=true;
//			printf("checking... numArray[%d] & %d", &numArray[i], i);
			if(numArray[j]%i==0){
				is_prime=false;
				break;
			}
		}
		if(is_prime){
			primecnt++;
			is_prime=false;	
		}

	}
	printf("\nthe prime count is :%d \n", primecnt);

	return 0;
}
