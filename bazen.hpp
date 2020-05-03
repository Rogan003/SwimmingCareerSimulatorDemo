#ifndef BAZEN_HPP_INCLUDED
#define BAZEN_HPP_INCLUDED
class Bazen{
private:
    int uslovi;
    int udaljenost;
public:
    Bazen(){
        uslovi=rand()%5+1;
        udaljenost=rand()%10+1;
        if(udaljenost>=5)
            udaljenost*=2;
    }
    Bazen(int a,int b){
        if(b<0)
            udaljenost=0;
        else
            udaljenost=b;
        if(a>=5)
            uslovi=5;
        else if(a<=1)
            uslovi=1;
        else
            uslovi=a;
    }
    Bazen(const Bazen &a){
        uslovi=a.uslovi;
        udaljenost=a.udaljenost;
    }
    int getUdaljenost()const{
        return udaljenost;
    }
    int getUslovi()const{
        return uslovi;
    }
    void setUdaljenost(int a){
        if(a<0)
            udaljenost=0;
        else if(a>=30)
            udaljenost=30;
        else
            udaljenost=a;
    }
    void setUslovi(int a){
        if(a>=5)
            uslovi=5;
        else if(a<=1)
            uslovi=1;
        else
            uslovi=a;
    }
};


#endif // BAZEN_HPP_INCLUDED
