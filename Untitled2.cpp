#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	
	for(int i=2;i<=n;++i){
		int dslu=0;
		for(int j=1;j<=i;++j){
		if(i%j==0){
			dslu ++;
		}
		}
		if(dslu==2){
			printf("%d\n",i);
		}
	}
}
