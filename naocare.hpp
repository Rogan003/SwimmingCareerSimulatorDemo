#ifndef NAOCARE_HPP_INCLUDED
#define NAOCARE_HPP_INCLUDED
class Naocare : public tipicnaOprema{
public:
    Naocare(){
        int pom=rand()%3;
        if(pom==0)
            marka=TYR;
        else if(pom==1)
            marka=Speedo;
        else
            marka=Arena;
        kvalitet=marka+1;
    }
    Naocare(Marka a){
        marka=a;
        kvalitet=a+1;
    }
    Naocare(const Naocare &a){
        marka=a.marka;
        kvalitet=a.kvalitet;
    }
};


#endif // NAOCARE_HPP_INCLUDED
