#include <iostream>
using namespace std;
int main()
{
    int VrednostNaMotornoVozilo, ZashtedeniSredstva, brojNaMeseciNaIsplata, MesecenPrihod, koefCO2=0;
    double SredenKursNaNBRM, EmisijaNaCO2,ProcentNaGranicniVrednsoti=0, KamatnaStapka=0.02, Kredit;
    char TipGorivo,ImaZashteda;
s

cin>>VrednostNaMotornoVozilo>>SredenKursNaNBRM>>EmisijaNaCO2>>TipGorivo>>ImaZashteda>>ZashtedeniSredstva>>brojNaMeseciNaIsplata>>MesecenPrihod;

    if(VrednostNaMotornoVozilo>0 && SredenKursNaNBRM>0 && EmisijaNaCO2>0 && (TipGorivo =='1' || TipGorivo=='0')
       && (ImaZashteda =='1' || ImaZashteda=='0') && ZashtedeniSredstva > 0 && brojNaMeseciNaIsplata > 0 && MesecenPrihod > 0) {
        if (VrednostNaMotornoVozilo < 10000) { ProcentNaGranicniVrednsoti = 0; }
        else if (VrednostNaMotornoVozilo >= 10000 &&
                 VrednostNaMotornoVozilo < 20000) { ProcentNaGranicniVrednsoti = 0.05; }
        else if (VrednostNaMotornoVozilo >= 20000 &&
                 VrednostNaMotornoVozilo < 30000) { ProcentNaGranicniVrednsoti = 0.10; }
        else if (VrednostNaMotornoVozilo >= 30000) { ProcentNaGranicniVrednsoti = 0.15; }

        if (!TipGorivo) {
            if (EmisijaNaCO2 > 0 && EmisijaNaCO2 < 75) { koefCO2 = 5; }
            else if (EmisijaNaCO2 >= 75) { koefCO2 = 15; }
        } else {
            if (EmisijaNaCO2 > 0 && EmisijaNaCO2 < 75) { koefCO2 = 10; }
            else if (EmisijaNaCO2 >= 75) { koefCO2 = 20; }
        }

        double DanokNaMotornoVozilo =
                (VrednostNaMotornoVozilo * ProcentNaGranicniVrednsoti) * SredenKursNaNBRM + EmisijaNaCO2 + koefCO2;
        double VkupnaSuma = DanokNaMotornoVozilo + VrednostNaMotornoVozilo;
        Kredit = VkupnaSuma;
        double MesecnaRataZaPlakjanje = 0, Kamata;

        cout<<VkupnaSuma<<endl;
        if (ImaZashteda) {
            if (ZashtedeniSredstva > Kredit) { cout << "Ne mora da se zema kredit" << endl; }
            Kredit -= ZashtedeniSredstva;
            MesecnaRataZaPlakjanje = Kredit / brojNaMeseciNaIsplata;
            Kamata = VkupnaSuma * brojNaMeseciNaIsplata * (KamatnaStapka * 100);
        } else if (!ImaZashteda && ZashtedeniSredstva > 0) { return 1; }

        if (MesecenPrihod < MesecnaRataZaPlakjanje) {
            cout << "Korisnikot ne moze da podigne kredit" << endl;
        } else {
            cout << MesecnaRataZaPlakjanje * SredenKursNaNBRM;
        }
    } else{
        cout<<"Input greshka"<<endl;
    }

    cout<<Kredit<<endl;
    return 0;
}