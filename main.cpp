#include <iostream>
#include <math.h>
#include <stdio.h>
#include "functions.h"

using namespace std;

int main()
{
    double x,y,z,s;
    printf ("Input x,y,z:\n");
    scanf ("%lf%lf%lf", &x, &y, &z, "\n");
    s= fabs(pow(x,(y/x))-cbrt((y/x)))+(y-x)*((cos(y)-(z/(y-x)))/(1+pow((y-x),2)));
    printf("s= %.6lf",s );
    return 0;//лабораторная работа 2
}

