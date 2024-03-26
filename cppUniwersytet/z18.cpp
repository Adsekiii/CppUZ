#include <iostream>

#define M 3
#define N 2

using std::cout;

int main(){
    int wektor[] = {10,20};
    int tab[M][N] = {{1,2},{3,4},{5,6}};

    int k = 0;
    int tabLepszy[M == 1 ? M*2 : 2*M-1][N];
    for(int i = 0; i < (M == 1 ? M*2 : 2*M-1); i++){
        for(int j = 0; j < N; j++){
            if(i%2 == 0){
                tabLepszy[i][j] = tab[k][j];
            }
            else{
                tabLepszy[i][j] = wektor[j];
            }
        }
        if(i%2 == 0){
            k++;
        }
    }

    for(int i = 0; i < (M == 1 ? M*2 : 2*M-1); i++){
        for(int j = 0; j < N; j++){
            cout << tabLepszy[i][j] << " ";
        }
        cout << "\n";
    }


    return EXIT_SUCCESS;
}