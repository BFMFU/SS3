#include<stdio.h>

int main(){
	int firstNumber, secondNumber, thirdNumber, sum;
	float average ;
	printf("Nhap diem mon toan ");
	scanf("%d",&firstNumber);
	fflush(stdin);
	printf("Nhap diem mon van ");
	scanf("%d",&secondNumber);
	fflush(stdin);
	printf("Nhap diem mon anh ");
	scanf("%d",&thirdNumber);
	fflush(stdin);
	sum=firstNumber+secondNumber+thirdNumber ;
	average=(float) sum/3 ;
	printf("Diem mon toan %d Diem mon van %d Diem mon anh %d\n", firstNumber ,secondNumber, thirdNumber );
	printf("Tong diem la: %d\n",sum);
	printf("Trung binh diem la: %.2f", average);	

	return 0 ;
}
