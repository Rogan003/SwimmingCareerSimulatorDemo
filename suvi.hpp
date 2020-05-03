#ifndef SUVI_HPP_INCLUDED
#define SUVI_HPP_INCLUDED
class Suvi : public Treninzi{
private:
    int ukupno;
    int pravilnost;
    int vezbe;
    int istezanje;
public:
    Suvi(){
        ukupno=0;
        pravilnost=0;
        vezbe=0;
        istezanje=0;
    }
    Suvi(int a, int b){
        ukupno=0;
        pravilnost=a;
        vezbe=0;
        istezanje=b/10;
    }
    Suvi(const Suvi &a){
        ukupno=a.ukupno;
        pravilnost=a.pravilnost;
        vezbe=a.vezbe;
        istezanje=a.istezanje;
    }
    void treniraj5(){
        ukupno+=5;
        vezbe+=3;
        pravilnost-=1;
        istezanje-=3;
    }
    void treniraj4(){
        ukupno+=4;
        vezbe+=3;
        istezanje-=1;
    }
    void treniraj3(){
        ukupno+=3;
        pravilnost+=1;
        vezbe+=2;
        istezanje+=1;
    }
    void treniraj2(){
        ukupno+=2;
        pravilnost+=2;
        vezbe+=2;
        istezanje+=3;
    }
    void treniraj1(){
        ukupno+=1;
        pravilnost+=3;
        vezbe+=1;
        istezanje+=5;
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
    int getIstezanje()const{
        return istezanje;
    }
    void pogorsajIstegljivost(){
        istezanje/=10;
    }
    void resetUkupno(){
        ukupno/=5;
    }
};


#endif // SUVI_HPP_INCLUDED
