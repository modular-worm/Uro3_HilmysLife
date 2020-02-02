#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hilmy's Life dengan Paradigma Prosedural
//Mohon maaf belum dapat mengembangkan versi OOP kak, Karena masih dalam proses belajar
//Versi yang menerapkan ADT, Pointer, dan beberapa hal lain akan segera dikembangkan
//Status
int hP = 50, xP = 0, nW = 50000,fP = 50, sP= 10, hgn = 50, lvl = 0;


int aksi(char act){
    if(act=='A'){
        hP = hP + 15;
        nW = nW - 15000;
        fP = fP + 10;
        printf("Hilmy makan telor.\n");

    }
    else if(act=='B'){
        hP = hP+5;
        fP = fP+5;
        hgn = hgn - 10;
        printf("Hilmy bermimpi indah.\n");
    }
    else if(act=='C'){
        fP = fP + 35;
        hP = hP - 15;
        sP = sP - 35;
        hgn = hgn - 10;
        printf("Hilmy sekarang berbau bawang.\n");
    }
    else if(act=='D'){
        hP = hP + 5;
        xP = xP + 5;
        fP = fP + 20;
        sP = sP + 15;
        printf("Hilmy beribadah.\n");
    }
    else if(act=='E'){
        hP = hP - 15;
        fP = fP - 50;
        nW = nW + 50000;
        hgn = hgn - 30;
        sP = sP +5;
        printf("Hilmy menjadi budak korporat.\n");
    }
    else if(act=='F'){
        hP = hP - 8;
        fP = fP - 35;
        nW = nW + 20000;
        hgn = hgn - 30;
        sP = sP +7;
        printf("Hilmy menjadi budak danusan.\n");
    }
    else if(act=='G'){
        hP = hP + 10;
        fP = fP + 15;
        hgn = hgn - 18;
        printf("Hilmy bersepeda.\n");
    }
    else if(act=='H'){
        xP = xP + 30;
        hP = hP - 30;
        sP = sP - 40;
        fP = fP - 30;
        hgn = hgn - 40;
        printf("Hilmy melatih teknik pernapasan buatannya sendiri 'sanso no kokyuu'.\n");
    }
    else if(act=='I'){
        fP = fP + 15;
        sP = sP + 25;
        hgn = hgn - 15;
        nW = nW - 20000;
        printf("Hilmy bertemu dgn temannya Terminator dan CZ2I28 Delta.\n");
    }
    else if(act=='J'){
        fP = fP + 25;
        hP = hP + 8;
        nW = nW - 20000;
        hgn = hgn - 15;
        printf("Hilmy menghabiskan Rp 20000 hanya demi menambah 25 poin happiness.\n");
    }
    else if(act=='K'){
        fP = fP + 30;
        nW = nW - 5000;
        hgn = hgn - 5;
        sP = sP + 10;
        printf("Hilmy menghabiskan kuota seharga 5000 utk ngechat Do'i.\n");
    }
    else if(act=='L'){
        hP = 0;
        printf("Hilmy masuk neraka.\n");
    }
    else if(act=='M'){
        hgn = hgn + 25;
        nW = nW -5000;
        printf("Hilmy cuci badan.\n");
    }
    else {
        hgn = hgn + 15;
        nW = nW - 4000;
        printf("Hilmy membuang ampas.\n");
        }
    return 0;
}
void display_stat() {
    printf("\n\nSTATUS TERKINI\n");
    printf("Nama \t Level \t hP \t xP \t $Duit \t:)P \t social   Hygine\n");
    printf("Hilmy \t %d \t %d \t %d \t %d \t%d \t %d \t  %d\n\n", lvl, hP, xP, nW, fP,sP, hgn);
    printf("DAFTAR AKTIVITAS \n \n");
    printf("A Makan         \t E Kerja Part-time    \t I Hang out wth frens\t M. Mandi\n");
    printf("B Tidur         \t F Jualan Ekado       \t J Jalan-jalan       \t N. Buang Air\n");
    printf("C Maraton Anime \t G Main Sepeda        \t K Ngabari Do'i\n");
    printf("D Ibadah        \t H Latihan Pernapasan \t L Commit to Suicide \n");
}

int main()
{   char tindakan;
    printf("SELAMAT DATANG DI SIN City \n +_+_+_+_+_+_+_+_+_+_+_+\n\n");
    printf("Hari ini anda akan berberan sebagai: \t  Hilmy\n");
    printf("Seorang jomblo sejati yang berjuang untuk 'survive' \nTerlahir di lingkungan pembunuh\nDan sedang mencari jati diri\n+=-=-=-=-=-=-=-=-=-=\n\n");
    while(hP > 0){
        display_stat();
        printf("Masukan tindakan :");
        scanf(" %c", &tindakan);
        aksi(tindakan);
    }
    return 0;
}
