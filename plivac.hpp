#ifndef PLIVAC_HPP_INCLUDED
#define PLIVAC_HPP_INCLUDED
class Plivac{
private:
    float rez,brez;
    string ime,prezime;
    int godine;
    Klub klub;
    trenazniProces trening;
    Zivot zivot;
    licnaOprema stvari;
    int talenat;
public:
    Plivac(string a, string b, int c, float d) : klub(), trening(), zivot(), stvari(){
        ime=a;
        prezime=b;
        if(c>=100)
            godine=100;
        else if(c<=3)
            godine=3;
        else
            godine=c;
        if(d+20<=41.5)
            rez=41.5;
        else if(d+20>=64.5)
            rez=64.5;
        else
            rez=d+20;
        talenat=rand()%3+1;
        brez=rez;
    }
    Plivac(const Plivac &a) : klub(a.klub), trening(a.trening), zivot(a.zivot), stvari(a.stvari){
        ime=a.ime;
        prezime=a.prezime;
        godine=a.godine;
        talenat=a.talenat;
        rez=a.rez;
        brez=a.brez;
    }
    Klub& getKlub(){
        return klub;
    }
    trenazniProces& getTrening(){
        return trening;
    }
    Zivot& getZivot(){
        return zivot;
    }
    licnaOprema& getOprema(){
        return stvari;
    }
    float getRezultat()const{
        return rez;
    }
    int getGodine()const{
        return godine;
    }
    int getTalenat()const{
        return talenat;
    }
    string getIme()const{
        return ime;
    }
    string getPrezime()const{
        return prezime;
    }
    void setIme(string a){
        ime=a;
    }
    void setPrezime(string a){
        prezime=a;
    }
    void setGodine(int a){
        if(a>=100)
            godine=100;
        else if(a<=3)
            godine=3;
        else
            godine=a;
    }
    void setDolaznost(int a){
        trening.setDolaznost(a);
    }
    void setTrud(int a){
        trening.setTrud(a);
    }
    int getDolaznost()const{
        return trening.getDolaznost();
    }
    int getTrud()const{
        return trening.getTrud();
    }
    int getUmor()const{
        return trening.getUmor();
    }
    void odmaraj(){
        trening.odmaraj();
    }
    void teretanaTreniraj5(){
        trening.teretanaTreniraj5();
    }
    void teretanaTreniraj4(){
        trening.teretanaTreniraj4();
    }
    void teretanaTreniraj3(){
        trening.teretanaTreniraj3();
    }
    void teretanaTreniraj2(){
        trening.teretanaTreniraj2();
    }
    void teretanaTreniraj1(){
        trening.teretanaTreniraj1();
    }
    void suviTreniraj5(){
        trening.suviTreniraj5();
    }
    void suviTreniraj4(){
        trening.suviTreniraj4();
    }
    void suviTreniraj3(){
        trening.suviTreniraj3();
    }
    void suviTreniraj2(){
        trening.suviTreniraj2();
    }
    void suviTreniraj1(){
        trening.suviTreniraj1();
    }
    void vodaTreniraj5(){
        trening.vodaTreniraj5();
    }
    void vodaTreniraj4(){
        trening.vodaTreniraj4();
    }
    void vodaTreniraj3(){
        trening.vodaTreniraj3();
    }
    void vodaTreniraj2(){
        trening.vodaTreniraj2();
    }
    void vodaTreniraj1(){
        trening.vodaTreniraj1();
    }
    int getKarbonKvalitet(int i){
        return stvari.getKarbonKvalitet(i);
    }
    int getNaocareKvalitet(int i){
        return stvari.getNaocareKvalitet(i);
    }
    int getKapaKvalitet(int i){
        return stvari.getKapaKvalitet(i);
    }
    int getMrezicaKvalitet(int i){
        return stvari.getMrezicaKvalitet(i);
    }
    string getKarbonMarka(int i){
        return stvari.getKarbonMarka(i);
    }
    string getNaocareMarka(int i){
        return stvari.getNaocareMarka(i);
    }
    string getKapaMarka(int i){
        return stvari.getKapaMarka(i);
    }
    string getMrezicaMarka(int i){
        return stvari.getMrezicaMarka(i);
    }
    void setKarbonMarka(Marka a){
        stvari.setKarbonMarka(a);
    }
    void setNaocareMarka(Marka a){
        stvari.setNaocareMarka(a);
    }
    void setKapaMarka(Marka a){
        stvari.setKapaMarka(a);
    }
    void setMrezicaMarka(Marka a){
        stvari.setMrezicaMarka(a);
    }
    int getPorodicaFinansije()const{
        return zivot.getPorodicaFinansije();
    }
    int getPorodicaSreca()const{
        return zivot.getPorodicaSreca();
    }
    int getDrustvoSkolaBliskost()const{
        return zivot.getDrustvoSkolaBliskost();
    }
    int getDrustvoSkolaBroj()const{
        return zivot.getDrustvoSkolaBroj();
    }
    int getDrustvoPlivanjeBliskost()const{
        return zivot.getDrustvoPlivanjeBliskost();
    }
    int getDrustvoPlivanjeBroj()const{
        return zivot.getDrustvoPlivanjeBroj();
    }
    int getVreme()const{
        return zivot.getVreme();
    }
    int getSan()const{
        return zivot.getSan();
    }
    int getOpustanje()const{
        return zivot.getOpustanje();
    }
    bool getLjubavPostoji()const{
        return zivot.getLjubavPostoji();
    }
    int getLjubavKvalitet()const{
        return zivot.getLjubavKvalitet();
    }
    void setPorodicaFinansije(int a){
        zivot.setPorodicaFinansije(a);
    }
    void setPorodicaSreca(int a){
        zivot.setPorodicaSreca(a);
    }
    void setDrustvoSkolaBliskost(int a){
        zivot.setDrustvoSkolaBliskost(a);
    }
    void setDrustvoSkolaBroj(int a){
        zivot.setDrustvoSkolaBroj(a);
    }
    void setDrustvoPlivanjeBliskost(int a){
        zivot.setDrustvoPlivanjeBliskost(a);
    }
    void setDrustvoPlivanjeBroj(int a){
        zivot.setDrustvoPlivanjeBroj(a);
    }
    void setVreme(int a){
        zivot.setVreme(a);
    }
    void setSan(int a){
        zivot.setSan(a);
    }
    void setOpustanje(int a){
        zivot.setOpustanje(a);
    }
    void setLjubavPostoji(bool a){
        zivot.setLjubavPostoji(a);
    }
    void setLjubavKvalitet(int a){
        zivot.setLjubavKvalitet(a);
    }
    string getDrzava()const{
        return klub.getDrzava();
    }
    int getJacinaDrzave()const{
        return klub.getJacinaDrzave();
    }
    int getbrMedDrzave()const{
        return klub.getbrMedDrzave();
    }
    string getImeTrenera()const{
        return klub.getImeTrenera();
    }
    int getSpremaTrenera()const{
        return klub.getSpremaTrenera();
    }
    int getBrTrofeja()const{
        return klub.getBrTrofeja();
    }
    string getNaziv()const{
        return klub.getNaziv();
    }
    int getUsloviBazena()const{
        return klub.getUsloviBazena();
    }
    int getUdaljenostBazena()const{
        return klub.getUdaljenostBazena();
    }
    int getKvalitetOpreme()const{
        return klub.getKvalitetOpreme();
    }
    int getKvantitetOpreme()const{
        return klub.getKvantitetOpreme();
    }
    int getUticajnostUprave()const{
        return klub.getUticajnostUprave();
    }
    int getFinansijeUprave()const{
        return klub.getFinansijeUprave();
    }
    int getBrojLjudiUprave()const{
        return klub.getBrojLjudiUprave();
    }
    int getDolaznostPlivaci()const{
        return klub.getDolaznostPlivaci();
    }
    int getKolicinaPlivaci()const{
        return klub.getKolicinaPlivaci();
    }
    void setDrzava(drzava a){
        klub.setDrzava(a);
    }
    void setDrzavaBrMedalja(int a){
        klub.setDrzavaBrMedalja(a);
    }
    void setImeTrenera(string a){
        klub.setImeTrenera(a);
    }
    void setSpremaTrenera(int a){
        klub.setSpremaTrenera(a);
    }
    void setUsloviBazena(int a){
        klub.setUsloviBazena(a);
    }
    void setUdaljenostBazena(int a){
        klub.setUdaljenostBazena(a);
    }
    void setKvalitetOpreme(int a){
        klub.setKvalitetOpreme(a);
    }
    void setKvantitetOpreme(int a){
        klub.setKvantitetOpreme(a);
    }
    void setUticajnostUprave(int a){
        klub.setUticajnostUprave(a);
    }
    void setBrojLjudiUprave(int a){
        klub.setBrojLjudiUprave(a);
    }
    void setFinansijeUprave(int a){
        klub.setFinansijeUprave(a);
    }
    void setKolicinaPlivaca(int a){
        klub.setKolicinaPlivaca(a);
    }
    void setDolaznostPlivaca(int a){
        klub.setDolaznostPlivaca(a);
    }
    void setBrTrofeja(int a){
        klub.setBrTrofeja(a);
    }
    void setNaziv(string a){
        klub.setNaziv(a);
    }
    void povecajGodine(){
        ++godine;
    }
    void smanjiUmor(){
        trening.smanjiUmor();
    }
    void godisnji(int nedelje){
        for(int i=0;i<nedelje;++i){
            trening.odmaraj();
            trening.resetUkupno();
        }
    }
    void setPocetniRez(float rezultat){
        rez=rezultat;
        brez=rezultat;
    }
    void setBRez(float rezultat){
        brez=rezultat;
    }
    float getBRez()const{
        return brez;
    }
    float getRezultat(bool bitno,bool player){
        float pom1;
        if(godine<18)
            pom1=godine/18.00;
        else
            pom1=pom1-godine+18.00;
        float pom2=talenat/3.00;
        rez=rez-((trening.getKvalitet()*26/32+(klub.getKvalitet()*3+zivot.getKvalitet()*2+stvari.getKvalitet(player)/6)/4)+pom1)*pom2;
        if(bitno)
            rez-=0.35;
        trening.smanjiUmor();
        if(rez<=45)
            rez+=0.5;
        if(rez<=40)
            rez+=0.8;
        if(rez<=35)
            rez+=1;
        if(rez<=30)
            rez+=1.3;
        if(rez<=27)
            rez+=1.5;
        if(rez<=25)
            rez+=1.8;
        if(rez<=23)
            rez+=2;
        if(rez<=22)
            rez+=2.3;
        if(rez<=21)
            rez+=2.5;
        if(rez<=20)
            rez+=2.7;
        return rez;
    }
    friend ostream& operator<<(ostream& izlaz, Plivac &p){
        izlaz<<"Ime: "<<p.getIme()<<" Prezime: "<<p.getPrezime()<<endl
        <<"Godine: "<<p.getGodine()<<" Talenat: "<<p.getTalenat()<<endl
        <<p.klub<<p.zivot<<p.trening<<p.stvari;
        return izlaz;
    }
    friend istream& operator>>(istream& ulaz, Plivac &p){
        ulaz>>p.ime>>p.prezime>>p.godine;
        return ulaz;
    }
    Plivac& operator =(const Plivac &p){
        stvari=p.stvari;
        trening=p.trening;
        zivot=p.zivot;
        klub=p.klub;
        godine=p.godine;
        ime=p.ime;
        prezime=p.prezime;
        talenat=p.talenat;
        rez=p.rez;
        return *this;
    }
    friend bool operator==(Plivac &p1, Plivac& p2){
        if(p1.getIme()!=p2.getIme() || p1.getPrezime()!=p2.getPrezime() || p1.getGodine()!=p2.getGodine()
           || p1.getTalenat()!=p2.getTalenat() || p1.getKlub()!=p2.getKlub()
           || p1.getTrening()!=p2.getTrening() || p1.getZivot()!=p2.getZivot())
            return false;
        else
            return true;
    }
    friend bool operator !=(Plivac& p1, Plivac& p2){
        if(p1==p2)
            return false;
        else
            return true;
    }
    friend bool operator >(Plivac& p1, Plivac& p2){
        int i=0,j=0;
        if(p1.getKlub()>p2.getKlub())
            ++i;
        else
            ++j;
        if(p1.getTrening()>p2.getTrening())
            ++i;
        else
            ++j;
        if(p1.getZivot()>p2.getZivot())
            ++i;
        else
            ++j;
        if(p1.getOprema()>p2.getOprema())
            ++i;
        else
            ++j;
        if(p1.getBRez()>p2.getBRez())
            ++i;
        else
            ++j;
        if(i>j)
            return true;
        else
            return false;
    }
    friend bool operator <(Plivac& p1, Plivac& p2){
        int i=0,j=0;
        if(p1.getKlub()<p2.getKlub())
            ++i;
        else
            ++j;
        if(p1.getTrening()<p2.getTrening())
            ++i;
        else
            ++j;
        if(p1.getZivot()<p2.getZivot())
            ++i;
        else
            ++j;
        if(p1.getOprema()<p2.getOprema())
            ++i;
        else
            ++j;
        if(p1.getBRez()<p2.getBRez())
            ++i;
        else
            ++j;
        if(i>j)
            return true;
        else
            return false;
    }
};


#endif // PLIVAC_HPP_INCLUDED
