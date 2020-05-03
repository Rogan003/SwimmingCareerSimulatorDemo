#ifndef KARBON_HPP_INCLUDED
#define KARBON_HPP_INCLUDED
class Karbon : public tipicnaOprema{
public:
    Karbon(){
        int pom=rand()%3;
        if(pom==0)
            marka=TYR;
        else if(pom==1)
            marka=Speedo;
        else
            marka=Arena;
        kvalitet=marka+1;
    }
    Karbon(Marka a){
        marka=a;
        kvalitet=a+1;
    }
    Karbon(const Karbon &a){
        marka=a.marka;
        kvalitet=a.kvalitet;
    }
};


#endif // KARBON_HPP_INCLUDED
