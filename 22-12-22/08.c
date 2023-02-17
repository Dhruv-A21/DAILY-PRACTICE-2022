#include <stdio.h>

int main(void) {
	int T,x1,x2,y1,y2,z1,z2;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
	    if(x2>=x1 && y2>=y1 && z1>=z2){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
