#include	<stdio.h>
#include	<math.h>

struct PhanSo
{
	int tuSo;
	int mauSo;	
};

void NhapDanhSachPhanSo(struct PhanSo DSPS[], int soPhanSo)
{
	for(int i = 0; i < soPhanSo; i++)
	{
		printf("\n Nhap tu so cua phan so thu %d: ", i+1);
		scanf("%d", &DSPS[i].tuSo);
		printf("\n Nhap mau so cua phan so thu %d: ", i+1);
		scanf("%d", &DSPS[i].mauSo);
	}
}

void XuatPhanSo(struct PhanSo ps)
{
	printf("%d/%d", ps.tuSo, ps.mauSo);
}

void XuatDanhSachPhanSo(struct PhanSo DSPS[], int soPhanSo)
{
	for(int i = 0; i < soPhanSo; i++)
		printf("\n - Phan so thu %d: %d/%d", i+1, DSPS[i].tuSo, DSPS[i].mauSo);
}

void ChuanHoaDanhSachPhanSo(struct PhanSo DSPS[], int soPhanSo)
{
	for(int i = 0; i < soPhanSo; i++)
		if(DSPS[i].mauSo < 0)
		{
			DSPS[i].tuSo = DSPS[i].tuSo * (-1);
			DSPS[i].mauSo = DSPS[i].mauSo * (-1);
		}
}

int TimUocChungLonNhat(int a, int b)
{
	for(int i = abs(a); i > 0; i --)
		if(a%i==0 && b%i==0)
			return i;
			
	return 1;
}

void RutGonDanhSachPhanSo(struct PhanSo DSPS[], int soPhanSo)
{
	for(int i = 0; i < soPhanSo; i++)
	{
		int ucln = TimUocChungLonNhat(DSPS[i].tuSo, DSPS[i].mauSo);
		DSPS[i].tuSo = DSPS[i].tuSo/ucln;
		DSPS[i].mauSo = DSPS[i].mauSo/ucln;
	}
}

struct PhanSo TongDanhSachPhanSo(struct PhanSo DSPS[], int soPhanSo)
{
	struct PhanSo PSTong;
	int mauSoChung = 1;
	int tuPhanSoTong = 0;
	
	// 1. Tinh mau so chung.
	for(int i = 0; i < soPhanSo; i++)
		mauSoChung = mauSoChung * DSPS[i].mauSo;
		
	//2. Cong tu cua cac phan so
	for(int i = 0; i < soPhanSo; i++)
	{
		int heSo = mauSoChung / DSPS[i].mauSo;
		tuPhanSoTong = tuPhanSoTong + (heSo*DSPS[i].tuSo);
	}
	
	PSTong.tuSo = tuPhanSoTong;
	PSTong.mauSo = mauSoChung;
	return PSTong;
}

struct PhanSo TimPhanSoNhoNhat(struct PhanSo DSPS[], int soPhanSo)
{
	float giaTriMin = (float)DSPS[0].tuSo/DSPS[0].mauSo;
	int vt = 0;
	
	for(int i = 1; i < soPhanSo; i++)
	{
		float giaTriMinPhanSoHienTai = (float)DSPS[i].tuSo/DSPS[i].mauSo;
		if(giaTriMin > giaTriMinPhanSoHienTai)
		{
			giaTriMin = giaTriMinPhanSoHienTai;
			vt = i;
		}
	}
	
	return DSPS[vt];
}
void TangDan(int a[], int n)
{
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

int main()
{
	struct PhanSo DSPS[100], psTong, psMin;
	int soPhanSo,a,n;
	printf("\n Nhap so luong phan so: ");
	scanf("%d", &soPhanSo);
	
	NhapDanhSachPhanSo(DSPS, soPhanSo);
	printf("\n Danh sach cac phan so vua nhap: ");
	XuatDanhSachPhanSo(DSPS, soPhanSo);
	
	ChuanHoaDanhSachPhanSo(DSPS, soPhanSo);
	printf("\n Danh sach cac phan sau khi chuan hoa: ");
	XuatDanhSachPhanSo(DSPS, soPhanSo);
	
	RutGonDanhSachPhanSo(DSPS, soPhanSo);
	printf("\n Danh sach cac phan sau khi rut gon: ");
	XuatDanhSachPhanSo(DSPS, soPhanSo);
	
	psTong = TongDanhSachPhanSo(DSPS, soPhanSo);
	printf("\n Tong cac phan so: ");
	XuatPhanSo(psTong);
	
	psMin = TimPhanSoNhoNhat(DSPS, soPhanSo);
	printf("\n Phan so nho nhat: ");
	XuatPhanSo(psMin);
	
	TangDan(a,n);
	printf("\nMang sap xep tang dan la: ");
	XuatDanhSachPhanSo(DSPS, soPhanSo);
	return 0;
}
