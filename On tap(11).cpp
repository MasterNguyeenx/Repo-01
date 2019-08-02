#include <stdio.h>
int main(){
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	int max;
	max = a[0];
	int min;
	min = a[0];
	
	for(int i=0; i<n; ++i){
		if(max<a[i]){
			max=a[i];
		}
	}
	for(int i=0;i<n;++i){
		if(min>a[i]){
			min=a[i];
		}
	}
	printf("gia tri lon nhat la %d\n",max);
	printf("gia tri nho nhat la %d\n",min);
}
