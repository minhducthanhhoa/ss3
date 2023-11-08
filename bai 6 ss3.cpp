#include <stdio.h> 
int main(){
	//Nhap vao nam sinh
	int year; 
	printf("Nhap vao nam sinh :");
	scanf("%d, &year");
	//Tinh tuoi 
	int age = 0;
	age = 2023 - year;
	printf("Tuôi la: %d \n", age);
	//KT chan le 
	if (age % 2 == 0) {
		printf("%d la so chan.\n", age);
	} else {
		printf("%d la so le.\n", age);
    }
}
