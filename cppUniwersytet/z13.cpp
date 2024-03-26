#include <iostream>

using namespace std;

int main(){
    double a,c;
    double bi,di;
    double wynik[2] = {0,0};

    a=2;
    bi=4;
    c=5;
    di=1;
    // (2+2i) * (3+3i) = 6 + 6i + 6i + 6i^2= 6 - 6 + 12i = 12i
    wynik[0] = a*c - bi*di*1.0;
    wynik[1] = a*di + c*bi*1.0;

    cout << "wynik : " << wynik[0] << " + " << wynik[1] <<"i\n";

    wynik[0] = a*c - (bi*(-di));
    wynik[1] = a*(-di) + c*bi;

    cout << "wynik: " << wynik[0]/(c*c - (di*(-di))) << " + " << wynik[1]/(c*c - (di*(-di))) << "i";

    return 0;
}