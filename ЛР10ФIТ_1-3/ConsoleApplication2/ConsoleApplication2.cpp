#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

//Для зручності я всі операції розбив на функції

double getCircleLength(double diameter) { //Завд. 1 Довжина кола
    double length;
    length = diameter * M_PI;
    return length;
}

void getEnergy(double m, double h, double v) { //Завд. 2 Кінетична та потенціальна енергія
    const double g = 9.8;

    double kynetic = (m * pow(v, 2)) / 2;
    double potential = m * g * h;

    cout << "Кінетична енергія E = " << kynetic << endl;
    cout << "Потенціальна енергія P = " << potential << endl;
}

void calculateByFormula() { //Завд 3. Значення виразу
    int alfa = 30;
    int beta = 90;
    double z1 = (sin(alfa) + cos(2 * beta - alfa)) / (cos(alfa) - sin(2 * beta - alfa));
    double z2 = (1 + sin(2 * beta)) / cos(2 * beta);

    cout << z1 << endl;
    cout << z2 << endl;
}

void calculateFunctionValue() { //Завд. 4 Обчислити значення функції
    double t = 2.2;
    double b = 3;
    double a = pow(t, 2) * b;
    double x = cbrt(a - b);
    double y = a * cos(x) - b * sin(x);

    cout << y;
}

void calculateExpression() { //Завд. 5 знайти значення виразу
    double y = 2;
    double d = 4;
    double result = (pow(sin(y), 2) + 0.3 * d) / (pow(M_E, y) + log10(d));

    cout << result;
}

int main(){
    setlocale(0, ".1251");
   
    //getCircleLength(4);
    //getEnergy(5, 6, 10);
    //calculateByFormula();
    //calculateFunctionValue();
    //calculateExpression();
}




