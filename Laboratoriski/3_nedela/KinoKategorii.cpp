//kategorija na film i vozrast

#include <iostream>
using namespace std;
int main()
{
    int Bilet, cenaNaBilet, vozrast;
    char kategorijaNaFilm;
    cin>>kategorijaNaFilm>>vozrast;
    if(kategorijaNaFilm=='1'){
        cenaNaBilet=8;
    }
    else if(kategorijaNaFilm=='2'){
        if(vozrast<12){
            cenaNaBilet=8;
        }
        else {
            cenaNaBilet = 12;
        }
    }
    else if(kategorijaNaFilm=='3'){
        if(vozrast<12){
            cenaNaBilet=10;
        }
        else {
            cenaNaBilet = 15;
        }
    }
    else if(kategorijaNaFilm=='4'){
        if(vozrast<17){
            cenaNaBilet=15;
        }
        else {
            cenaNaBilet = 18;
        }
    }
    cout<<cenaNaBilet;
    return 0;
}