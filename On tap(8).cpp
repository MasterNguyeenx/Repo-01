#include <stdio.h>

int main(){
	//Biet 100 so le dau tien la 1,3,5,7,9....199
	int n = 200;
	int S=0;
	
	for(int i=1; i<=n ; i++){
		if(i % 2 != 0){
			S += i;
		}
	}
	printf("Tong cua 100 so le dau tien la %d",S);
}
