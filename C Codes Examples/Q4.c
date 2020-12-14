#include<stdio.h>

typedef struct{
	float real,image;
}complex;


complex add(complex n1,complex n2);
complex sub(complex n1,complex n2);
complex mul(complex n1,complex n2);


int main(){
	complex n1,n2,result1,result2,result3;
	printf("For 1st complex number \n");
    printf("Enter the real and image parts: ");
    scanf("%f %f", &n1.real, &n1.image);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and image parts: ");
    scanf("%f %f", &n2.real, &n2.image);
    
    result1= add(n1,n2);
    result2= sub(n1,n2);
    result3= mul(n1,n2);
    printf("Sum = %.1f + %.1fi\n", result1.real, result1.image);
    printf("Sub = %.1f + %.1fi\n", result2.real, result2.image);
    printf("Mul = %.1f + %.1fi\n", result3.real, result3.image);
    return 0;
}
complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.image = n1.image + n2.image;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.image = n1.image - n2.image;
    return (temp);
}
complex mul(complex n1, complex n2) {
    complex temp;
    temp.real = (n1.real * n2.real)-(n1.image * n2.image);
    temp.image =(n1.image *n2.real)+(n1.real * n2.image);
    return (temp);
}
