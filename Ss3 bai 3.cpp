#include<stdio.h>

 int main(){
	int radius;
	float perimeter;
	float area ;
	float pi = 3.14 ;
	printf("Nhap ban kinh hinh tron ");
	scanf("%d", &radius);
	perimeter=2*radius*pi ;
	area=pi*radius*radius ;
	printf("Chu vi hinh tron la %.2f\n", perimeter);
	printf("Dien tich hinh tron la %.2f\n", area);
return 0 ;
 }
