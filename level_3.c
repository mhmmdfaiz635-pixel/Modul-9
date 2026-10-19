#include <stdio.h>

double tambah(double a, double b);
double kurang(double a, double b);
double kali(double a, double b);
double bagi(double a, double b);
void tampilkan_menu(void);

int main(void)
{
    int pilihan;
    double a, b, hasil;

    tampilkan_menu();
    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%lf", &a);
    printf("Masukkan angka kedua  : ");
    scanf("%lf", &b);

    switch (pilihan)
    {
    case 1:
        hasil = tambah(a, b);
        printf("Hasil: %.2f\n", hasil);
        break;
    case 2:
        hasil = kurang(a, b);
        printf("Hasil: %.2f\n", hasil);
        break;
    case 3:
        hasil = kali(a, b);
        printf("Hasil: %.2f\n", hasil);
        break;
    case 4:
        if (b == 0.0)
        {
            printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        }
        else
        {
            hasil = bagi(a, b);
            printf("Hasil: %.2f\n", hasil);
        }
        break;
    default:
        printf("Pilihan operasi tidak valid.\n");
        break;
    }

    return 0;
}

void tampilkan_menu(void)
{
    printf("=== KALKULATOR MODULAR ===\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    printf("==========================\n");
}

double tambah(double a, double b)
{
    return a + b;
}

double kurang(double a, double b)
{
    return a - b;
}

double kali(double a, double b)
{
    return a * b;
}

double bagi(double a, double b)
{
    return a / b;
}