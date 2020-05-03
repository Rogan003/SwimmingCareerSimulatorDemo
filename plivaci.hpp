#ifndef PLIVACI_HPP_INCLUDED
#define PLIVACI_HPP_INCLUDED
class Plivaci{
private:
    int kolicina;
    int dolaznost;
public:
    Plivaci(){
        kolicina=rand()%100+1;
        dolaznost=rand()%100+1;
    }
    Plivaci(int a, int b){
        if(a<0)
            kolicina=0;
        else
            kolicina=a;
        if(b>=100)
            dolaznost=100;
        else if(b<=1)
            dolaznost=1;
        else
            dolaznost=b;
    }
    Plivaci(const Plivaci &a){
        kolicina=a.kolicina;
        dolaznost=a.dolaznost;
    }
    int getKolicina()const{
        return kolicina;
    }
    int getDolaznost()const{
        return dolaznost;
    }
    void setKolicina(int a){
        if(a<=0)
            kolicina=0;
        else if(a>=100)
            kolicina=100;
        else
            kolicina=a;
    }
    void setDolaznost(int b){
        if(b>=100)
            dolaznost=100;
        else if(b<=1)
            dolaznost=1;
        else
            dolaznost=b;
    }
};


#endif // PLIVACI_HPP_INCLUDED
