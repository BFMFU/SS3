#include<stdio.h>
int main(){
	float doC, doF  ;
	printf("Nhap do C ma ban muon doi ");
	scanf("%f", &doC); 
	doF= doC*1.8+32 ;
	printf("Do F sau khi doi la: %.2f ",doF);
	
	
	
	return 0 ;
}
