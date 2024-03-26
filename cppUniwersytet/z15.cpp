#include <iostream>
using namespace std;

int main() {
    int dzien1,miesiac1,rok1,dzien2,miesiac2,rok2;
    cout<<"\nPodaj pierwsza date(dzien, miesiac, rok): ";
    cin>>dzien1>>miesiac1>>rok1;
    cout<<"\nPodaj druga date(dzien, miesiac, rok): ";
    cin>>dzien2>>miesiac2>>rok2;
    if(rok1<rok2||(rok1==rok2&&miesiac1<miesiac2)||(rok1==rok2&&miesiac1==miesiac2&&dzien1<dzien2)) {
        cout<<"\nPierwsza data "<<dzien1<<"."<<miesiac1<<"."<<rok1<<"r. jest wczesniejsza";
    }
    else
        cout<<"\nDruga data "<<dzien2<<"."<<miesiac2<<"."<<rok2<<"r. jest wczesniejsza";
}