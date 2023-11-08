#include <stdio.h> 
int main(){
	//Nhap vao so nguyen co 4 chu so 
	int num;
	printf("Nhap vao mot so nguyen co 4 chu so :");
	scanf("%d, &num");
    //Tinh tong cac chu so
	int sum = 0;
	sum = (num % 10) + (num / 10 % 10) + (num / 100 % 10) + (num / 1000 % 10);
	//Tinh so nghich dao cua so do 
	int reverse = 0;
	reverse = (num % 10) * 1000 + (num / 10 % 10) * 100 + (num / 100 % 10) * 10 + (num / 1000 % 10); 
	
	printf("Tong cac chu so: %d \n", sum);
	printf("So nghich dao: %d \n", reverse);
}
