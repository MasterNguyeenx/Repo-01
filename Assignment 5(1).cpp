#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int f0= 1,f1=1;
	int fn=1;
	
	for(int i=2 ; i<=n ; ++i){
		fn=f0+f1;
		f0=f1;
		f1=fn;
	}
	printf("So thu %d cua day fibonacci la: %d",n,fn);

}
