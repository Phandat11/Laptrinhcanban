#include	<stdio.h>

int main()
{
	printf("Nhap so nguyen duong n = ");
	int n;
	scanf("%d", &n);
	
	int i, dem = 0;
	for(i=1; i<=n;i++)
	{
	dem = dem +i*i;
	}
	printf("Tong binh phuong cac so tu 1 den n la: %d", dem);
	return 0;
	
}
