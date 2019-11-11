#include	<stdio.h>
#include	<math.h>
struct	ellipse{
	int x;
	int y;
	int R1;
	int R2;
};
void nhap(struct ellipse &el)
{
	printf("Nhap vao toa do x: ");
	scanf("%d",&el.x);
	printf("Nhap vao toa do y: ");
	scanf("%d",&el.y);
	printf("Nhap vao ban kinh R1: ");
	scanf("%d",&el.R1);
	printf("Nhap vao ban kinh R2: ");
	scanf("%d",&el.R2);	
}
void xuat(struct ellipse el)
{
	printf("\ntoa do x vua nhap la: %d",el.x);
	printf("\ntung do y vua nhap la: %d",el.y);
	printf("\nBan kinh R1 vua nhap la:%d",el.R1);
	printf("\nBan kinh R2 vua nhap la: %d",el.R2);
}
float ChuVi(struct ellipse el)
{

	float chuvi=2*3.14*sqrt((el.R1*el.R1+el.R2*el.R2)/2);
	return chuvi;
	
}
float DienTich(struct ellipse el)
{

	float DienTich=3.14*el.R1*el.R2;
	return DienTich;
	
}
int kiemtra(struct ellipse el)
{
	if(el.x==0&&el.y==0)
	return 1;
	return 0;
}
int main()
{
	struct ellipse el;
	nhap(el);
	xuat(el);
	printf("\nChu vi hinh ellipse vua nhap la : %f",ChuVi(el));
	printf("\n dien tich hinh ellipse vua nhap la: %f",DienTich(el));
	if(kiemtra(el)==1)
	printf("hinh ellips nam o goc toa do");
	else
	printf("\nhinh ellipse khong nam o goc toa do");
	return 0;
}
