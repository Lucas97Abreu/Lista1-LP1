#include <iostream>
#include <stdlib.h>

using namespace std;
int main(){
    float Face, face1=0, face2=0, face3=0, face4=0, face5=0, face6=0, i=0;

    cout << "Jogue o dado!" << endl;
    cout << "Digite qual a face o dado caiu: (de 1 a 6)" << endl;

    while(1){
        cin >> Face;

        if(Face==1){
            face1++;
            i++;
        }
        if(Face==2){
            face2++;
            i++;
        }
        if(Face==3){
            face3++;
            i++;
        }
        if(Face==4){
            face4++;
            i++;
        }
        if(Face==5){
            face5++;
            i++;
        }
        if(Face==6){
            face6++;
            i++;
        }
        if(Face==0){
            break;
        }
    }

    cout << "A face 1 apareceu em " << (face1/i)*100 << "% das vezes!" << endl;
    cout << "A face 2 apareceu em " << (face2/i)*100 << "% das vezes!" << endl;
    cout << "A face 3 apareceu em " << (face3/i)*100 << "% das vezes!" << endl;
    cout << "A face 4 apareceu em " << (face4/i)*100 << "% das vezes!" << endl;
    cout << "A face 5 apareceu em " << (face5/i)*100 << "% das vezes!" << endl;
    cout << "A face 6 apareceu em " << (face6/i)*100 << "% das vezes!" << endl;

}
