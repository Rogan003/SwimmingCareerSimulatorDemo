#ifndef KLUB_HPP_INCLUDED
#define KLUB_HPP_INCLUDED
class Klub{
private:
    string naziv;
    Drzava nacionalnost;
    Trener trener;
    int brTrofeja;
    float kvalitet;
    Bazen bazen;
    Oprema oprema;
    Uprava uprava;
    Plivaci plivaci;
public:
    Klub() : nacionalnost(), trener(), bazen(), oprema(), uprava(), plivaci(){
        brTrofeja=rand()%30+5;
        int pom=rand()%6;
        if(pom==0)
            naziv="Florida Waves";
        if(pom==1)
            naziv="Los Angeles Sharks";
        if(pom==2)
            naziv="New York Aquatics";
        if(pom==3)
            naziv="London Dolphins";
        if(pom==4)
            naziv="Berlin Fins";
        if(pom==5)
            naziv="Rome Whales";
    }
    Klub(drzava a, int b, int c,  string d, int e, int f, int g, int h, int i, int j, int k, int l, int m,int n, string o)
    : nacionalnost(a,b), trener(c,d), bazen(e,f), oprema(g,h), uprava(i,j,k), plivaci(l,m){
        brTrofeja=n;
        naziv=o;
    }
    Klub(const Klub &a) : nacionalnost(a.nacionalnost), trener(a.trener), bazen(a.bazen), oprema(a.oprema),
    uprava(a.uprava), plivaci(a.plivaci){
        brTrofeja=a.brTrofeja;
        naziv=a.naziv;
    }
    string getDrzava()const{
        return nacionalnost.nazivDrzave();
    }
    int getJacinaDrzave()const{
        return nacionalnost.getJacinu();
    }
    int getbrMedDrzave()const{
        return nacionalnost.brojMed();
    }
    string getImeTrenera()const{
        return trener.getIme();
    }
    int getSpremaTrenera()const{
        return trener.getSprema();
    }
    int getBrTrofeja()const{
        return brTrofeja;
    }
    string getNaziv()const{
        return naziv;
    }
    int getUsloviBazena()const{
        return bazen.getUslovi();
    }
    int getUdaljenostBazena()const{
        return bazen.getUdaljenost();
    }
    int getKvalitetOpreme()const{
        return oprema.getKvalitet();
    }
    int getKvantitetOpreme()const{
        return oprema.getKvantitet();
    }
    int getUticajnostUprave()const{
        return uprava.getUticajnost();
    }
    int getFinansijeUprave()const{
        return uprava.getFinansije();
    }
    int getBrojLjudiUprave()const{
        return uprava.getbrojLjudi();
    }
    int getDolaznostPlivaci()const{
        return plivaci.getDolaznost();
    }
    int getKolicinaPlivaci()const{
        return plivaci.getKolicina();
    }
    void setDrzava(drzava a){
        nacionalnost.setDrzava(a);
    }
    void setDrzavaBrMedalja(int a){
        nacionalnost.setMed(a);
    }
    void setImeTrenera(string a){
        trener.setIme(a);
    }
    void setSpremaTrenera(int a){
        trener.setSprema(a);
    }
    void setUsloviBazena(int a){
        bazen.setUslovi(a);
    }
    void setUdaljenostBazena(int a){
        bazen.setUdaljenost(a);
    }
    void setKvalitetOpreme(int a){
        oprema.setKvalitet(a);
    }
    void setKvantitetOpreme(int a){
        oprema.setKvantitet(a);
    }
    void setUticajnostUprave(int a){
        uprava.setUticajnost(a);
    }
    void setBrojLjudiUprave(int a){
        uprava.setBrojLjudi(a);
    }
    void setFinansijeUprave(int a){
        uprava.setFinansije(a);
    }
    void setKolicinaPlivaca(int a){
        plivaci.setKolicina(a);
    }
    void setDolaznostPlivaca(int a){
        plivaci.setDolaznost(a);
    }
    void setBrTrofeja(int a){
        brTrofeja=a;
    }
    void setNaziv(string a){
        naziv=a;
    }
    float getKvalitet(){
        float pom1=nacionalnost.brojMed()/2.00;
        float pom2=oprema.getKvalitet()*oprema.getKvantitet()/20.00;
        float pom3=uprava.getbrojLjudi()*uprava.getUticajnost()/2.00;
        float pom4=plivaci.getDolaznost()*plivaci.getKolicina()/50.00;
        kvalitet=(nacionalnost.getJacinu()*3+pom1+trener.getSprema()*20+bazen.getUslovi()*5
        -bazen.getUdaljenost()+pom2+pom3+uprava.getFinansije()*5-pom4+brTrofeja)/210.00;
        return kvalitet;
    }
    friend ostream& operator<<(ostream& izlaz,const Klub &k){
        izlaz<<"Drzava: "<<k.getDrzava()<<" Broj medalja: "<<k.getbrMedDrzave()<<" Jacina: "<<k.getJacinaDrzave()<<endl
        <<"Trener: "<<k.getImeTrenera()<<" Rad trenera: "<<k.getSpremaTrenera()<<endl
        <<"Klub:"<<endl
        <<"Naziv: "<<k.getNaziv()<<" Broj trofeja: "<<k.getBrTrofeja()<<endl
        <<"Bazen: "<<"Uslovi: "<<k.getUsloviBazena()<<" Udaljenost: "<<k.getUdaljenostBazena()<<endl
        <<"Oprema: "<<"Kvalitet: "<<k.getKvalitetOpreme()<<" Kolicina: "<<k.getKvantitetOpreme()<<endl
        <<"Uprava: "<<"Finansije: "<<k.getFinansijeUprave()<<" Uticajnost: "<<k.getUticajnostUprave()<<" Broj ljudi: "<<k.getBrojLjudiUprave()<<endl
        <<"Plivaci: "<<"Dolaznost: "<<k.getDolaznostPlivaci()<<" Kolicina: "<<k.getKolicinaPlivaci()<<endl;
        return izlaz;
    }
    Klub& operator =(const Klub& k){
        nacionalnost=k.nacionalnost;
        trener=k.trener;
        naziv=k.naziv;
        brTrofeja=k.brTrofeja;
        bazen=k.bazen;
        oprema=k.oprema;
        uprava=k.uprava;
        plivaci=k.plivaci;
        kvalitet=k.kvalitet;
        return *this;
    }
    friend bool operator ==(const Klub& k1, const Klub& k2){
        if(k1.naziv!=k2.naziv)
            return false;
        else if(k1.getBrTrofeja()!=k2.getBrTrofeja() || k1.getDrzava()!=k2.getDrzava() || k1.getbrMedDrzave()!=k2.getbrMedDrzave()
                || k1.getImeTrenera()!=k2.getImeTrenera() || k1.getSpremaTrenera()!=k2.getSpremaTrenera()
                || k1.getUsloviBazena()!=k2.getUsloviBazena() || k1.getUdaljenostBazena()!=k2.getUdaljenostBazena()
                || k1.getKvalitetOpreme()!=k2.getKvalitetOpreme() || k1.getKvantitetOpreme()!=k2.getKvantitetOpreme()
                || k1.getFinansijeUprave()!=k2.getFinansijeUprave() || k1.getUticajnostUprave()!=k2.getUticajnostUprave() || k1.getBrojLjudiUprave()!=k2.getBrojLjudiUprave()
                || k1.getDolaznostPlivaci()!=k2.getDolaznostPlivaci() || k1.getKolicinaPlivaci()!=k2.getKolicinaPlivaci())
            return false;
        else
            return true;
    }
    friend bool operator !=(const Klub& k1, const Klub& k2){
        if(k1==k2)
            return false;
        else
            return true;
    }
    friend bool operator >(Klub& k1, Klub& k2){
        if(k1.getKvalitet()>k2.getKvalitet())
            return true;
        else
            return false;
    }
    friend bool operator <(Klub& k1, Klub& k2){
        if(k1.getKvalitet()<k2.getKvalitet())
            return true;
        else
            return false;
    }
};


#endif // KLUB_HPP_INCLUDED
