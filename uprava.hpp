#ifndef UPRAVA_HPP_INCLUDED
#define UPRAVA_HPP_INCLUDED
class Uprava{
private:
    int finansije;
    int brojLjudi;
    int uticajnost;
public:
    Uprava(){
        finansije=rand()%10+1;
        brojLjudi=rand()%10+5;
        uticajnost=rand()%3+1;
    }
    Uprava(int a, int b, int c){
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
    int getFinansije()const{
        return finansije;
    }
    int getbrojLjudi()const{
        return brojLjudi;
    }
    int getUticajnost()const{
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
    void setFinansije(int a){
        if(a>=10)
            finansije=10;
        else if(a<=1)
            finansije=1;
        else
            finansije=a;
    }
    void setUticajnost(int c){
        if(c>=3)
            uticajnost=3;
        else if(c<=1)
            uticajnost=1;
        else
            uticajnost=c;
    }
};


#endif // UPRAVA_HPP_INCLUDED
