#ifndef PORODICA_HPP_INCLUDED
#define PORODICA_HPP_INCLUDED
class Porodica{
private:
    int sreca;
    int finansije;
public:
    Porodica(){
        sreca=rand()%10+1;
        finansije=rand()%10+1;
    }
    Porodica(int a, int b){
        if(a>=10)
            sreca=10;
        else if(a<=1)
            sreca=1;
        else
            sreca=a;
        if(b>=10)
            finansije=10;
        else if(b<=1)
            finansije=1;
        else
            finansije=b;
    }
    Porodica(const Porodica &a){
        sreca=a.sreca;
        finansije=a.finansije;
    }
    int getSreca()const{
        return sreca;
    }
    int getFinansije()const{
        return finansije;
    }
    void setSreca(int a){
        if(a>=10)
            sreca=10;
        else if(a<=1)
            sreca=1;
        else
            sreca=a;
    }
    void setFinansije(int b){
        if(b>=10)
            finansije=10;
        else if(b<=1)
            finansije=1;
        else
            finansije=b;
    }
};


#endif // PORODICA_HPP_INCLUDED
