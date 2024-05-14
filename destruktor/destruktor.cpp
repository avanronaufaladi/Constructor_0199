#include <iostream>

using namespace std;

class Angka {
private:
    int* arr;
    int panjang;

public:

    Angka(int);  // Constructor
    ~Angka();     // Destructor

    void cetakData();
    void isiData();
};

// Definisi member function
Angka::Angka(int i) {  // Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}

Angka::~Angka() {  // Destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void Angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void Angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main() {
    Angka belajarcpp(3);  // Constructor Dipanggil
    Angka* ptrBelajarcpp = new Angka(5);  // Constructor Dipanggil
    delete ptrBelajarcpp;  // Destructor Dipanggil

    return 0;
}//destructor dipanggil
