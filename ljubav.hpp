#ifndef LJUBAV_HPP_INCLUDED
#define LJUBAV_HPP_INCLUDED
class Ljubav{
private:
    int kvalitet;
public:
    Ljubav(){
        int pom=rand()%2;
        if(pom==0)
            kvalitet=0;
        else
            kvalitet=rand()%5+1;
    }
    Ljubav(int a){
            if(a>=5)
                kvalitet=5;
            else if(a<=1)
                kvalitet=1;
            else
                kvalitet=a;
    }
    Ljubav(const Ljubav &a){
        kvalitet=a.kvalitet;
    }
    int getKvalitet()const{
        return kvalitet;
    }
    void setKvalitet(int a){
            if(a>=5)
                kvalitet=5;
            else if(a<=1)
                kvalitet=1;
            else
                kvalitet=a;
    }
};


#endif // LJUBAV_HPP_INCLUDED
