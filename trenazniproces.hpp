#ifndef TRENAZNIPROCES_HPP_INCLUDED
#define TRENAZNIPROCES_HPP_INCLUDED
class trenazniProces{
private:
    int dolaznost;
    int umor;
    int trud;
    vodeniTrening voda;
    Teretana teretana;
    Suvi suvi;
    float kvalitet;
public:
    trenazniProces() : voda(),teretana(),suvi(){
        umor=0;
        dolaznost=rand()%45+51;
        if(dolaznost>=90)
            trud=rand()%2+4;
        else
            trud=rand()%5+1;
    }
    trenazniProces(int a, int b, int c, int d, int e) : voda(b), teretana(c), suvi(d,e){
        umor=0;
        if(a>=5)
            trud=5;
        else if(a<=1)
            trud=1;
        else
            trud=a;
        dolaznost=rand()%13+50+trud*7;
    }
    trenazniProces(const trenazniProces &a) : voda(a.voda), teretana(a.teretana), suvi(a.suvi){
        umor=a.umor;
        trud=a.trud;
        dolaznost=a.dolaznost;
        kvalitet=a.kvalitet;
    }
    void setDolaznost(int a){
        if(a>=100)
            dolaznost=100;
        else if(a<=0)
            dolaznost=0;
        else
            dolaznost=a;
    }
    void setTrud(int a){
        if(a>=5)
            trud=5;
        else if(a<=1)
            trud=1;
        else
            trud=a;
    }
    int getDolaznost()const{
        return dolaznost;
    }
    int getTrud()const{
        return trud;
    }
    int getUmor()const{
        return umor;
    }
    void smanjiUmor(){
        umor/=5;
    }
    void odmaraj(){
        umor/=4;
        suvi.pogorsajIstegljivost();
    }
    void resetUkupno(){
        suvi.resetUkupno();
        teretana.resetUkupno();
        voda.resetUkupno();
    }
    void teretanaTreniraj5(){
        umor+=3;
        teretana.treniraj5();
    }
    void teretanaTreniraj4(){
        umor+=2;
        teretana.treniraj4();
    }
    void teretanaTreniraj3(){
        umor+=1;
        teretana.treniraj3();
    }
    void teretanaTreniraj2(){
        umor+=1;
        teretana.treniraj2();
    }
    void teretanaTreniraj1(){
        teretana.treniraj1();
    }
    void suviTreniraj5(){
        umor+=2;
        suvi.treniraj5();
    }
    void suviTreniraj4(){
        umor+=2;
        suvi.treniraj4();
    }
    void suviTreniraj3(){
        umor+=2;
        suvi.treniraj3();
    }
    void suviTreniraj2(){
        umor+=1;
        suvi.treniraj2();
    }
    void suviTreniraj1(){
        suvi.treniraj1();
    }
    void vodaTreniraj5(){
        umor+=5;
        voda.treniraj5();
    }
    void vodaTreniraj4(){
        umor+=3;
        voda.treniraj4();
    }
    void vodaTreniraj3(){
        umor+=1;
        voda.treniraj3();
    }
    void vodaTreniraj2(){
        umor-=2;
        voda.treniraj2();
    }
    void vodaTreniraj1(){
        umor-=4;
        voda.treniraj1();
    }
    float getKvalitet(){
        float pom1=dolaznost/100.00;
        float pom2=trud/5.00;
        kvalitet=((voda.getTehnika()*7+voda.getUkupno()*3+teretana.getPravilnost()*5
        +teretana.getUkupno()+teretana.getVezbe()*2+suvi.getPravilnost()*5+suvi.getIstezanje()*7
        +suvi.getUkupno()+suvi.getVezbe())*pom1*pom2-umor*3)/1000.00;
        return kvalitet;
    }
    friend ostream& operator<<(ostream& izlaz,const trenazniProces &t){
        izlaz<<"U poslednjoj sezoni: "<<endl
        <<"Dolaznost: "<<t.getDolaznost()<<endl
        <<"Trud: "<<t.getTrud()<<endl;
        return izlaz;
    }
    friend istream& operator>>(istream& ulaz, trenazniProces& t){
        int niz[3];
        ulaz>>niz[0];
        if(niz[0]==0)
            t.odmaraj();
        else if(niz[0]==1)
            t.vodaTreniraj1();
        else if(niz[0]==2)
            t.vodaTreniraj2();
        else if(niz[0]==3)
            t.vodaTreniraj3();
        else if(niz[0]==4)
            t.vodaTreniraj4();
        else if(niz[0]==5)
            t.vodaTreniraj5();
        if(niz[0]>=1 && niz[0]<=5){
            ulaz>>niz[1];
            if(niz[1]==1 || niz[1]==2)
                ulaz>>niz[2];
            if(niz[1]==1){
                if(niz[2]==1)
                    t.suviTreniraj1();
                else if(niz[2]==2)
                    t.suviTreniraj2();
                else if(niz[2]==3)
                    t.suviTreniraj3();
                else if(niz[2]==4)
                    t.suviTreniraj4();
                else if(niz[2]==5)
                    t.suviTreniraj5();
            }
            else if(niz[1]==2){
                if(niz[2]==1)
                    t.teretanaTreniraj1();
                else if(niz[2]==2)
                    t.teretanaTreniraj2();
                else if(niz[2]==3)
                    t.teretanaTreniraj3();
                else if(niz[2]==4)
                    t.teretanaTreniraj4();
                else if(niz[2]==5)
                    t.teretanaTreniraj5();
            }
        }
        return ulaz;
    }
    trenazniProces& operator =(const trenazniProces& t){
        dolaznost=t.dolaznost;
        umor=t.umor;
        trud=t.trud;
        voda=t.voda;
        teretana=t.teretana;
        suvi=t.suvi;
        kvalitet=t.kvalitet;
        return *this;
    }
    friend bool operator ==(const trenazniProces& t1, const trenazniProces& t2){
        if(t1.getUmor()!=t2.getUmor() || t1.getTrud()!=t2.getTrud() || t1.getDolaznost()!=t2.getDolaznost())
            return false;
        else
            return true;
    }
    friend bool operator !=(const trenazniProces& t1, const trenazniProces& t2){
        if(t1==t2)
            return false;
        else
            return true;
    }
    friend bool operator >(trenazniProces& t1, trenazniProces& t2){
        if(t1.getKvalitet()>t2.getKvalitet())
            return true;
        else
            return false;
    }
    friend bool operator <(trenazniProces& t1, trenazniProces& t2){
        if(t1.getKvalitet()<t2.getKvalitet())
            return true;
        else
            return false;
    }
};


#endif // TRENAZNIPROCES_HPP_INCLUDED
