#include <stdio.h>
int main(){
	//Khai bao va khoi tao bien r
	float r, circle_perimeter, circle_area;
	//Khai bao hang so PI là 3.14
	const float PI = 3.14;
	printf("Nhap ban kinh hinh tron :"); 
	scanf("%f", &r); 
	
	circle_perimeter = r * 2 * PI;
	circle_area = r * r * PI; 
	
	printf("Chu vi cua hinh tron la : %.2f \n", circle_perimeter);
	printf("Dien tich cua hinh tron la : %.2f \n", circle_area);
}
