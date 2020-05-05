#ifndef UPRAVA_HPP_INCLUDED
#define UPRAVA_HPP_INCLUDED
class Uprava{
private:
    float finansije;
    int brojLjudi;
    float uticajnost;
public:
    Uprava(){
        finansije=(rand()%900+100)/100.00;
        brojLjudi=rand()%9+5;
        uticajnost=(rand()%200+100)/100.00;
    }
    Uprava(float a, int b, float c){
        if(b<0)
            brojLjudi=0;
        else
            brojLjudi=b;
        if(a>=10)
            finansije=10;
        else if(a<=1)
            finansije=1;
        else
            finansije=a;
        if(c>=3)
            uticajnost=3;
        else if(c<=1)
            uticajnost=1;
        else
            uticajnost=c;
    }
    Uprava(const Uprava &a){
        finansije=a.finansije;
        brojLjudi=a.brojLjudi;
        uticajnost=a.uticajnost;
    }
    float getFinansije()const{
        return finansije;
    }
    int getbrojLjudi()const{
        return brojLjudi;
    }
    float getUticajnost()const{
        return uticajnost;
    }
    void setBrojLjudi(int a){
        if(a<=0)
            brojLjudi=0;
        else if(a>=20)
            brojLjudi=20;
        else
            brojLjudi=a;
    }
    void setFinansije(float a){
        if(a>=10)
            finansije=10;
        else if(a<=1)
            finansije=1;
        else
            finansije=a;
    }
    void setUticajnost(float c){
        if(c>=3)
            uticajnost=3;
        else if(c<=1)
            uticajnost=1;
        else
            uticajnost=c;
    }
};


#endif // UPRAVA_HPP_INCLUDED
