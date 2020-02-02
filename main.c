#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Hilmy's Life dengan Paradigma Prosedural
//Mohon maaf belum dapat mengembangkan versi OOP kak, Karena masih dalam proses belajar
//Versi yang menerapkan ADT, Pointer, dan beberapa hal lain akan segera dikembangkan
//Status
int hP = 20, xP = 0, nW = 0,fP = 5, sP= 10;
char tindakan;

int aksi(char act){
    if(act=='A'){xP= xP+1;}
    else if(act=='B'){}
    else if(act=='C'){}
    else if(act=='D'){}
    else if(act=='E'){}
    else if(act=='F'){}
    else if(act=='G'){}
    else if(act=='H'){}
    else if(act=='I'){}
    else if(act=='J'){}
    else if(act=='K'){}
    else if(act=='L'){}
    else{}

    printf("STATUS TERKINI\n");
    printf("Nama \t hP \t xP \t $NetW \t:)P \t socialP\n");
    printf("Hilmy \t %d \t %d \t %d \t%d \t %d \n\n", hP, xP, nW, fP,sP);
    printf("DAFTAR AKTIVITAS \n \n");
    printf("A Makan         \t E Belajar Kalkulus   \t I Jungling Pokemon\n");
    printf("B Tidur         \t F Jualan Ekado       \t J Ngambis Perpus\n");
    printf("C Maraton Anime \t G Main Sepeda        \t K Ngabari Do'i\n");
    printf("D Ibadah        \t H Latihan Pernapasan \t L Commit to Suicide\n");
    return 0;
}

int main()
{
    printf("SELAMAT DATANG DI SIN City \n +_+_+_+_+_+_+_+_+_+_+_+\n\n");
    printf("Hari ini anda akan berberan sebagai: \t  Hilmy\n");
    printf("Seorang jomblo sejati yang berjuang untuk 'survive' \nTerlahir di lingkungan pembunuh\nDan sedang mencari jati diri\n+=-=-=-=-=-=-=-=-=-=\n\n");
    aksi('Z');
    while(hP >= 0 && hP <=100){
        printf("Masukan tindakan :");
        scanf("%c", tindakan);
        aksi(tindakan);
    }
    return 0;
}
