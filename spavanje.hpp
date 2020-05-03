#ifndef SPAVANJE_HPP_INCLUDED
#define SPAVANJE_HPP_INCLUDED
class Spavanje{
private:
    int sati;
public:
    Spavanje(){
        sati=rand()%8+4;
    }
    Spavanje(int a){
        if(a>=12)
            sati=12;
        else if(a<=1)
            sati=1;
        else
            sati=a;
    }
    Spavanje(const Spavanje &a){
        sati=a.sati;
    }
    int getSati()const{
        return sati;
    }
    void setSati(int a){
        if(a>=12)
            sati=12;
        else if(a<=1)
            sati=1;
        else
            sati=a;
    }
};


#endif // SPAVANJE_HPP_INCLUDED
