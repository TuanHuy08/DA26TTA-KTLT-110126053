# DA26TTA-KTLT-110126053
#include <stdio.h>

int main()
{
	float a,b;
	int tong,hieu,tich;
	float thuong;
	
	printf("Nhap so nguyen a= ");
	scanf("%f", &a);
	
	printf("Nhap so nguyen b= ");
	scanf("%f", &b);
	
	printf("--Tong 2 so nguyen--\n");
	tong=a+b;
	printf("Tong=A+b\n");
	printf("=>Ket Qua Tong La=%d\n",tong);
	
	printf("--Hieu 2 so nguyen--\n");
	hieu=a-b;
	printf("Hieu=A-B\n");
	printf("=>Ket Qua Hieu La=%d\n",hieu);
	
	printf("--Tich 2 so nguyen--\n");
	tich=a*b;
	printf("Tich=A x B\n");
	printf("=>Ket Qua Tich La=%d\n",tich);
	
	printf("--Thuong 2 so nguyen--\n");
	thuong=(a*1.0)/b;
	printf("Thuong=A/B\n");
	printf("=>Ket Qua Thuong La=%f\n",thuong);
	
	printf("---<Ket Qua Cua Cac Phep Tinh Lan Luot La:>---\n==>Tong=%d\n==>Hieu=%d\n==>Tich=%d\n==>Thuong=%f\n",tong,hieu,tich,thuong);
	printf(":))");
	return 0;
}
