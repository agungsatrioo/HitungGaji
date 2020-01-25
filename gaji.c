#include <stdio.h>
int nik, gajipokok, tunjangan, potongan, total_gaji, chance, no_jb, status;
char currency;

void main() {
    char nama;
    char jabatan;

    do {
        start();
    } while(chance);
}

 void start() {
    system("cls");
    printf("Selamat datang di Program Menghitung Gaji Karyawan.\n");
    printf("1.Manager\n2.Sekretaris\n3.Staf\n\nPilihan Anda: ");
    scanf("%d",&no_jb); fflush(stdin);

    switch(no_jb) {
    case 1:
        tanya_status(10000000, 100000, "Manager");
        break;
    case 2:
        tanya_status(5000000, 50000, "Sekretaris");
        break;
    case 3:
        tanya_status(3000000, 30000, "Staff");
        break;
    default:
        main();
        break;
    }
 }

 void tanya_status(int gaji_pokok, int potongan, char* hasil_s) {
    printf("\n\n1.Kawin\n2.Belum Kawin\n\nPilihan Anda: ");
    scanf("%d",&status); fflush(stdin);

    switch(status) {
    case 1:
        info_pribadi(gaji_pokok, potongan, 200000, "Kawin", hasil_s);
        break;
    case 2:
        info_pribadi(gaji_pokok, potongan, 100000, "Belum Kawin", hasil_s);
        break;
    default:
        tanya_status(gaji_pokok, potongan, hasil_s);
        break;
    }
 }

void info_pribadi (int gaji_pokok, int potongan, int tunjangan, char* status, char* hasil_j) {
    char nama[12];
    printf("\n\nMasukkan nama Anda: ");
    gets(nama); fflush(stdin);
    printf("Masukkan NIK Anda: ");
    scanf("%d", &nik); fflush(stdin);
    int total_gaji = (gaji_pokok+tunjangan)-potongan;
    receipt(total_gaji, nama, nik, status, hasil_j);
}

void receipt(int gaji, char nama[12], int nik, char* status, char* hasil_j) {
    printf("\n\nHASIL HITUNG\n==========\nNama Anda: %s\nNIK Anda: %d\nStatus: %s\nJabatan: %s\nGaji Anda: Rp%d.\n", nama, nik, status, hasil_j, gaji);
   getch();
}
