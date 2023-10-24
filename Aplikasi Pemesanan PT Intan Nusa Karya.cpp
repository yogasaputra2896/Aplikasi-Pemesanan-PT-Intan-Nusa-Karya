// PROJECT CPP APLIKASI PEMESANAN PT INTAN NUSA KARYA
// NAMA : YOGA SAPUTRA, BUDI AGUNG, UJANG SAIFULL
// UNIVERSITAS DIAN NUSANTARA


#include <iostream>
#include <string>
using namespace std;
// INISIALISASI VARIABEL GLOBAL
string namaPemesan, noHP, email, alamat;
int jmlBarang, totalHarga, totaljmlqty;
// INISIALISASI VARIABEL GLOBAL ARRAY
string arrayBarang[50], arraySpek[50];
int arrayPesanan[50];
// DEKLARASI FUNGSI
void dataPemesan();
void menuProduk();
// FUNGSI MAIN
int main()
{
    // TAMPILAN AWAL APLIKASI
    cout << "=================================================================== \n";
    cout << "          APLIKASI PEMESANAN BARANG PT INTAN NUSA KARYA \n";
    cout << "=================================================================== \n";
    cout << endl;
    cout << "PT INTAN NUSA KARYA perusahaan yang bergerak dibidang perdagangan \n";
    cout << "Peralatan otomotif, industri dan laboratorium. \n";
    cout << endl;
    cout << "SELAMAT DATANG DI APLIKASI PEMESANAN SILAHKAN INPUT DATA DIRI ANDA \n";
    cout << endl;
    // PENGUNAAN FUNGSI DATA PEMESANAN
    dataPemesan();
    // PEGUNAAN FUNGSI MENU PRODUK
    menuProduk();





 //DETAIL PEMESANAN
    cout << endl;
    cout << "==============================================================\n";
    cout << "                  DETAIL  PEMESANAN \n";
    cout << "==============================================================\n";
    cout << endl;
    cout << "DATA PEMESAN \n";
    cout << "------------ \n";
    cout << "Nama        : " << namaPemesan << endl;
    cout << "No HP       : " << noHP << endl;
    cout << "Email       : " << email << endl;
    cout << "Alamat      : " << alamat << endl;
    cout << endl; 
    cout << "DATA BARANG PESANAN \n";
    cout << "------------------- \n";

    // LOOPING JUMLAH DATA BARANG
    for (int i = 1; i <= jmlBarang; i++) {
        cout << i << ". " << arrayBarang[i] << ", " << arraySpek[i] << ", Qty:" << arrayPesanan[i];
        cout << endl;
    }
    // TOTAL HARGA
    cout << "------------------ \n";
    cout << "TOTAL BARANG :" << totaljmlqty << endl;
    cout << "TOTAL HARGA : RP " << totalHarga << endl;
    cout << "------------------ \n";
}








//FUNSI DATA PEMESAN
void dataPemesan() {
    // INPUT DATA PEMESAN
    cout << "-------------- \n";
    cout << " DATA PEMESAN \n";
    cout << "-------------- \n";
    cout << "Nama : ";
    getline(cin, namaPemesan);
    cout << "NoHP : ";
    getline(cin, noHP);
    cout << "Email : ";
    getline(cin, email);

    cout << "Alamat : ";
    getline(cin, alamat);
}


