#include <iostream>
#include <random>
#include <windows.h>

using namespace std;

#define N 5

double Max(double tab[][N], int size);
double Min(double tab[][N], int size);

int main(){
    double min, max;
    double tab[][N] = {{123.3  ,423.3  ,3432.3   ,2355.4   ,3234.5 },
                        {5252.7 ,234.3  ,2324.3   ,3459.3   ,1330.4},
                        {1441.3 ,1432.3 ,13.3     ,1354.3   ,1345.3},
                        {1356.3 ,157.3  ,1358.3   ,1349.3   ,240.2  },
                        {2451.3 ,2352.3 ,2353.3   ,2324.3   ,2325.1 }
                       };
    int size = sizeof(tab)/N/sizeof(tab[0][0]);
    cout << "\nmin:" << Max(tab,size) << " max:" << Min(tab,size);


    return 0;
}


double Max(double tab[][N], int size){
    double max = tab[0][0];
    for(int i = 0; i < size; i++ ){
        for(int j = 0; j < N; j++){
            if(max < tab[i][j]){
                max = tab[i][j];
            }
        }
    } 
    return max;
}
double Min(double tab[][N], int size){
    double min = tab[0][0];
    for(int i = 0; i < size; i++ ){
        for(int j = 0; j < N; j++){
            if(min > tab[i][j]){
                min = tab[i][j];
            }
        }
    } 
    return min;
}