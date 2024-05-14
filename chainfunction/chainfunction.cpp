#include <iostream>
using namespace std;

class buku {
public:
    string judul;

    buku setJudul(string judul) {
        this->judul = judul;
        return *this;  // chain function
    }

    string getJudul() {
        return this->judul;
    }

}bukunya;

int main() {
    //bukunya.setjudul("matematika");
    //cout << bukunya.get judul();
    cout << bukunya.setJudul("Matematika").getJudul();  // chain function calls
    return 0;
}
