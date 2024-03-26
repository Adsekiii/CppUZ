#include <iostream>

using namespace std;

void showTab(char tab[], int size);
void reverseTab(char tab[], int size);

int main(){
    char tab[] = "abcdefghijklmnop";
    int size = sizeof(tab)/sizeof(tab[0]);
    reverseTab(tab,size);
    showTab(tab,size);
    return 0;
}

void showTab(char tab[], int size){
    for(int i = 0; i < size; i++){
        cout << tab[i] << " ";
    }
}

void reverseTab(char tab[], int size){
    char buf = ' ';
    for(int i = 0; i < size/2; i++){
        buf = tab[i];
        tab[i] = tab[size-1-i];
        tab[size-1-i] = buf;
    }
}
