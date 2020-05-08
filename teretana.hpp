#ifndef TERETANA_HPP_INCLUDED
#define TERETANA_HPP_INCLUDED
class Teretana : public Treninzi{
private:
    int pravilnost;
    int vezbe;
public:
    Teretana(){
        ukupno=0;
        pravilnost=0;
        vezbe=0;
    }
    Teretana(int a){
        ukupno=0;
        pravilnost=a;
        vezbe=0;
    }
    Teretana(const Teretana &a){
        ukupno=a.ukupno;
        pravilnost=a.pravilnost;
        vezbe=a.vezbe;
    }
    void treniraj5(){
        ukupno+=5;
        vezbe+=3;
        pravilnost-=1;
    }
    void treniraj4(){
        ukupno+=4;
        vezbe+=3;
    }
    void treniraj3(){
        ukupno+=3;
        pravilnost+=1;
        vezbe+=2;
    }
    void treniraj2(){
        ukupno+=2;
        pravilnost+=2;
        vezbe+=2;
    }
    void treniraj1(){
        ukupno+=1;
        pravilnost+=3;
        vezbe+=1;
    }
    int getPravilnost()const{
        return pravilnost;
    }
    int getUkupno()const{
        return ukupno;
    }
    int getVezbe()const{
        return vezbe;
    }
    void resetUkupno(){
        ukupno/=6;
    }
};


#endif // TERETANA_HPP_INCLUDED
