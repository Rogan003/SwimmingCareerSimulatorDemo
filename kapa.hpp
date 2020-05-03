#ifndef KAPA_HPP_INCLUDED
#define KAPA_HPP_INCLUDED
class Kapa : public tipicnaOprema{
public:
    Kapa(){
        int pom=rand()%3;
        if(pom==0)
            marka=TYR;
        else if(pom==1)
            marka=Speedo;
        else
            marka=Arena;
        kvalitet=marka+1;
    }
    Kapa(Marka a){
        marka=a;
        kvalitet=a+1;
    }
    Kapa(const Kapa &a){
        marka=a.marka;
        kvalitet=a.kvalitet;
    }
};


#endif // KAPA_HPP_INCLUDED
