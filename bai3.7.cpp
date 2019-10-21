#include	<stdio.h>
int UCLN (int a,int b)
{
	for(int i=a;i>=1;i--)
	if(a%i==0&&b%i==0)
	   return i;
}
int main()
{
	int a,b;
	printf("Nhap vao so nguyen a: ");
	scanf("%d",&a);
	printf("nhap vao so nguyen b: ");
	scanf("%d",&b);
	int UC= UCLN(a,b);
	printf("Uoc chung lon nhat la: %d",UC);
	
	return 0;
}
