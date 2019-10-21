#include	<stdio.h>

float tongBPND(int n);

int main()
{
	printf("\nNhap so nguyen duong n: n = ");
	float n;
	scanf("%f", &n);
	
	printf("Tong binh phuong nghich dao cua cac so tu 1 den n la: %.4f", tongBPND( n));
	return 0;
	
}


float tongBPND(int n)
{
	float i;
	float dem = 1;
	for(i=2; i<=n;i++)
	{
		dem = dem +1/(i*i);
	}
	return dem;
}
