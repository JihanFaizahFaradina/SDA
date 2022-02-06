#include <stdio.h>
#include <string.h>

typedef char string[256];

typedef struct{
string Tanggal;
string Bulan;
string Tahun;
}Lahir;

typedef struct {
string NPM;
string Nama;
string Alamat;
Lahir L;
char Kelas[1];
float IPK;
}Mahasiswa;

 

Mahasiswa InputDataMahasiswa (Mahasiswa M) {

printf(" INPUT DATA MAHASISWA \n");
printf("——————————–\n");
printf(" Nama : "); scanf("%[^\n]", &M.Nama);
printf(" NPM : "); scanf("%s", &M.NPM);
printf(" Tgl Lahir (Contoh: DD MM YYYY) \n");
printf(" : ");scanf(“%s%s%s”, &M.L.Tanggal, &M.L.Bulan, &M.L.Tahun);
printf(" Alamat : "); scanf("%s", &M.Alamat)
printf(" Kelas : "); scanf("%s", &M.Kelas);
printf(" IPK : "); scanf(“%f”, &M.IPK);
printf("\n\n\n");

return M;
}

void TampilkanDataMahasiswa (Mahasiswa M) {

 

printf(" DATA MAHASISWA \n");
printf("——————————–\n");
printf(" Nama : %s\n ", M.Nama);
printf("NPM : %s\n ", M.NPM);
printf("Tgl Lahir : %s – %s – %s \n", M.L.Tanggal, M.L.Bulan, M.L.Tahun);
printf("Alamat : %s\n ", M.Alamat)
printf(" Kelas : %s\n ", M.Kelas);
printf("IPK : %.2f\n ", M.IPK);
printf("\n\n");
}

int main() {
Mahasiswa M;

M=InputDataMahasiswa(M);
TampilkanDataMahasiswa(M);

return 0;
}