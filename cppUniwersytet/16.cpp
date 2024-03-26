#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i = 1;
    //int n = 0;
    float x = 0;
    float suma = 0;
    vector<float> tab;
    /* 
    cout << "podaj ilosc liczb: ";
    cin >> n;
    cout << "\n";
    for(int i = 0; i < n; i++){
        cout << "podaj " << i << " wartosc: ";
        cin >> x;
        tab.push_back(x);
        cout << "\n";
    }
    */
   
    while(true){
        cout << "podaj " << i << " wartosc: ";
        cin >> x;
        if(x == 0)
            break;
        tab.push_back(x);
        cout << "\n";
        i++;
    }

    for(int i = 0; i < tab.size(); i++){
        suma += tab.at(i);
    }
    cout << "suma wynosi: " << suma << "\n";
    cout << "srednia wynosi: " << suma/tab.size() << "\n";



    return 0;
}