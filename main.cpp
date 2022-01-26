#include <iostream>
#include <ctime>
#include "./color-console/include/color.hpp"

using namespace std;

void letters() {
    int x;

    srand(time(NULL));

    cout << "maxlength: ";
    cin >> x;

    cout << "your maxlength: " << x << endl;

    cout << "" << endl;
    cout << "" << endl;

    char letters_array[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


    cout << "PASSWORD: ";


    for(int i = 0; i < x; i++){
        int letters_rand = rand() % 26;
        cout << hue::red << letters_array[letters_rand] << hue::reset;
    }

    cout << "" << endl;
    cout << "" << endl;

}

int main(){
    int exit;

    letters();

    cout << "to quit press CTRL + C: ";
    cin >> exit;
}
