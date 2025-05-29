#include <stdio.h>

// Fungsi turunan dP/dt = r * P * (1 - P/K)
double f(double t, double P) {
    double r = 0.8;   // Laju pertumbuhan intrinsik (/tahun)
    double K = 100.0; // Kapasitas lingkungan (ribu ekor)
    return r * P * (1 - P / K);
}

// Fungsi Runge-Kutta orde 4 untuk satu langkah
double rungeKutta4(double t, double P, double h) {
    double k1, k2, k3, k4;

    k1 = h * f(t, P);
    k2 = h * f(t + h/2.0, P + k1/2.0);
    k3 = h * f(t + h/2.0, P + k2/2.0);
    k4 = h * f(t + h, P + k3);

    return P + (k1 + 2*k2 + 2*k3 + k4) / 6.0;
}

int main() {
    double t0 = 0.0;   // Waktu awal (tahun)
    double P0 = 10.0;  // Populasi awal (ribu ekor ikan)
    double h = 0.1;    // Ukuran langkah (tahun)
    double t = t0, P = P0;
    int n = (int)((10.0 - t0) / h); // Banyak langkah iterasi sampai t=10 tahun

    printf("t\tPopulasi (ribu ekor)\n");
    printf("%.2lf\t%.5lf\n", t, P);
    for(int i = 0; i < n; i++) {
        P = rungeKutta4(t, P, h);
        t += h;
        printf("%.2lf\t%.5lf\n", t, P);
    }

    return 0;
}