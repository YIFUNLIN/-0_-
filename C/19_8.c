#include <stdio.h>

typedef struct
{
    double real;
    double imaginary;
} Complex;

// Addition operator
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Subtraction operator
Complex subtract(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

// Multiplication operator
Complex multiply(Complex a, Complex b)
{
    Complex result;
    result.real = a.real * b.real - a.imaginary * b.imaginary;
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    return result;
}

// Equality operator
int equals(Complex a, Complex b)
{
    return (a.real == b.real && a.imaginary == b.imaginary);
}

// Inequality operator
int not_equals(Complex a, Complex b)
{
    return !equals(a, b);
}

// Input function
void input(Complex *c)
{
    printf("Enter real and imaginary parts: ");
    scanf("%lf %lf", &c->real, &c->imaginary);
}

// Output function
void output(Complex c)
{
    printf("(%f, %f)\n", c.real, c.imaginary);
}

// Test program
int main()
{
    Complex x;
    Complex y = {4.3, 8.2};
    Complex z = {3.3, 1.1};

    printf("Enter a complex number:\n");
    input(&x);

    printf("x: ");
    output(x);
    printf("y: ");
    output(y);
    printf("z: ");
    output(z);

    x = add(y, z);
    printf("\nx = y + z: ");
    output(x);

    x = subtract(y, z);
    printf("\nx = y - z: ");
    output(x);

    x = multiply(y, z);
    printf("\nx = y * z: ");
    output(x);

    printf("\ny == z: %s\n", equals(y, z) ? "true" : "false");
    printf("y != z: %s\n", not_equals(y, z) ? "true" : "false");

    return 0;
}