//FUNGSI MENU PRODUK
void menuProduk() {
    // INISIALIASI VARIABLE LOKAL
    char lanjut;
    int pilihan, pilihspek, jmlpesan;
    // LOOPING PESANAN MENGGUNAKAN DO WHILE
    do
    {
        // MENU PRODUK
        cout << "=================================================================== \n";
        cout << "          APLIKASI PEMESANAN BARANG PT INTAN NUSA KARYA \n";
        cout << "=================================================================== \n";
        cout << "SELAMAT DATANG " << namaPemesan << endl;
        cout << endl;
        cout << "SILAHKAN PILIH PRODUK-PRODUK KAMI";
        cout << endl;
        cout << "-------------- \n";
        cout << " PRODUK        \n";
        cout << "-------------- \n";
        cout << "1.Powder Coating \n";
        cout << "2.Mesin Las      \n";
        cout << "3.Mesin Gerinda \n";
        cout << "4.Jumper AKI     \n";
        cout << "5.Mesin Spraygun \n";
        cout << endl;
        // LABEL PENGULANGAN JIKA ERROR
        RELOAD:
        // INPUT NO BARANG
        cout << "MASUKAN NO BARANG : ";
        cin >> pilihan;
        // IF
        if (pilihan == 1) {
            // MENAMBAHKAN JUMLAH BARANG YANG DI PESAN
            jmlBarang += 1;
            // MENYIMPAN NAMA BARANG YANG DI PESAN
            arrayBarang[jmlBarang] = "Powder Coating RP 150000";
            cout << endl;
            cout << "---------------------- \n";
            cout << " PRODUK Powder Coating   \n";
            cout << "---------------------- \n";
            cout << "HARGA : RP  150,000 \n";
            cout << "MEMILIKI 3 JENIS WARNA DENGAN HARGA YANG SAMA \n";
            cout << "PILIH WARNA POWDER \n";
            cout << "1.Merah \n";
            cout << "2.Hijau \n";
            cout << "3.Biru \n";
            // LABEL PENGULANGAN JIKA ERROR
            RELOADWARNA:
            //INPUT PILIHAN WARNA UNTUK POWDER
            cout << "MASUKAN NO WARNA : ";
            cin >> pilihspek;
            //NESTED IF 
            if (pilihspek == 1) {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Warna:Merah";
                //MENYIMPAH BANYAK PESANAN
                arrayPesanan[jmlBarang] = jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                totalHarga += 150000 * jmlpesan;
            }
            else if (pilihspek == 2)
            {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Warna:Hijau";
                //MENYIMPAH BANYAK PESANAN
                totalHarga += 150000 * jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                arrayPesanan[jmlBarang] = jmlpesan;
            }
            else if (pilihspek == 3)
            {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Warna:Biru";
                //MENYIMPAH BANYAK PESANAN
                totalHarga += 150000 * jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                arrayPesanan[jmlBarang] = jmlpesan;
            }
            else
            {
                cout << "------------------------------ \n";
                cout << "MASUKAN NO WARNA YANG BENAR  :  \n";
                cout << "------------------------------ \n";
                // MENUJU KE RELOAD WARNA JIKA PILIHAN SALAH
                goto RELOADWARNA;
            }
        }
        else if (pilihan == 2) {
                
               





 // MENAMBAHKAN JUMLAH BARANG YANG DI PESAN
                jmlBarang += 1;
                // MENYIMPAN NAMA BARANG YANG DI PESAN
                arrayBarang[jmlBarang] = "Mesin Las      RP 1000000";
                cout << endl;
                cout << "---------------------- \n";
                cout << " PRODUK Mesin Las   \n";
                cout << "---------------------- \n";
                cout << "HARGA : RP  1,000,000 \n";
                cout << "MEMILIKI 3 TIPE DENGAN HARGA YANG SAMA \n";
                cout << "PILIH TIPE LAS \n";
                cout << "1.AC \n";
                cout << "2.DC \n";
                cout << "3.AC-DC \n";
                // LABEL PENGULANGAN JIKA ERROR
            RELOADTIPELAS:
                //INPUT PILIHAN WARNA UNTUK POWDER
                cout << "MASUKAN NO TIPE : ";
                cin >> pilihspek;
                //NESTED IF 
                if (pilihspek == 1) {
                    //INPUT JUMLAH PESANAN
                    cout << "MASUKAN JUMLAH PESANAN : ";
                    cin >> jmlpesan;
                    totaljmlqty += jmlpesan;
                    //MENYIMPAN SPEK BARANG
                    arraySpek[jmlBarang] = "Tipe:AC";
                    //MENYIMPAH BANYAK PESANAN
                    arrayPesanan[jmlBarang] = jmlpesan;
                    //MENAMBAHKAN TOTAL HARGA
                    totalHarga += 1000000 * jmlpesan;
                }
                else if (pilihspek == 2)
                {
                    //INPUT JUMLAH PESANAN
                    cout << "MASUKAN JUMLAH PESANAN : ";
                    cin >> jmlpesan;
                    totaljmlqty += jmlpesan;
                    //MENYIMPAN SPEK BARANG
                    arraySpek[jmlBarang] = "Tipe:DC";
                    //MENYIMPAH BANYAK PESANAN
                    totalHarga += 1000000 * jmlpesan;
                    //MENAMBAHKAN TOTAL HARGA
                    arrayPesanan[jmlBarang] = jmlpesan;
                }
                else if (pilihspek == 3)
                {
                    //INPUT JUMLAH PESANAN
                    cout << "MASUKAN JUMLAH PESANAN : ";
                    cin >> jmlpesan;
                    totaljmlqty += jmlpesan;
                    //MENYIMPAN SPEK BARANG
                    arraySpek[jmlBarang] = "Tipe:AC-DC";
                    //MENYIMPAH BANYAK PESANAN
                    totalHarga += 1000000 * jmlpesan;
                    //MENAMBAHKAN TOTAL HARGA
                    arrayPesanan[jmlBarang] = jmlpesan;
                }
                else
                {
                    cout << "MASUKAN NO TIPE YANG BENAR  : \n";
                    // MENUJU KE RELOAD WARNA JIKA PILIHAN SALAH
                    goto RELOADTIPELAS;
                }
            
        }
        else if (pilihan == 3) {
            // MENAMBAHKAN JUMLAH BARANG YANG DI PESAN
            jmlBarang += 1;
            cout << endl;
            cout << "---------------------- \n";
            cout << " PRODUK Mesin Gerinda \n";
            cout << "---------------------- \n";
            cout << "HARGA BERFARIASI: RP 200,000 - RP  300,000 \n";
            cout << "MEMILIKI 3 TIPE \n";
            cout << "PILIH TIPE GERINDA \n";
            cout << "1.LURUS  RP 200,000 \n";
            cout << "2.TANGAN RP 250,000 \n";
            cout << "3.DUDUK  RP 300,000 \n";

          



          // LABEL PENGULANGAN JIKA ERROR
           RELOADTIPEGER:
            //INPUT PILIHAN WARNA UNTUK POWDER
            cout << "MASUKAN NO TIPE : ";
            cin >> pilihspek;
            //NESTED IF 
            if (pilihspek == 1) {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                // MENYIMPAN NAMA BARANG YANG DI PESAN
                arrayBarang[jmlBarang] = "Mesin Gerinda RP 200000";
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Tipe:Lurus";
                //MENYIMPAH BANYAK PESANAN
                arrayPesanan[jmlBarang] = jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                totalHarga += 200000 * jmlpesan;
            }
            else if (pilihspek == 2)
            {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                // MENYIMPAN NAMA BARANG YANG DI PESAN
                arrayBarang[jmlBarang] = "Mesin Gerinda RP 250000";
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Tipe:Tangan";
                //MENYIMPAH BANYAK PESANAN
                arrayPesanan[jmlBarang] = jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                totalHarga += 250000 * jmlpesan;
            }
            else if (pilihspek == 3)
            {
                //INPUT JUMLAH PESANAN
                cout << "MASUKAN JUMLAH PESANAN : ";
                cin >> jmlpesan;
                totaljmlqty += jmlpesan;
                
// MENYIMPAN NAMA BARANG YANG DI PESAN
                arrayBarang[jmlBarang] = "Mesin Gerinda RP 300000";
                //MENYIMPAN SPEK BARANG
                arraySpek[jmlBarang] = "Tipe:Duduk";
                //MENYIMPAH BANYAK PESANAN
                totalHarga += 300000 * jmlpesan;
                //MENAMBAHKAN TOTAL HARGA
                arrayPesanan[jmlBarang] = jmlpesan;
            }
            else
            {
                cout << "------------------------------ \n";
                cout << "MASUKAN NO tipe YANG BENAR  : \n";
                cout << "------------------------------ \n";
                // MENUJU KE RELOAD WARNA JIKA PILIHAN SALAH
                goto RELOADTIPEGER;
            }
        }
        else if (pilihan == 4) {
            // MENAMBAHKAN JUMLAH BARANG YANG DI PESAN
            jmlBarang += 1;
            cout << endl;
            cout << "---------------------- \n";
            cout << " PRODUK JUMPER AKI \n";
            cout << "---------------------- \n";
            cout << "HARGA : RP 500,000 \n";
            cout << endl;
            //INPUT JUMLAH PESANAN
            cout << "MASUKAN JUMLAH PESANAN : ";
            cin >> jmlpesan;
            totaljmlqty += jmlpesan;
            // MENYIMPAN NAMA BARANG YANG DI PESAN
            arrayBarang[jmlBarang] = "Jumper Aki RP 500000";
            //MENYIMPAH BANYAK PESANAN
            totalHarga += 500000 * jmlpesan;
            //MENAMBAHKAN TOTAL HARGA
            arrayPesanan[jmlBarang] = jmlpesan;
        }
        else if (pilihan == 5) {
            


         // MENAMBAHKAN JUMLAH BARANG YANG DI PESAN
            jmlBarang += 1;
            cout << endl;
            cout << "---------------------- \n";
            cout << " PRODUK Mesin Spraygun \n";
            cout << "---------------------- \n";
            cout << "HARGA : RP 1,500,000 \n";
            cout << endl;
            //INPUT JUMLAH PESANAN
            cout << "MASUKAN JUMLAH PESANAN : ";
            cin >> jmlpesan;
            totaljmlqty += jmlpesan;
            // MENYIMPAN NAMA BARANG YANG DI PESAN
            arrayBarang[jmlBarang] = "Mesin Spraygun RP 1500000";
            //MENYIMPAH BANYAK PESANAN
            totalHarga += 1500000 * jmlpesan;
            //MENAMBAHKAN TOTAL HARGA
            arrayPesanan[jmlBarang] = jmlpesan;
        }
        else
        {
            cout << "---------------------------- \n";
            cout << "MASUKAN INPUT YANG BENAR \n";
            cout << "---------------------------- \n";
            goto RELOAD;
        }
        cout << "APAKAH KAMU INGIN BELANJA LAGI ? Y/N => ";
        cin >> lanjut;
    }while (lanjut == 'Y' || lanjut == 'y');
}
