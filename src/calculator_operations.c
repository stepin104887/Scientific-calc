#include <calculator_operations.h>

float sine(float x)

{

return (sin (x*PI/180));

}

float cosine(float x)

 {

return (cos (x*PI/180));

}

float tangent(float x)

{

return (tan(x*PI/180));

}

float cosec(float x)

{

return (1/sin(x*PI/180));

}

float sec(float x)

{

return (1/cos(x*PI/180));

}

 float cot(float x)

 {

return (1/tan(x*PI/180));

}

 float logten(float x)

{

return (log10(x));

}

 float squareroot(float x)

 {

return (sqrt(x));

}

float cuberoot(float x)

 {

return (cbrt(x));

}

float exponent(float x)

   {

  return(exp(x));

}

float power(float x, float y)

{

return (pow(x,y));

}

float addition(int arr[],int x)

{

    int i,a=0;

    for (i=1;i<=x;i++)

        a = a+arr[i];

    return a;

}

float subtraction(float x, float y)

{

return (x-y);

}

float multiplication(int arr[],int x)

{

    int i,a=1;

    for (i=1;i<=x;i++)

        a = a*arr[i];

    return a;

}

float division(float x, float y)

{

return (x/y);

}

float modulo(float x, float y)

{

return (fmodf(x,y));

}
