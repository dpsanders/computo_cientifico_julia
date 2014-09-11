
#include <math.h>
#include <stdio.h>

//using namespace std;

inline double f(double x) {
    return cos(x) - x;
}

inline double fp(double x) {
    return -sin(x) - 1.;
}

inline double newton(double x) {
    double tolerancia = 1e-10;
    

        while (fabs(f(x)) > tolerancia) {
          x -= f(x) / fp(x);
        }
    

    return x;
}


int main() {
    double x;
    double a = 0.0;
    for (int i=0; i<100000; i++) {
        x = newton(i % 10);
        a += x;
        // cout << x << endl;
    }
    printf("%g\n", a);
}