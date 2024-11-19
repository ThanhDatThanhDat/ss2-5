#include<stdio.h>

int main(){
	// khai bao bien
	int width = 2;
	int length = 4; 
	
	// Tinh chu vi va in ra
	int perimeter = (width + length)/2; 
	printf("Ket qua perimiter la %d \n", perimeter);
	
	// Tinh dien tich va in ra
	int acreage = width * length;
	printf("Ket qua acreage la %d \n", acreage);
	
	return 0; 
}
