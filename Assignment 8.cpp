#include<stdio.h>

int findmax(int a[100],int n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max>a[i]){
			max=a[i];
		}
	}
	return max;
}

int print(int b[100]){
	for(int i=0;i<5;i++){
		printf("Nhap 5 phan tu vao mang\n b[%d]=",i);
		scanf("%d",&b[i]);
	}
	int tg;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(a[i] > a[j]){
				tg = a[i];
                a[i] = a[j];
                a[j] = tg;
			}
		}
	}
	printf("Mang da sap xep la:%d",print)
}

int tonglonnhat(int c[][MAX], int m, int n){
	int i,d;
	double max=tong(c,0,n);
	for( i=1;i<m;i++)
	{
		double t=tong(c,i,n);
		if(max<t)
		{
			max=t;
			d=i;
		}
	}
	return d;
}


