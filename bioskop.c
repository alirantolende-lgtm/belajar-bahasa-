#include <stdio.h>

int main(){
    int studio,jumlah, harga = 0, total,diskon  = 0;

    // 1 = REGULAR,2 = PREMIUM, 3 = IMAX
    printf("Pilih studio (1=Regular, 2=Premium, 3=IMAX): ");
    scanf("%d", &studio);

    switch(studio){
        case 1:
            harga = 40000;
            printf("Anda memilih studio Regular \n");
            break;
        case 2:
            harga = 65000;
            printf("Anda memilih studio premium\n");
            break;
        case 3:
            harga = 85000;
            printf("Anda memilih studo IMAX\n");
            break;
        default:
            printf("pilihan studio tidak valid!\n");
            return 0;
    }

    printf("Jumlah tiket: ");
    scanf("%d", &jumlah);

    if(jumlah<=0){
        printf("jumlah tidak vaild!\n");
        return 0;
    }

    total = harga*jumlah;

    if(jumlah>=5){
        diskon = total1/10;
    } else if (jumlah >=3){
        diskon = total / 20;
      else {
        diskon = 0;
    }

    printf("Total bayar: %d\n", total - diskon);
    printf("Diskon: %d\n", diskon);

    return;
}
