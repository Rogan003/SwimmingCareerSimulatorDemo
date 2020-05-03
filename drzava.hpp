#ifndef DRZAVA_HPP_INCLUDED
#define DRZAVA_HPP_INCLUDED
class Drzava{
private:
    int jacina;
    drzava country;
    int brMed;
public:
    Drzava(){
        jacina=rand()%8+1;
        int pom=rand()%2;
        brMed=jacina*10+rand()%10;
        switch((jacina-1)*2+pom+1){
        case 1:
            country=Egipat;
            break;
        case 2:
            country=Jamajka;
            break;
        case 3:
            country=Srbija;
            break;
        case 4:
            country=Hrvatska;
            break;
        case 5:
            country=Svajcarska;
            break;
        case 6:
            country=Austrija;
            break;
        case 7:
            country=Italija;
            break;
        case 8:
            country=Rusija;
            break;
        case 9:
            country=Nemacka;
            break;
        case 10:
            country=Brazil;
            break;
        case 11:
            country=Australija;
            break;
        case 12:
            country=Kanada;
            break;
        case 13:
            country=Kina;
            break;
        case 14:
            country=VelikaBritanija;
            break;
        case 15:
            country=Japan;
            break;
        case 16:
            country=SAD;
            break;
        }
    }
    Drzava(drzava b,int c){
            country=b;
            if(c<0)
                brMed=0;
            else
                brMed=c;
            jacina=b/2+1;
    }
    Drzava(const Drzava &d){
        country=d.country;
        jacina=d.jacina;
        brMed=d.brMed;
    }
    int brojMed()const{
        return brMed;
    }
    void setMed(int c){
        if(c<=0)
                brMed=0;
        else if(c>=100)
            brMed=100;
        else
            brMed=c;
    }
    void setDrzava(drzava d){
        country=d;
        jacina=d/2+1;
    }
    string nazivDrzave()const{
        switch(country+1){
        case 1:
            return "Egypt";
            break;
        case 2:
            return "Jamaica";
            break;
        case 3:
            return "Serbia";
            break;
        case 4:
            return "Croatia";
            break;
        case 5:
            return "Switzerland";
            break;
        case 6:
            return "Austria";
            break;
        case 7:
            return "Italy";
            break;
        case 8:
            return "Russia";
            break;
        case 9:
            return "Germany";
            break;
        case 10:
            return "Brazil";
            break;
        case 11:
            return "Australia";
            break;
        case 12:
            return "Canada";
            break;
        case 13:
            return "China";
            break;
        case 14:
            return "Great Britain";
            break;
        case 15:
            return "Japan";
            break;
        case 16:
            return "USA";
            break;
        }
    }
    int getJacinu()const{
        return jacina;
    }
};


#endif // DRZAVA_HPP_INCLUDED
