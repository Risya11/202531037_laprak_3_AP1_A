#include <iostream>

using namespace std;

int main() {
    int umur;
    cout << "=== Survival Camp ===" << endl;
    cout << "Masukan umur:";
    cin >> umur;

    
    if (umur <= 15) { 
        
        if (umur < 10) {
            cout << "Starter Kit" << endl;
        } else {        
            cout << "Basic Gear" << endl;
        }

    } else {
             
        if (umur <= 20) {          
            cout << "Pro Gear" << endl;
        } else {           
            cout << "Expert Gear" << endl;
        }
    }

}





