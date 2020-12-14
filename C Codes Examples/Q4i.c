#include<stdio.h>

struct complex{
	float real,image;
}complex1,complex2;



int main(){
	float a,b;
	printf("For 1st complex number \n");
    printf("Enter the real and image parts: ");
    scanf("%f %f", &complex1.real, &complex1.image);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and image parts: ");
    scanf("%f %f", &complex2.real, &complex2.image);
    
    
    a = complex1.real + complex2.real;
    b = complex1.image + complex2.image;
    
    printf("Sum = %.1f + %.1fi\n", a, b);
    
    a = complex1.real - complex2.real;
    b = complex1.image - complex2.image;
    
    printf("Sub = %.1f + %.1fi\n", a, b);
    
    a = (complex1.real * complex2.real)-(complex1.image * complex2.image);
    b =(complex1.image * complex2.real)+(complex1.real * complex2.image);
    
    printf("Mul = %.1f + %.1fi\n", a, b);
    return 0;
}

