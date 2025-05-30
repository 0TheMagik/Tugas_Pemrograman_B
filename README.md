# Laporan Tugas Pemrograman Komputasi Numerik Pemrograman B Kelompok 14


#### Anggota Kelompok:
* Naufal Hadi Rasikhin (2306231366)
* Izzan Nawa Syarif  (2306266956)
* Fauzan Farras Hakim Budi Handoyo (2306250610)
* Muhammad Rey Kafaka Fadlan (2306250573)


## STUDI KASUS 1 - Total Energi Panas menggunakan Metode Simpson

Program Studi Kasus 1 dirancang untuk menghitung total energi panas yang dihasilkan berdasarkan data laju aliran panas diskrit terhadap waktu, menggunakan Metode Simpson 1/3. Dalam banyak aplikasi rekayasa termal, data laju aliran panas seringkali tersedia dalam bentuk titik-titik diskrit dari hasil pengukuran atau simulasi, bukan sebagai fungsi matematis yang kontinu. Kondisi ini membuat perhitungan total energi  menjadi tidak dapat dianalisis dengan baik.

Program Studi Kasus 1 mengimplementasikan algoritma Metode Simpson 1/3 untuk mengatasi permasalahan tersebut. Metode Simpson 1/3 adalah teknik integrasi numerik yang mengaproksimasi area di bawah kurva integral dengan menggunakan interpolasi parabola melalui tiga titik data berurutan. Pendekatan ini dapat membuat perhitungan integral yang lebih akurat dibandingkan metode linier seperti metode trapesium, terutama untuk data yang menghasilkan parabola. Rumus Simpson 1/3:


$$
\int_{a}^{b} f(x) \, dx \approx \frac{\Delta x}{3} \left[ f(x_0) + 4f(x_1) + 2f(x_2) + \dots + 2f(x_{n-2}) + 4f(x_{n-1}) + f(x_n) \right]
$$

## STUDI KASUS 2 - Aplikasi Metode Runge-Kutta Orde 4 dalam Pemodelan Dinamika Populasi Ikan di Perairan Tawar

Program Studi Kasus 2 mengimplementasikan Metode Runge-Kutta Orde 4 (RK4) untuk menyelesaikan Persamaan Diferensial Biasa (Ordinary Differential Equations/ODE) yang memodelkan dinamika populasi ikan di perairan tawar. Pemodelan populasi adalah aspek krusial dalam pengelolaan sumber daya perairan, dan model pertumbuhan populasi sering direpresentasikan menggunakan persamaan diferensial.

Secara khusus, program Studi Kasus 2 berfokus pada model logistic growth, yang menggambarkan bagaimana laju pertumbuhan populasi dipengaruhi oleh laju pertumbuhan intrinsik (r) dan kapasitas lingkungan (K). Persamaan diferensial untuk model Studi Kasus 2 adalah:

$$
\frac{dP}{dt} = rP\left(1 - \frac{P}{K}\right)
$$

Di mana $P(t)$ adalah populasi pada waktu $t$.

