#include<stdio.h>
int thuannghich(int i ) {
 
	int the = i ; 
	int dao = 0 ; 
	
	while(i>0){
	dao = dao*10 + the%10 ;
 	i/=10;
 	}
 	return(the==dao);
}
int main(){
	int n;
	scanf("%d",&n);
 	
	 for(int i = 0 ; i < n ; i++){
 		if(thuannghich(i))
 		printf("%10d", i );
 	}
 
 	return 0 ; 
}
