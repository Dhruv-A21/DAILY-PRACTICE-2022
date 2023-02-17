#include <stdio.h>

int main(void) {
	int N;
	scanf("%d",&N);
	int max=1;
	for(int i=2;i<=10;i++){
	    if(N%i==0){
	        max=i;
	    }
	}
	printf("%d",max);
	return 0;
}
