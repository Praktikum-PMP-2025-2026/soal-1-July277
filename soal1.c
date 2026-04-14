#include <stdio.h>

int main(void) {
    /** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : Julianysyah Putra Jalinda (13224026)
 *   Nama File           : soal1.c
 *   Deskripsi           : Soal 1 - Menara Lampu: Untuk setiap tingkat dari 1 sampai N, cetak warna lampu berdasarkan aturan prioritas tertentu.
 * 
 */
#include <stdio.h>
int N;
int main(){
    scanf("%d", &N);
    for(int i = 1; i < N + 1; i++){
        if (i % 2 == 0 && i % 3 == 0){
            printf("BIRU\n");
        } else if(i % 3 == 0){
            printf("MERAH\n");
        } else if(i % 2 == 0 && i != 10){
            printf("KUNING\n");
        } else{
            printf("%d\n", i);
        }
    }
    return 0;
}

    return 0;
}
