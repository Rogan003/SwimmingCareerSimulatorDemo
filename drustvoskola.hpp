#ifndef DRUSTVOSKOLA_HPP_INCLUDED
#define DRUSTVOSKOLA_HPP_INCLUDED
class DrustvoSkola : public Drustvo{
public:
    DrustvoSkola(){
        broj=rand()%30+1;
        bliskost=rand()%10+1;
    }
    DrustvoSkola(int a, int b){
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
    DrustvoSkola(const DrustvoSkola &a){
        broj=a.broj;
        bliskost=a.bliskost;
    }
};


#endif // DRUSTVOSKOLA_HPP_INCLUDED
