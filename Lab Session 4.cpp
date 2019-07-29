#include <stdio.h>

int main(){
	int a;
	printf("Nhap a:\n");
	scanf("%d",&a);

	int dem_so_luong_uoc = 0;
	for (int i = 1; i <= a; ++i)
	{
		if(a%i == 0){
			dem_so_luong_uoc++;
		}
	}

	if(dem_so_luong_uoc == 2){
		printf("day la so nguyen to\n");
	}else{
		printf("day khong phai so nguyen to\n");
	}

	return 0;
}
