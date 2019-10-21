#include	<stdio.h>

int soHoanHao(int n)
{
	int i, dem=1 ;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		dem=dem+i;
	}
	return dem;
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	int x = soHoanHao (n);
	if(x==n)
	printf("so vua nhap la so hoan hao ",n);
	else
	printf("so vua nhap khong phai la so hoan hao ",n);
	
	return 0;
}
