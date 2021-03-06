#ifndef TRENER_HPP_INCLUDED
#define TRENER_HPP_INCLUDED
class Trener{
private:
    float sprema;
    string ime;
public:
    Trener(){
        sprema=(rand()%400+100)/100.00;
        int pom=rand()%5;
        if(pom==0)
            ime="Ivan";
        else if(pom==1)
            ime="Michael";
        else if(pom==2)
            ime="Milan";
        else if(pom==3)
            ime="Adam";
        else if(pom==4)
            ime="Mark";
    }
    Trener(float a,string b){
        if(a>=5)
            sprema=5;
        else if(a<=1)
            sprema=1;
        else
            sprema=a;
        ime=b;
    }
    Trener(const Trener &a){
        sprema=a.sprema;
        ime=a.ime;
    }
    float getSprema()const{
        return sprema;
    }
    string getIme()const{
        return ime;
    }
    void setSprema(float a){
        if(a>=5)
            sprema=5;
        else if(a<=1)
            sprema=1;
        else
            sprema=a;
    }
    void setIme(string a){
        ime=a;
    }
};


#endif // TRENER_HPP_INCLUDED
