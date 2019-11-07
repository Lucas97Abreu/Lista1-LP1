#include <iostream>

using namespace std;
int main(){
    int x, maior=0;

	cout << "Digite os numeros: " << endl;
	do
	{
	 cin >> x;
        if(x > maior){
            maior = x;
		}
    }while(x!=0);

    cout << "numero maior eh: " << maior << endl;

}
