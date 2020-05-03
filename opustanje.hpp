#ifndef OPUSTANJE_HPP_INCLUDED
#define OPUSTANJE_HPP_INCLUDED
class Opustanje{
private:
    int nivo;
public:
    Opustanje(){
        nivo=rand()%5+1;
    }
    Opustanje(int a){
        if(a>=5)
            nivo=5;
        else if(a<=1)
            nivo=1;
        else
            nivo=a;
    }
    Opustanje(const Opustanje &a){
        nivo=a.nivo;
    }
    int getNivo()const{
        return nivo;
    }
    void setNivo(int a){
        if(a>=5)
            nivo=5;
        else if(a<=1)
            nivo=1;
        else
            nivo=a;
    }
};


#endif // OPUSTANJE_HPP_INCLUDED
