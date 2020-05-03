#ifndef SLOBODNOVREME_HPP_INCLUDED
#define SLOBODNOVREME_HPP_INCLUDED
class slobodnoVreme{
private:
    int kolicina;
public:
    slobodnoVreme(){
        kolicina=rand()%5+1;
    }
    slobodnoVreme(int a){
        if(a>=5)
            kolicina=5;
        else if(a<=1)
            kolicina=1;
        else
            kolicina=a;
    }
    slobodnoVreme(const slobodnoVreme &a){
        kolicina=a.kolicina;
        kolicina=a.kolicina;
    }
    int getKolicina()const{
        return kolicina;
    }
    void setKolicina(int a){
        if(a>=5)
            kolicina=5;
        else if(a<=1)
            kolicina=1;
        else
            kolicina=a;
    }
};


#endif // SLOBODNOVREME_HPP_INCLUDED
