#include <stdio.h>

int main(){
	int n,m;
	printf("Nhap chieu dai va chieu rong\n");
	scanf("%d%d",&n,&m);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			printf("*");
		}
		printf("\n");
	}
}
