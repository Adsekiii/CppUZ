#include <iostream>

using std::cout;

int main(){
    char text[] = "Ala ma kota. Kot jej nie kocha. Ala nie lubi kota anymore.";
    int zdania = 0;
    int sowa = 0;
    int slowaTeraz = 0;
    for(int i = 0; i < sizeof(text)/sizeof(text[0]);i++){
        if(text[i] == '.'){
            zdania++;
        }
    }
    int slowa[zdania];

    for(int i = 0; i < sizeof(text)/sizeof(text[0]);i++){
        if(text[i] == '.'){
            slowa[slowaTeraz] = sowa+1;
            if(text[i+1] == ' '){
                sowa = -1;
            }
            else{
                sowa = 0;
            }
            slowaTeraz++;
        }
        if(text[i] == ' '){
            sowa++;
        }
    }
    cout << slowa[0] << " " << slowa[1] << " " << slowa[2] << "\n";
    cout << zdania;  

    return EXIT_SUCCESS;
}