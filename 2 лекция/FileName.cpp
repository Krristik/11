#include <iostream>
#include <cmath>

using namespace std;

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant, x1, x2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The equation has two real roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }

    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        cout << "The equation has one real root: x = " << x1 << endl;
    }

    else {
        cout << "The equation has no real roots." << endl;
    }
}

int main() {
    double a, b, c;

    cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}