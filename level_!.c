#include <stdio.h>

int hitung_kuadrat(int bilangan);
int hitung_kubik(int bilangan);

int main(void)
{
    int angka;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    printf("Kuadrat: %d\n", hitung_kuadrat(angka));
    printf("Kubik  : %d\n", hitung_kubik(angka));

    return 0;
}

int hitung_kuadrat(int bilangan)
{
    return bilangan * bilangan;
}

int hitung_kubik(int bilangan)
{
    return bilangan * bilangan * bilangan;
}