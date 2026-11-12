#include<stdio.h>
int main()
{
	
	float a, b, tong, hieu, tich, thuong;
	
	printf("--------------<Chuong Trinh Tinh Tong, Hieu, Tich, Thuong cua A va B>---------------------------------- \n");
	printf("--------------<nhap A>=");
	scanf("%f",&a);
	
	printf("--------------<nhap B>=");
	scanf("%f",&b);
	
	tong=a+b;
	printf("--------------<Tong cua A va B>= %f----------------------------------  \n",tong);
	
	hieu=a-b;
	printf("--------------<Hieu cua A va B>= %f----------------------------------  \n",hieu);
	
	tich=a*b;
	printf("--------------<Tich cua A va B>= %f --------------------------------- \n",tich);
	
	thuong=a/b;
	printf("--------------<Thuong cua A va B>= %f-------------------------------- ",thuong);
	
	return 0;
}
