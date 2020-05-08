#ifndef DRUSTVO_HPP_INCLUDED
#define DRUSTVO_HPP_INCLUDED
class Drustvo{
protected:
    int broj;
    int bliskost;
public:
     Drustvo(){
        broj=rand()%30+1;
        bliskost=rand()%10+1;
    }
    Drustvo(int a, int b){
        if(a<0)
            broj=0;
        else
            broj=a;
        if(b>=10)
            bliskost=10;
        else if(b<=1)
            bliskost=1;
        else
            bliskost=b;
    }
    Drustvo(const Drustvo &a){
        broj=a.broj;
        bliskost=a.bliskost;
    }
    int getBroj()const{
        return broj;
    }
    int getBliskost()const{
        return bliskost;
    }
    void setBroj(int a){
        if(a<0)
            broj=0;
        else
            broj=a;
    }
    void setBliskost(int b){
        if(b>=10)
            bliskost=10;
        else if(b<=1)
            bliskost=1;
        else
            bliskost=b;
    }
};


#endif // DRUSTVO_HPP_INCLUDED
