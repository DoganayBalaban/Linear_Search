#include <stdio.h>

int main()
{
    int boyut, i, key;
    // Dizinin boyutunu kullanıcıdan isteyin.
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &boyut);

    // Dizi elemanlarını kullanıcıdan isteyin.
    int arr[boyut];
    printf("Dizi elemanlarini giriniz: ");
    for (i = 0; i < boyut; i++)
        scanf("%d", &arr[i]);

    // Aranacak elemanı kullanıcıdan isteyin.
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &key);

    // Linear Search algoritması ile arama yapın.
    for (i = 0; i < boyut; i++)
        if (arr[i] == key)
        {
            printf("%d dizinin %d. indisinde bulunuyor.\n", key, i + 1);
            break;
        }

    // Eleman bulunamazsa kullanıcıya bilgi verin.
    if (i == boyut)
        printf("%d dizide bulunamadı.\n", key);
    return 0;
}
