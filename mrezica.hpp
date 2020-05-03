#ifndef MREZICA_HPP_INCLUDED
#define MREZICA_HPP_INCLUDED
class Mrezica : public tipicnaOprema{
public:
    Mrezica(){
        int pom=rand()%3;
        if(pom==0)
            marka=TYR;
        else if(pom==1)
            marka=Speedo;
        else
            marka=Arena;
        kvalitet=marka+1;
    }
    Mrezica(Marka a){
        marka=a;
        kvalitet=a+1;
    }
    Mrezica(const Mrezica &a){
        marka=a.marka;
        kvalitet=a.kvalitet;
    }
};


#endif // MREZICA_HPP_INCLUDED
