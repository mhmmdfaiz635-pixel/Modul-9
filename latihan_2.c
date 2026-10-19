#include <stdio.h>
int main(void)
{
    int total_detik;
    int jam;
    int menit;
    int detik;
    int sisa;
    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);
    if (total_detik < 0)
    {
        printf("Total detik tidak boleh negatif.\n");
        return 1;
    }
    jam = total_detik / 3600;
    sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;
    printf("%d detik setara dengan:\n", total_detik);
    printf("%d jam\n", jam);
    printf("%d menit\n", menit);
    printf("%d detik\n", detik);
    return 0;
}
int hitung_jam(int total_detik);
int hitung_sisa_setelah_jam(int total_detik);
int hitung_menit(int sisa_detik);
int hitung_detik(int sisa_detik);
void tampilkan_waktu(
    int total_detik,
    int jam,
    int menit,
    int detik);