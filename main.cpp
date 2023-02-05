#include <iostream>
using namespace  std;

int MiejscowoscZamieszkania=1 , minut=0;
int main() {
    do{
        minut +=6;
        MiejscowoscZamieszkania *=5;

        cout<<"minelo minut: "<<minut<<endl;
        cout<<"liczba zamieszkanych osob: "<<MiejscowoscZamieszkania<<endl;



    } while(MiejscowoscZamieszkania <=1000);


    return 0;
}
