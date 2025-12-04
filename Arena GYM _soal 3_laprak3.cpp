#include <iostream>
using namespace std;

int main() {
    int pilihan, durasi;
    int tarif = 0;
    int total_biaya = 0;

    cout << "=== Arena Gym ===" << endl;
    cout << "1. Dumbbell     (Rp 5.000 / 15menit)" << endl;
    cout << "2. Treadmill    (Rp 10.000 / 15menit)" << endl;
    cout << "3. Barbell      (Rp 8.000 /15menit)" << endl;
    cout << "4. Static Bike  (Rp 7.000/ 15menit)" << endl;
    
    cout << "Pilih alat (1-4): ";
    cin >> pilihan;
 
    switch (pilihan) {
        case 1:
            tarif = 5000;
            break;
        case 2:
            tarif = 10000;
            break;
        case 3:
            tarif = 8000;
            break;
        case 4:
            tarif = 7000;
            break;
        default:
            cout << "Alat tidak valid!" << endl;
            
    }

    cout << "Durasi latihan (menit): ";
    cin >> durasi;
    
    int jumlah_sesi = durasi / 15; 
    
    for (int i = 1; i <= jumlah_sesi; i++) {
        total_biaya += tarif; 
       
    }
  
    cout << "-----------------------------------" << endl;
    cout << "Total durasi : " << durasi << " menit" << endl;
    cout << "Total sesi  : " << jumlah_sesi <<"   x 15 menit"<< endl;
    cout << "Total Biaya Sewa: Rp " << total_biaya << endl;

}














