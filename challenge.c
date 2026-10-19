#include <stdio.h>

int apakah_prima(int bilangan);

int main(void)
{
    int batas, i;

    printf("Masukkan batas maksimum: ");
    scanf("%d", &batas);

    printf("Bilangan prima dari 1 sampai %d:\n", batas);
    for (i = 1; i <= batas; i++)
    {
        if (apakah_prima(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

int apakah_prima(int bilangan)
{
    int i;
    if (bilangan < 2)
    {
        return 0;
    }
    for (i = 2; i * i <= bilangan; i++)
    {
        if (bilangan % i == 0)
        {
            return 0;
        }
    }
    return 1;
}