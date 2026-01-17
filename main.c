#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, n, uygun, j;
    double sayi, dizi[999], fark;

    srand(time(NULL));

    printf("n i giriniz");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (;;)
        {
            sayi = (rand() % 101 + 20) / 100.0;

            uygun = 1;

            for (j = 0; j < i; j++)
            {

                if (dizi[j] > sayi)
                {
                    fark = dizi[j] - sayi;
                }
                else
                {
                    fark = sayi - dizi[j];
                }

                if (fark > 0.1)
                {
                    uygun = 0;
                    break;
                }
            }
            if (uygun == 1)
            {
                break;
            }
        }
        dizi[i] = sayi;
        printf("%lf \n", dizi[i]);
    }
}
