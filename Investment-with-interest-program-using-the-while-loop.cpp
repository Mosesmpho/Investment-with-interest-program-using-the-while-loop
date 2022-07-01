#include <iostream>
using namespace std;

int main() {
    int years = 1;
    double Balance = 1000;




    while (years < 19) {

        Balance += Balance * 0.045;
        Balance += 500;

        years++;

    }
    cout << Balance;

    return 0;

}