#include <stdio.h>

int main(){
    
    int jumlah_awal,jumlah_akhir;
    
    do{
        printf("Masukan jumlah awal domba ");
        scanf("%d", &jumlah_awal);
        if(jumlah_awal <9){
            printf("Tidak boleh di bawah 9\n");
        }

    } while (jumlah_awal <9);
    
    do{
        printf("Masukan jumlah akhir domba ");
        scanf("%d", &jumlah_akhir);
        if(jumlah_akhir < jumlah_awal){
            printf("Tidak boleh dibawah jumlah awal\n");
        }

    } while (jumlah_akhir <jumlah_awal);

    int tahun = 0,populasi_domba = jumlah_awal;
    

    while (populasi_domba < jumlah_akhir){
        populasi_domba = populasi_domba/3 - populasi_domba/4 + populasi_domba;
        tahun++;
    } 

    printf("Tahun: %d", tahun);

    return 0;
}

//kondisi: tidak boleh menginput di bawah 9 domba, 
//dan juga populasi akhir tidak boleh di bawah populasi awal
//
