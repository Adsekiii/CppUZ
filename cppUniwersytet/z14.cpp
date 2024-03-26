// zad14
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a,b,c;
    cout<<"Podaj 3 boki trojkata(liczby zmiennoprzecinkowe a, b, c): ";
    cin>>a>>b>>c;
    if(a+b>c||b+c>a||a+c>b) {
        if(a==b&&a==c)
            cout<<"\nJest to trojkat rownoboczny";
        if((pow(a,2)+pow(b,2)==pow(c,2))||(pow(c,2)+pow(a,2)==pow(b,2))||(pow(c,2)+pow(b,2)==pow(a,2)))
            cout<<"\nJest to trojkat prostokatny";
        if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b))
            cout<<"\nJest to trojkat rownoramienny";
        else
            cout<<"\nJest to trojkat roznoboczny";
    }
    else
        cout<<"\nBlad! Taki trojkat nie istnieje!";
}
 
