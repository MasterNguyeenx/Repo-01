# include <stdio.h> 

int main() 
{ 
    int a,b,c; 
    khaibao : printf("\nnhap 3 canh cua tam giac a,b,c:\n"); 
    scanf("%d %d %d",&a,&b,&c); 

     if ((a+b>c) && (a+c>b) && (b+c>a)){
        printf(" Day la mot hinh tam giac \n");
    }else{
    	printf(" Day khong phai mot hinh tam giac\n");
    	goto khaibao;
	}
	return 0;
}
