#include <stdio.h>
#include <string.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    char s[N];
	    //Input
		printf("Enter the string:");
	    scanf("%s",&s);
	    int a[N-1],i=0;
	    
	    for(i=0;i<N-1;i++){
	        a[i]=i+1;
	    }
	    //Helpers
	    int columns=0,rows=0,flag=0,j,k;
	    //Loop to get strings & check
	    for(i=N-2;i>=0;i--){
	        columns=N-i;
	        rows=i+1;
	        char compare[columns][rows];
	        //Steps used for skipping starters
	        int step=0,check=0,length=0;
	        for(j=0;j<columns;j++){
	            step=j,check=j;
	            for(k=0;k<rows;k++){
	                compare[j][k]=s[k+step];
	                if(s[k+step]!=s[k+step+1]){
	                    break;
	                }
	            }
	            length=strlen(compare[j]);
	            if(length!=a[i]){
	                continue;
	            }
	            if(j==0){
	                continue;
	            }
	        }
			for(j=0;j<columns;j++){
	            for(k=0;k<rows;k++){
					printf("%c",compare[j][k]);
				}
				printf("\n");
	        }
			
	        
	        
	    }
	    
	}
	
	return 0;
}
