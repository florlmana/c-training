#include <stdio.h>

//TIPOS DE DATOS

int main () {
    int x = 10;
    char y = 'y';
    float z = 10.0;

    printf("Value of x: %d \n", x);
    printf("Value of y: %c \n", y);
    printf("Value of z: %f \n", z);

    calculator();
    printf("\n");
    age();
    printf("\n");
    conversor();
    printf("\n");
    areaCalculator();
    printf("\n");
    realCalculator();
    printf("\n");

    return 0;
}

int calculator(){
    int a = 10;
    int b = 20;

    int sum(){

    int s;
    s = a + b;
    printf("Value of a + b: %d \n", s);
    return 0;

    }

    int rest(){

    int r;
    r = a - b;
    printf("Value of a - b: %d \n", r);
    return 0;

    }

    int mult(){

    int m;
    m = a * b;
    printf("Value of a * b: %d \n", m);

    return 0;
    }

    int div(){

    int d;
    d = a / b;
    printf("Value of a / b: %d \n", d);

    return 0;
    }

    sum();
    rest();
    mult();
    div();
}

//VARIABLES Y TIPOS DE VARIABLES

int age(){
    int edad = 25;
    printf("Tengo %d años\n", edad);
    return 0;
}

int conversor(){
    float celsius, fahrenheit;

    printf("Ingresa la temperatura en grados Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

//DECLARACIÓN DE VARIABLES EN C

int variables(){
    int i1, i2, i3;
    float f1, f2, f3;
    char c1, c2, c3;
    double d1, d2, d3;

    i1 = 10;
    i2 = 20;
    i3 = 30;

    f1 = 40.0;
    f2 = 50.2;
    f3 = 60.4;

    c1 = "70";
    c2 = "80";
    c3 = "90";

    d1 = 100;
    d2 = 110;
    d3 = 120;
}

int areaCalculator(){
    float base, altura, area;

    printf("Ingresa la base y la altura del triangulo: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura)/2;
    printf("El area total es: %f \n", area);

    return 0;
}

//OPERADORES

int realCalculator(){
    float num1, num2, sum, rest, div, mult;

    printf("Ingresa dos numeros y descubri la magia: \n");
    scanf("%f %f", &num1, &num2);

    sum = num1 + num2;
    rest = num1 - num2;
    div = num1 / num2;
    mult = num1 * num2;

    printf("La suma de los numeros es: %f \n", sum);
    printf("La resta de los numeros es: %f \n", rest);
    printf("La division de los numeros es: %f \n", div);
    printf("La multiplicacion de los numeros es: %f \n", mult);

    return 0;
}


