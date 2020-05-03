#ifndef OPREMA_HPP_INCLUDED
#define OPREMA_HPP_INCLUDED
class Oprema{
private:
    int kvalitet;
    int kvantitet;
public:
    Oprema(){
        kvalitet=rand()%5+1;
        kvantitet=rand()%100+1;
    }
    Oprema(int a, int b){
        if(a>=5)
            kvalitet=5;
        else if(a<=1)
            kvalitet=1;
        else
            kvalitet=a;
        if(b>=100)
            kvantitet=100;
        else if(b<=1)
            kvantitet=1;
        else
            kvantitet=b;
    }
    Oprema(const Oprema &a){
        kvalitet=a.kvalitet;
        kvantitet=a.kvantitet;
    }
    int getKvalitet()const{
        return kvalitet;
    }
    int getKvantitet()const{
        return kvantitet;
    }
    void setKvalitet(int a){
        if(a>=5)
            kvalitet=5;
        else if(a<=1)
            kvalitet=1;
        else
            kvalitet=a;
    }
    void setKvantitet(int b){
        if(b>=100)
            kvantitet=100;
        else if(b<=1)
            kvantitet=1;
        else
            kvantitet=b;
    }
};


#endif // OPREMA_HPP_INCLUDED
