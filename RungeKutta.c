#include <stdio.h>
#include <math.h>

// Define the differential equation dy/dx = 4e^(0.8x) - 0.5y
double f(double x, double y) {
    return 4 * exp(0.8 * x) - 0.5 * y; //ganti sesuai ode yang di cari
}

// Fungsi Runge-Kutta orde 4 untuk satu langkah
double rungeKutta4(double x, double y, double h) {
    double k1, k2, k3, k4;

    k1 = h * f(x, y);
    k2 = h * f(x + h/2.0, y + k1/2.0);
    k3 = h * f(x + h/2.0, y + k2/2.0);
    k4 = h * f(x + h, y + k3);

    return y + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
}

int main() {
    double x0 = 0.0;    // Nilai awal x
    double y0 = 2.0;    // Nilai awal y
    double h = 1.0;     // Ukuran langkah
    double x = x0, y = y0;
    int n = (int)((4.0-x0)/h);         // Banyak langkah iterasi

    printf("x\t y\n");
    for(int i = 0; i < n; i++) {
        y = rungeKutta4(x, y, h);
        x += h;
        printf("%.2lf\t %.5lf\n", x, y);
    }

    return 0;
}