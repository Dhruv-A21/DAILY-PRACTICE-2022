#include <stdio.h>

int main(void) {
    //Green(G)-Rarest Blue(B)-Med Brown(R)-Common .
	char a,b;
	scanf("%c %c",&a,&b);
	if(a=='R' || b=='R'){
	    printf("R");    
	}
	else if(a=='B' || b=='B'){
	    printf("B");
	}
	else{
	    printf("G");
	}
	return 0;
}
