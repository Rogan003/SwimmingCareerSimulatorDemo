#ifndef KLUB_HPP_INCLUDED
#define KLUB_HPP_INCLUDED
class Klub{
private:
    string naziv;
    Drzava nacionalnost;
    list <Trener> trener;
    int brTrofeja;
    float kvalitet;
    list <Bazen> bazen;
    Oprema oprema;
    Uprava uprava;
    Plivaci plivaci;
    int redTrenera;
    int brTrenera;
    int redBazena;
    int brBazena;
public:
    Klub() : nacionalnost(), oprema(), uprava(), plivaci(){
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
        Trener t1;
        list <Trener>::iterator i=trener.begin();
        trener.insert(i,t1);
        redTrenera=1;
        brTrenera=1;
        Bazen b1;
        list <Bazen>::iterator it=bazen.begin();
        bazen.insert(it,b1);
        redBazena=1;
        brBazena=1;
    }
    Klub(drzava a, int b, float c,  string d, int e, int f, int g, int h, int i, int j, int k, int l, int m,int n, string o)
    : nacionalnost(a,b), oprema(g,h), uprava(i,j,k), plivaci(l,m){
        brTrofeja=n;
        naziv=o;
        Trener t1(c,d);
        list <Trener>::iterator it=trener.begin();
        trener.insert(it,t1);
        redTrenera=1;
        brTrenera=1;
        list <Bazen>::iterator it2=bazen.begin();
        Bazen b1(e,f);
        bazen.insert(it2,b1);
        redBazena=1;
        brBazena=1;
    }
    Klub(const Klub &a) : nacionalnost(a.nacionalnost), trener(a.trener), bazen(a.bazen), oprema(a.oprema),
    uprava(a.uprava), plivaci(a.plivaci){
        brTrofeja=a.brTrofeja;
        naziv=a.naziv;
        redTrenera=a.redTrenera;
        brTrenera=a.brTrenera;
        redBazena=a.redBazena;
        brBazena=a.brBazena;
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
    string getImeTrenera(int i){
        list <Trener>::iterator it=trener.begin();
        for(int j=1;j<i;++j,++it){}
        return it->getIme();
    }
    float getSpremaTrenera(int i){
        list <Trener>::iterator it=trener.begin();
        for(int j=1;j<i;++j,++it){}
        return it->getSprema();
    }
    int getBrTrofeja()const{
        return brTrofeja;
    }
    string getNaziv()const{
        return naziv;
    }
    float getUsloviBazena(int i){
        list <Bazen>::iterator it=bazen.begin();
        for(int j=1;j<i;++j,++it){}
        return it->getUslovi();
    }
    int getUdaljenostBazena(int i){
        list <Bazen>::iterator it=bazen.begin();
        for(int j=1;j<i;++j,++it){}
        return it->getUdaljenost();
    }
    int getRedBazena()const{
        return redBazena;
    }
    int getKvalitetOpreme()const{
        return oprema.getKvalitet();
    }
    int getKvantitetOpreme()const{
        return oprema.getKvantitet();
    }
    float getUticajnostUprave()const{
        return uprava.getUticajnost();
    }
    float getFinansijeUprave()const{
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
    void setImeTrenera(string a, int i){
        list <Trener>::iterator it=trener.begin();
        for(int j=1;j<i;++j,++it){}
        it->setIme(a);
    }
    void setSpremaTrenera(float a, int i){
        list <Trener>::iterator it=trener.begin();
        for(int j=1;j<i;++j,++it){}
        it->setSprema(a);
    }
    void dodajTrenera(string a, float b){
        brTrenera++;
        Trener t1(b,a);
        trener.push_back(t1);
    }
    bool izaberiTrenera(string a){
        list <Trener>::iterator i=trener.begin();
        int pom=0;
        bool postoji=false;
        do{
            pom++;
            if(i->getIme()==a){
                postoji=true;
                break;
            }
            ++i;
        }while(pom<=brTrenera);
        if(postoji)
            redTrenera=pom;
        return postoji;
    }
    int getRedTrenera()const{
        return redTrenera;
    }
    void setUsloviBazena(float a,int i){
        list <Bazen>::iterator it=bazen.begin();
        for(int j=1;j<i;++j,++it){}
        it->setUslovi(a);
    }
    void setUdaljenostBazena(int a, int i){
        list <Bazen>::iterator it=bazen.begin();
        for(int j=1;j<i;++j,++it){}
        it->setUdaljenost(a);
    }
    void dodajBazen(float a, int b){
        brBazena++;
        Bazen b1(a,b);
        bazen.push_back(b1);
    }
    bool izaberiBazen(int i){
        if(i>=1 && i<=brBazena){
            redBazena=i;
            return true;
        }
        else
            return false;
    }
    void setKvalitetOpreme(int a){
        oprema.setKvalitet(a);
    }
    void setKvantitetOpreme(int a){
        oprema.setKvantitet(a);
    }
    void setUticajnostUprave(float a){
        uprava.setUticajnost(a);
    }
    void setBrojLjudiUprave(int a){
        uprava.setBrojLjudi(a);
    }
    void setFinansijeUprave(float a){
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
        kvalitet=(nacionalnost.getJacinu()*3+pom1+getSpremaTrenera(redTrenera)*20+getUsloviBazena(redBazena)*5
        -getUdaljenostBazena(redBazena)+pom2+pom3+uprava.getFinansije()*5-pom4+brTrofeja)/210.00;
        return kvalitet;
    }
    friend ostream& operator<<(ostream& izlaz,Klub &k){
        izlaz<<"Drzava: "<<k.getDrzava()<<" Broj medalja: "<<k.getbrMedDrzave()<<" Jacina: "<<k.getJacinaDrzave()<<endl
        <<"Trener: "<<k.getImeTrenera(k.getRedTrenera())<<" Rad trenera: "<<k.getSpremaTrenera(k.getRedTrenera())<<endl
        <<"Klub:"<<endl
        <<"Naziv: "<<k.getNaziv()<<" Broj trofeja: "<<k.getBrTrofeja()<<endl
        <<"Bazen: "<<"Uslovi: "<<k.getUsloviBazena(k.getRedBazena())<<" Udaljenost: "<<k.getUdaljenostBazena(k.getRedBazena())<<endl
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
        redTrenera=k.redTrenera;
        brTrenera=k.brTrenera;
        redBazena=k.redBazena;
        brBazena=k.brBazena;
        return *this;
    }
    friend bool operator ==(Klub& k1, Klub& k2){
        if(k1.naziv!=k2.naziv)
            return false;
        else if(k1.getBrTrofeja()!=k2.getBrTrofeja() || k1.getDrzava()!=k2.getDrzava() || k1.getbrMedDrzave()!=k2.getbrMedDrzave()
                || k1.getImeTrenera(k1.getRedTrenera())!=k2.getImeTrenera(k2.getRedTrenera()) || k1.getSpremaTrenera(k1.getRedTrenera())!=k2.getSpremaTrenera(k2.getRedTrenera())
                || k1.getUsloviBazena(k1.getRedBazena())!=k2.getUsloviBazena(k2.getRedBazena()) || k1.getUdaljenostBazena(k1.getRedBazena())!=k2.getUdaljenostBazena(k2.getRedBazena())
                || k1.getKvalitetOpreme()!=k2.getKvalitetOpreme() || k1.getKvantitetOpreme()!=k2.getKvantitetOpreme()
                || k1.getFinansijeUprave()!=k2.getFinansijeUprave() || k1.getUticajnostUprave()!=k2.getUticajnostUprave() || k1.getBrojLjudiUprave()!=k2.getBrojLjudiUprave()
                || k1.getDolaznostPlivaci()!=k2.getDolaznostPlivaci() || k1.getKolicinaPlivaci()!=k2.getKolicinaPlivaci())
            return false;
        else
            return true;
    }
    friend bool operator !=(Klub& k1, Klub& k2){
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
