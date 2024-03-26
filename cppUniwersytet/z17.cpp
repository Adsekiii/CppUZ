#include <iostream>
#include <cmath>

using std::cout;

float ciag1(const float x);
float ciag2(const float x);

double silnia(int n);

int main(){
    const float PI = 3.14159;
    cout << ciag1(PI/4);
    cout << "\n";
    cout << ciag2(PI/4);

    return 0;
}

float ciag1(const float x){
    unsigned int n = 1;
    unsigned int i = 1;
    double e = .001;
    float suma = 0;
    double abs = pow(x,n)/silnia(n);
    abs >= 0 ? abs = abs : abs = -abs;
    while (e < abs){
        if(i%2==1){
            suma += pow(x,n)/silnia(n);
        }
        else{
            suma -= pow(x,n)/silnia(n);
        }
        //cout << "\nabs: " << abs <<"\nsuma: " << suma << "\npow: " << pow(x,n) << "\nfac: " << exp(lgamma(n+1)) << "\n";
        n+=2;
        i++;
        abs = pow(x,n)/silnia(n);
        abs >= 0 ? abs = abs : abs = -abs;
    }
    //cout << "\nabs: " << abs <<"\nsuma: " << suma << "\npow: " << pow(x,n) << "\nfac: " << exp(lgamma(n+1)) << "\n";

    
    return suma;
}

float ciag2(const float x){
    unsigned int n = 0;
    unsigned int i = 1;
    double e = .001;
    float suma = 0;
    double abs = pow(x,n)/silnia(n);
    abs >= 0 ? abs = abs : abs = -abs;
    while (e < abs){
        if(i%2==1){
            suma += pow(x,n)/silnia(n);
        }
        else{
            suma -= pow(x,n)/silnia(n);
        }
        //cout << "\nabs: " << abs <<"\nsuma: " << suma << "\npow: " << pow(x,n) << "\nfac: " << exp(lgamma(n+1)) << "\n";
        n+=2;
        i++;
        abs = pow(x,n)/silnia(n);
        abs >= 0 ? abs = abs : abs = -abs;
    }
    //cout << "\nabs: " << abs <<"\nsuma: " << suma << "\npow: " << pow(x,n) << "\nfac: " << exp(lgamma(n+1)) << "\n";

    
    return suma;
}

double silnia(int n){
    return n == 1 || n == 0 ? 1 : n* silnia(n-1);
}
