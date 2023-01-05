#include <stdio.h>

int main(void) {
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    char s[N];
	    for(int i=0;i<N;i++){
	        scanf("%c",&s[i]);
	    }
	    int a[N],i=N-2;
	    for(int i=0;i<N-1;i++){
	        a[i]=i+1;
	    }
	    for(i=N-2;i>=0;i--){
	        int count=1;
	        int columns=6-a[i]+2,rows=a[i];
	        char b[columns][rows];
	        int k=0;
	        for(int j=0,m=0;j<rows;j++){
	            b[m][j]=s[j+k];
	            if(j==rows-1){
	                k=k+1;
	                m=m+1;
	            }
	        }
	        //check
	        int check=0;
	        for(int j=0,m=0;j<rows;j++){
	            for(int k=0,check=0;k<columns;k++){
	                if(m==k){
	                    continue;
	                }
	                if(b[m][j]==b[m][k]){
	                    check++;
	                }
	            }
	            if(check==rows){
	                count++;
	                
	                goto END;
	            }
	        }
	    }
	    END:
	    printf("%d\n",a[i]);
	    
	    
	}
	
	return 0;
}
