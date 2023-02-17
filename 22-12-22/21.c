#include <stdio.h>

int main(void) {
	int T,X,Y,P,Q;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d",&X,&Y,&P,&Q);
	    int x=X+(P*10);
	    int y=Y+(Q*10);
	    if(x<y){
	        printf("Chef\n");
	    }
	    else if(x==y){
	        printf("Draw\n");
	    }
	    else{
	        printf("Chefina\n");
	    }
	}
	return 0;
}
