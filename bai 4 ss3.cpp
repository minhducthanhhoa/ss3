#include <stdio.h> 
int main(){
	//Khai bao bien 
	int a, b, c;
	//Nhap gia tri tu ban phim 
	printf("Nhap gia tri cua a :");
	scanf("%d", &a);
	
	printf("Nhap gia tri cua b :");
	scanf("%d", &b);
	
	printf("Nhap gia tri cua c :");
	scanf("%d", &c);
	//Tim so nguyen lon nhat 
	int max = a;
	if(b > max){
		max = b; 
	}
	if(c > max){
		max = c; 
	}
	//Tim so nguyen nho nhat 
	int min = a;
	if(b < min){
		min = b; 
	}
	if(c < min){
		min = c; 
	}
	
	printf("So nguyen lon nhat la: %d \n", max);
	printf("So nguyen nho nhat la: %d \n", min);
}
	 

