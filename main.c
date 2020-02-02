#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hilmy's Life dengan Paradigma Prosedural
//Mohon maaf belum dapat mengembangkan versi OOP kak, Karena masih dalam proses belajar
//Versi yang menerapkan ADT, Pointer, dan beberapa hal lain akan segera dikembangkan
//Status
int hP = 50, xP = 0, nW = 50000,fP = 50, sP= 10, hgn = 50, lvl = 0, jam = 0, miskin = 1;;



int aksi(char act){
    if(act=='A'){
        hP = hP + 15;
        nW = nW - 15000;
        fP = fP + 10;
        jam = jam + 1;
        printf("Hilmy makan telor.\n");

    }
    else if(act=='B'){
        hP = hP+5;
        fP = fP+5;
        hgn = hgn - 10;
        jam = jam + 6;
        printf("Hilmy bermimpi indah.\n");
    }
    else if(act=='C'){
        fP = fP + 35;
        hP = hP - 15;
        sP = sP - 35;
        hgn = hgn - 10;
        jam = jam + 5;
        printf("Hilmy sekarang berbau bawang.\n");
    }
    else if(act=='D'){
        hP = hP + 5;
        xP = xP + 5;
        fP = fP + 20;
        sP = sP + 15;
        jam = jam + 1;
        printf("Hilmy beribadah.\n");
    }
    else if(act=='E'){
        hP = hP - 15;
        fP = fP - 50;
        nW = nW + 50000;
        hgn = hgn - 30;
        sP = sP +5;
        jam = jam + 4;
        printf("Hilmy menjadi budak korporat.\n");
    }
    else if(act=='F'){
        hP = hP - 8;
        fP = fP - 35;
        nW = nW + 20000;
        hgn = hgn - 30;
        sP = sP +7;
        jam = jam + 3;
        printf("Hilmy menjadi budak danusan.\n");
    }
    else if(act=='G'){
        hP = hP + 10;
        fP = fP + 15;
        hgn = hgn - 18;
        jam = jam + 1;
        printf("Hilmy bersepeda.\n");
    }
    else if(act=='H'){
        xP = xP + 30;
        hP = hP - 30;
        sP = sP - 40;
        fP = fP - 30;
        hgn = hgn - 40;
        jam = jam + 6;
        printf("Hilmy melatih teknik pernapasan buatannya sendiri 'sanso no kokyuu'.\n");
    }
    else if(act=='I'){
        fP = fP + 15;
        sP = sP + 25;
        hgn = hgn - 15;
        nW = nW - 20000;
        jam = jam + 3;
        printf("Hilmy bertemu dgn temannya Terminator dan CZ2I28 Delta.\n");
    }
    else if(act=='J'){
        fP = fP + 25;
        hP = hP + 8;
        nW = nW - 20000;
        hgn = hgn - 15;
        jam = jam + 3;
        printf("Hilmy menghabiskan Rp 20000 hanya demi menambah 25 poin happiness.\n");
    }
    else if(act=='K'){
        fP = fP + 30;
        nW = nW - 5000;
        hgn = hgn - 5;
        sP = sP + 10;
        jam = jam + 2;
        printf("Hilmy menghabiskan kuota seharga 5000 utk ngechat Do'i.\n");
    }
    else if(act=='L'){
        hP = 0;
        printf("Hilmy tidak tahan stress/tekanan dari kehidupan. Semua komplain silahkan disalurkan ke divisi mekanik.\n");
    }
    else if(act=='M'){
        hgn = hgn + 25;
        nW = nW -5000;
        jam = jam + 1;
        printf("Hilmy cuci badan.\n");
    }
    else {
        hgn = hgn + 15;
        nW = nW - 4000;
        jam = jam + 1;
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
    printf("D Ibadah        \t H Latihan Pernapasan \t L Commit Suicide \n");
}

int main()
{   char tindakan;
    printf("SELAMAT DATANG DI SIN City \n +_+_+_+_+_+_+_+_+_+_+_+\n\n");
    printf("Hari ini anda akan berperan sebagai: \t  Hilmy\n");
    printf("Seorang jomblo sejati yang berjuang untuk 'survive' \nTerlahir di lingkungan pembunuh\nDan sedang mencari jati diri\n+=-=-=-=-=-=-=-=-=-=\n\n");
    while(hP > 0){
        miskin = 1;
        display_stat();

        while (miskin == 1){
            printf("Masukan tindakan :");
            scanf(" %c", &tindakan);

            if (nW >= 0) {
                miskin = 0;
            }
            else {
                printf("\nUang tidak cukup.\n ");
            }
        }
        aksi(tindakan);
        if (xP >= 100) {
            xP = xP-100;
            lvl = lvl + 1;
            printf("Hilmy telah melatih pernafasan cukup banyak, sehingga menemukan jurus baru: sanso no kokyuu, %d no kata. Semua status akan bertambah setiap ronde.\n", lvl);
        }

        hP = hP + lvl;
        sP = sP + lvl;
        fP = fP + lvl;
        hgn = hgn + lvl;
        nW = nW - 5000;
        hP = hP - 3;

        if (fP <= 0) {
            hP = hP - 35;
            sP = sP - 10;
            hgn = hgn - 35;
            nW = nW - 15000;
            printf("Karena happiness terlalu rendah, Hilmy mulai depresi. Dia kehilangan motivasi untuk melakukan segala hal, seperti bersosialisasi, serta menjalani\n");
            printf("kegiatan secara normal. Dia jg akan kehilangan self control dan akan menghabiskan lebih banyak uang.");
        }
        if (sP <= 0) {
            fP = fP -45;
            nW = nW - 15000;
            printf("Karena social terlalu rendah, Hilmy akan sedih, serta akan menghabiskan uang untuk mengisi kekosongan di hati logamnya.");
        }
        if (hgn <= 0) {
            fP = fP -15;
            hP = hP - 35;
            sP = sP - 25;
            printf("Karena hygiene terlalu rendah, Hilmy akan dijauhi orang - dan sebagai akibat Hilmy akan sedih - serta kesehatannya akan menurun.");
        }
    }
    printf("\n\n Hilmy telah meninggal dunia, setelah menderita selama %d jam di dunia yg kejam ini.\n", jam);
    printf("\n---------------- G A M E   O V E R -------------------");
    return 0;
}
