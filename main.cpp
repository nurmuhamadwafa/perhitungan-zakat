#include <bits/stdc++.h>

using namespace std;

short int pilihan;

int menu()
{
    cout << "+===========================+" << endl
         << "| PROGRAM PERHITUNGAN ZAKAT |" << endl
         << "+---------------------------+" << endl
         << "|       MENU PILIHAN :      |" << endl
         << "+===========================+" << endl
         << "|  1. Zakat Emas            |" << endl
         << "|  2. Zakat Perak           |" << endl
         << "|  3. Zakat Perniagaan      |" << endl
         << "|  4. Zakat Gabah           |" << endl
         << "|  0. Info                  |" << endl
         << "+---------------------------+" << endl
         << "\nMasukkan Pilihan Anda : ";
    // validasi input
    while (!(cin>>pilihan))
    {
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Pilihan! : ";
        // membersihkan perintah sebelumnya
        cin.clear();
        // melompat ke baris baru dan mengabaikan karakter invalid
        cin.ignore(123, '\n');
    }
}
int emas()
{
    float jumlah_emas;
    int harga_emas, pilih, total_temuan[1], total_bukan[1];

    cout << "Masukkan Jumlah Harta Emas ( Gram ) : ";
    while (!(cin>>jumlah_emas))
    {
        system("cls");
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Jumlah Emas! ( Gram ) : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    if (jumlah_emas >= 77.5)
    {
        cout << endl
             << "+================================+" << endl
             << "|  ANDA TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+================================+" << endl
             << endl
             << "Masukkan Harga Emas Saat Ini : Rp. ";
        while (!(cin>>harga_emas))
        {
            system("cls");
            cout << "\n400_ERR_INVALID_INPUT!" << endl
                 << "\nMasukkan Ulang Harga Emas! : ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        system("cls");
        cout << endl
             << " Silahkan Pilih Opsi : " << endl
             << "=======================" << endl
             << " 1. Emas Temuan" << endl
             << " 2. Bukan Temuan" << endl
             << "\nPilihan : ";
        while (!(cin>>pilih))
        {
            cout << "\n400_ERR_INVALID_INPUT!" << endl
                 << "\nMasukkan Ulang Pilihan! : ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        if (pilih == 1)
        {

            total_temuan[0] = (jumlah_emas * harga_emas) / 5;

            cout << "+====================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah Rp. " << total_temuan[0]  << endl;
        }
        else if (pilih == 2)
        {
            total_bukan[0] = (jumlah_emas * harga_emas) / 40;

            cout << "+===================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah Rp. " << total_bukan[0] << endl;
        }
        else
        {
            cout << "\nPilihan Tidak Tersedia!" << endl;
        }
    }
    else
    {
        cout << endl
             << "+======================================+" << endl
             << "|  ANDA BELUM TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+======================================+" << endl;
    }
    return 0;
}
int perak()
{
    float jumlah_perak;
    int harga_perak, pilih, total_temuan[1], total_bukan[1];

    cout << "Masukkan Jumlah Harta Perak ( Gram ) : ";
    while (!(cin>>jumlah_perak))
    {
        system("cls");
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Jumlah Perak! ( Gram ) : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    if (jumlah_perak >= 543)
    {
        cout << endl
             << "+================================+" << endl
             << "|  ANDA TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+================================+" << endl
             << endl
             << "Masukkan Harga Perak Saat Ini : Rp. ";
        while (!(cin>>harga_perak))
        {
            system("cls");
            cout << "\n400_ERR_INVALID_INPUT!" << endl
                 << "\nMasukkan Ulang Harga Perak! : ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        system("cls");
        cout << endl
             << " Silahkan Pilih Opsi : " << endl
             << "=======================" << endl
             << " 1. Perak Temuan" << endl
             << " 2. Bukan Temuan" << endl
             << "\nPilihan : ";
        while (!(cin>>pilih))
        {
            cout << "\n400_ERR_INVALID_INPUT!" << endl
                 << "\nMasukkan Ulang Pilihan! : ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        if (pilih == 1)
        {
            total_temuan[0] = (jumlah_perak * harga_perak) / 5;

            cout << endl
                 << "+====================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah Rp. " << total_temuan[0] << endl;
        }
        else if (pilih == 2)
        {
            total_bukan[0] = (jumlah_perak * harga_perak) / 40;

            cout << "+===================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah Rp. " << total_bukan[0] << endl;
        }
        else
        {
            cout << "\nPilihan Tidak Tersedia!" << endl;
        }
    }
    else
    {
        cout << endl
             << "+======================================+" << endl
             << "|  ANDA BELUM TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+======================================+" << endl;
    }
    return 0;
}
int perniagaan()
{
    int jumlah_harta, harga_emas;
    int zakat_perniagaan[1];

    cout << "Masukkan Jumlah Harta Perniagaan : Rp.  ";
    while (!(cin>>jumlah_harta))
    {
        system("cls");
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Jumlah Harta Perniagaan! : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << "\nMasukkan Harga Emas Saat Ini : Rp. ";
    while (!(cin>>harga_emas))
    {
        system("cls");
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Harga Emas! : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    if ((jumlah_harta / harga_emas) >= 77.5)
    {
        cout << endl
             << "+================================+" << endl
             << "|  ANDA TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+================================+" << endl;

        zakat_perniagaan[0] = jumlah_harta / 40;

        cout << endl
             << "+====================================================" << endl
             << "| Zakat yang harus di keluarkan adalah Rp. " << zakat_perniagaan[0] << endl;
    }
    else
    {
        cout << endl
             << "+======================================+" << endl
             << "|  ANDA BELUM TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+======================================+" << endl;
    }
    return 0;
}
int gabah()
{
    float hasil_panen, jenis_usaha;
    float dengan_biaya[1], tanpa_biaya[1];

    cout << "Masukkan Hasil Panen ( Kg ) : ";
    while (!(cin>>hasil_panen))
    {
        system("cls");
        cout << "\n400_ERR_INVALID_INPUT!" << endl
             << "\nMasukkan Ulang Hasil Panen! : ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    if (hasil_panen >= 1323.132)
    {
        system("cls");
        cout << endl
             << "+================================+" << endl
             << "|  ANDA TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+================================+" << endl
             << endl
             << "  Usaha Yang Dilakukan (pilih opsi) : " << endl
             << " =====================================" << endl
             << " 1. Dengan Biaya Pengairan" << endl
             << " 2. Tanpa Biaya Pengairan" << endl
             << "\nPilihan : ";
        while (!(cin>>jenis_usaha))
        {
            cout << "\n400_ERR_INVALID_INPUT!" << endl
                 << "\nMasukkan Ulang Pilihan! : ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        if (jenis_usaha == 1)
        {
            dengan_biaya[0] = hasil_panen / 20;

            cout << endl
                 << "+===================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah : " << dengan_biaya[0] << " Kg" << endl;
        }
        else if (jenis_usaha == 2)
        {
            tanpa_biaya[0] = hasil_panen / 10;

            cout << endl
                 << "+==================================================" << endl
                 << "| Zakat yang harus di keluarkan adalah : " << tanpa_biaya[0] << " Kg" << endl;
        }
        else
        {
            cout << "\nPilihan Tidak Tersedia!" << endl;
        }
    }
    else
    {
        cout << endl
             << "+======================================+" << endl
             << "|  ANDA BELUM TERMASUK WAJIB ZAKAT..!  |" << endl
             << "+======================================+" << endl;
    }
    return 0;
}
void info()
{
    system("cls");
    cout << "# PENGERTIAN ZAKAT :" << endl
         << "\tZakat merupakan harta yang wajib dikeluarkan oleh orang muslim untuk" << endl
         << "diberikan kepada orang yang berhak menerimanya. Zakat merupakan salah" << endl
         << "satu dari rukun islam yang memiliki kedudukan tinggi. Allah berfirman" << endl
         << "dalam surah al Baqarah ayat 43: \"Dirikanlah sholat dan bayarkanlah zakat\"." << endl
         << "\tTerdapat berbagai macam zakat, diantaranya zakat fitrah dan zakat mal. " << endl
         << "Program ini di buat untuk memudahkan orang muslim dalam menghitung zakat" << endl
         << "yang akan di keluarkan (khususnya zakat mal). Zakat BUKAN TEMUAN dikeluarkan" << endl
         << "setelah mencapai satu nishob dan sudah dimiliki paling tidak SATU tahun." << endl << endl << endl
         << "# 8 GOLONGAN YANG BERHAK MENERIMA ZAKAT :" << endl
         << "\tZakat memiliki aturan mengikat dari segi ilmu fiqihnya, salah satu diantaranya " << endl
         << "kepada siapa zakat diberikan. Dalam QS. Attaubah ayat 60, allah memberikan" << endl
         << "ketentuan, ada 8 golongan yang berhak menerima zakat, yaitu sebagai berikut:" << endl << endl
         << "  1. Faqir" << endl
         << "\tMereka yang hampir tidak memiliki apa-apa sehingga tidak mampu memenuhi kebutuhan hidup." << endl
         << "  2. Miskin" << endl
         << "\tMereka yang memiliki harta namun tidak cukup utuk memenuhi kebutuhan dasar kehidupan." << endl
         << "  3. Amil" << endl
         << "\tMereka yang mengumpulkan dan mendisribusikan zakat." << endl
         << "  4. Mualaf" << endl
         << "\tMereka yang baru masuk islam dan membtuhkan bantuan untuk menguatkan tauhid dan syariah." << endl
         << "  5. Riqab" << endl
         << "\tBudak atau hamba sahaya yang ingin memerdekakan dirinya." << endl
         << "  6. Gharim" << endl
         << "\tMereka yang berhutang untuk kebtuhan hidup." << endl
         << "  7. Fisabilillah" << endl
         << "\tMereka yang berjuang di jalan allah dalam bentuk dakwah, jihad, dan sebagainya." << endl
         << "  8. Ibnu Sabil" << endl
         << "\tMereka yang kehabisan biaya di perjalanan dalam ketaatan kepada allah." << endl;
}
int pilih()
{
    switch(pilihan)
    {
    case 1:
        emas();
        break;

    case 2:
        perak();
        break;

    case 3:
        perniagaan();
        break;

    case 4:
        gabah();
        break;

    case 0:
        info();
        break;

    default:
        system("cls");
        return menu();
    }
}
int main()
{
    int panjang_string;
    char ulang;

    do
    {
        menu();
        cout << endl;
        pilih();
        cout << endl
             << "Mau Mengulang Program? (y/n) => ";
        cin>>ulang;
        system("cls");
    }
    while (ulang == 'y' || ulang == 'Y');
    if (ulang == 'n' || ulang == 'N')
    {
        system("color 9");
        // deklarasi string ending
        char ending[]=
        {
            "\n+--------------------------+\n"
            "\n|   Terima Kasiih... ^_^   |\n"
            "\n+--------------------------+\n"
        };

        // menghitung panjang string ending
        panjang_string = strlen(ending);
        // perulangan sebanyak panjang string
        for (int a = 0; a < panjang_string; a++)
        {
            /* perulangan untuk menimbulkan jeda
            waktu antar penampilan karakter */
            for (int b = 0; b < 99999; b++)
            {
                for (int c = 0; c < 300; c++) {}
            }
            // mencetak string ending per karakter
            cout << ending[a];
        }
        cout << endl << endl;
    }
    else
    {
        system("color C");
        cout << "\n400_ERR_INVALID_INPUT!" << endl;
    }
}
