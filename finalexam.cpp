#include <iostream>
using namespace std;

class MasukUniversitas 
{
private :
 int uangPendaftaran, uangSemesterPertama, uangBangunan, totalBiaya;
public :
   MasukUniversitas() {
    string namaJalurMasuk;
    int nilai;
    int totalBiaya;
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    
   }

   virtual void namaJalurMasuk() {
    cout << "Pilih Jalur Masuk :" << endl;
    return;
   }

   void setuangPendaftaran(int nilai) {
    this->uangPendaftaran = nilai;
    cout << "Masukan uang Pendaftaran : " << endl;
   }

   float getuangPendaftaran() {
    return uangPendaftaran;
   }

   void setuangSemesterPertama(int nilai) {
    this->uangSemesterPertama = nilai;
    cout << "Masukan uang Semester Pertama : " << endl;
   }

   float getuangSemesterPertama() {
    return uangSemesterPertama;
   }

   void uangBangunan (int nilai){
    this->uangBangunan = nilai;
    cout << "Masukan uang Bangunan : " << endl;
    }
     
     float getuangBangunan () {
        return uangBangunan;
    }

    void totalBiaya(){
        totalBiaya = (uangPendaftaran + uangSemesterPertama + uangBangunan );
        cout << "Hitung Total Biaya = " << endl;

    }

    float gettotalBiaya(){
        return totalBiaya;
    }

    void tampilkantotalBiaya (){
        totalBiaya = (uangPendaftaran + uangSemesterPertama + uangBangunan);
    }

};

class SNBT : public MasukUniversitas {
public :
   string namaJalurMasuk;
   int uangPendaftaran;
   int uangSemesterPertama;
   int uangBangunan;
   int totalBiaya;
   
};

class SNBP : public MasukUniversitas {
    string namaJalurMasuk;
    int uangPendaftaran;
    int uangSemesterPertama;
    int totalBiaya;

 
 };

int main () {
    char ch;

  cout << "1. SNBT " << endl;
  cout << "2. SNBP " << endl;
  cout << "3. Keluar " << endl;
  cout << "Pilih : " << endl;
return 0;

}