#include <stdio.h>

int hitung_pangkat(int basis, int pangkat);

int main(void)
{
    int basis, pangkat;

    printf("Masukkan basis: ");
    scanf("%d", &basis);
    printf("Masukkan pangkat: ");
    scanf("%d", &pangkat);

    if (pangkat < 0)
    {
        printf("Pangkat harus bernilai >= 0.\n");
        return 1;
    }

    printf("%d^%d = %d\n", basis, pangkat, hitung_pangkat(basis, pangkat));

    return 0;
}

int hitung_pangkat(int basis, int pangkat)
{
    if (pangkat == 0)
    {
        return 1;
    }
    return basis * hitung_pangkat(basis, pangkat - 1);
}