#include	<stdio.h>

int kiemtraTamGiac(int a,int b,int c)
{
	if(a+b>c && a+c>b && b+c>a)
		return 1;
	else
		return 0;
}
int TinhChuVi(int a,int b,int c)
{
	return a+b+c ;
}


int main()
{
	int a ,b ,c;
	printf("Nhap canh a: ");
	scanf("%d",&a);
	printf("nhap canh b: ");
	scanf("%d",&b);
	printf("nhap canh c: ");
	scanf("%d",&c);
	
	if(kiemtraTamGiac(a,b,c)==1)
	printf("Chu vi tam giac la: %d", a+b+c);
	else
	printf("day khong phai la tam giac ");
	return 0;
}
