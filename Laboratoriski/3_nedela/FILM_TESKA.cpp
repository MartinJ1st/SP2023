#include <iostream>
using namespace std;
int main()
{
    string VidNaFilm,VidNaPijalok,DenNaGledanje;
    char GoleminaNaPukanki;
    int BrojNaPakuvanjaPukanki, BrojNaPijaloci, InicijalnaCenaNaBilet = 200, cenaPukanki, cenaPijalok, cenaFilm;
    bool VISAKarticka;
    cin >> VidNaFilm >> GoleminaNaPukanki >> BrojNaPakuvanjaPukanki >> VidNaPijalok >> BrojNaPijaloci >> DenNaGledanje >> VISAKarticka;

    if(VidNaFilm == "comedy")
        cenaFilm=InicijalnaCenaNaBilet+20;
    else if(VidNaFilm == "action")
        cenaFilm=InicijalnaCenaNaBilet+40;
    else if(VidNaFilm == "romance")
        cenaFilm=InicijalnaCenaNaBilet+30;
    else
        cenaFilm=InicijalnaCenaNaBilet;

    if(GoleminaNaPukanki ='S')
        cenaPukanki=BrojNaPakuvanjaPukanki*100;
    else if(GoleminaNaPukanki ='M')
        cenaPukanki=BrojNaPakuvanjaPukanki*150;
    else if(GoleminaNaPukanki ='L')
        cenaPukanki=BrojNaPakuvanjaPukanki*200;

    if(VidNaPijalok == "Water")
        cenaPijalok = BrojNaPijaloci*80;
    else if(VidNaPijalok == "Fanta" || VidNaPijalok == "CocaCola" || VidNaPijalok =="Sprite")
        cenaPijalok = BrojNaPijaloci*100;
    else if(VidNaPijalok == "IceTea")
        cenaPijalok = BrojNaPijaloci*120;

    int VkupnaCena = 4*cenaFilm + cenaPukanki + cenaPijalok;
    if(DenNaGledanje == "Wednesday" && VISAKarticka == 1)
        VkupnaCena = cenaPijalok+cenaPukanki + 2*cenaFilm;
    cout<<VkupnaCena<<endl;
    return 0;
}