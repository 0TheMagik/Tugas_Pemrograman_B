#include <stdio.h>

// Fungsi Simpson's 1/3 Rule
float simpsons_rule(float x[], float y[], int n) {
    if (n % 2 == 0) {
        printf("Jumlah titik harus ganjil untuk Simpson's Rule (jumlah segmen harus genap).\n");
        return -1;
    }

    float h = x[1] - x[0]; // Asumsi selisih x tetap
    float sum = y[0] + y[n - 1]; // Inisialisasi dengan nilai pertama dan terakhir

    for (int i = 1; i < n - 1; i++) { 
        if (i % 2 == 0)
            sum += 2 * y[i];
        else
            sum += 4 * y[i];
    } // Menambahkan nilai y[i] dengan faktor 2 atau 4 sesuai dengan aturan Simpson

    return (h / 3.0) * sum; // Mengembalikan hasil dari Simpson's Rule
}

int main() {
    // Data waktu (detik) dan laju aliran panas q(t) (Watt)
    float waktu[] = {0, 1, 2, 3, 4, 5, 6};
    float q_t[]   = {0, 120, 190, 170, 110, 60, 30}; // q(t) ditambahkan 1 titik di akhir
    printf("Waktu (detik)\t\tLaju Aliran Panas (Watt)\n");
    for (int i = 0; i < sizeof(waktu) / sizeof(waktu[0]); i++) {
        printf("%.2f\t\t%.2f\n", waktu[i], q_t[i]);
    }
    int n = sizeof(waktu) / sizeof(waktu[0]);
    float Q_total = simpsons_rule(waktu, q_t, n);
    if (Q_total >= 0)
        printf("Total panas yang dihantarkan: %.2f Joule\n", Q_total);

    return 0;
}
