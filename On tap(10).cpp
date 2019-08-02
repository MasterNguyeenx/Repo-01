#include<stdio.h>
int main(){
	int n;
	int a[n];
	int tong,i;
	float avg;
	
	printf("Phep tinh gom bao nhieu phan tu n?:\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	tong = avg = 0;
	for(i=0;i<n;++i){
		tong += a[i];
	}
	printf("Trung binh cong cua nhung phan tu tren la: %f\n",avg=(float)tong/i);
}
