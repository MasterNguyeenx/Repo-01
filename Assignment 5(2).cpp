#include<stdio.h>

int main(){
	int n,dao,the;
	scanf("%d",&n);
	
	for(int i = 1; i<n ; ++i){
		dao=0;
		the=i;
		while(the!=0){
			dao=dao*10+the%10;
			the=the/10;
		}
		if(dao==i){
			printf("%d\n",i);
		}	
		}
	}
