#ifndef ZIVOT_HPP_INCLUDED
#define ZIVOT_HPP_INCLUDED
class Zivot{
private:
    Porodica porodica;
    DrustvoSkola drustvoskola;
    DrustvoPlivanje drustvoplivanje;
    slobodnoVreme vreme;
    Spavanje san;
    Opustanje opustanje;
    Ljubav ljubav;
    float kvalitet;
public:
    Zivot() : porodica(), drustvoskola(), drustvoplivanje(), vreme(), san(), opustanje(), ljubav(){}
    Zivot(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j) :
    porodica(a,b), drustvoskola(c,d), drustvoplivanje(e,f), vreme(g), san(h), opustanje(i), ljubav(j){}
    Zivot(const Zivot &a) : porodica(a.porodica), drustvoskola(a.drustvoskola), drustvoplivanje(a.drustvoplivanje),
    vreme(a.vreme), san(a.san), opustanje(a.opustanje), ljubav(a.ljubav){}
    int getPorodicaFinansije()const{
        return porodica.getFinansije();
    }
    int getPorodicaSreca()const{
        return porodica.getSreca();
    }
    int getDrustvoSkolaBliskost()const{
        return drustvoskola.getBliskost();
    }
    int getDrustvoSkolaBroj()const{
        return drustvoskola.getBroj();
    }
    int getDrustvoPlivanjeBliskost()const{
        return drustvoplivanje.getBliskost();
    }
    int getDrustvoPlivanjeBroj()const{
        return drustvoplivanje.getBroj();
    }
    int getVreme()const{
        return vreme.getKolicina();
    }
    int getSan()const{
        return san.getSati();
    }
    int getOpustanje()const{
        return opustanje.getNivo();
    }
    int getLjubavKvalitet()const{
        return ljubav.getKvalitet();
    }
    void setPorodicaFinansije(int a){
        porodica.setFinansije(a);
    }
    void setPorodicaSreca(int a){
        porodica.setSreca(a);
    }
    void setDrustvoSkolaBliskost(int a){
        drustvoskola.setBliskost(a);
    }
    void setDrustvoSkolaBroj(int a){
        drustvoskola.setBroj(a);
    }
    void setDrustvoPlivanjeBliskost(int a){
        drustvoplivanje.setBliskost(a);
    }
    void setDrustvoPlivanjeBroj(int a){
        drustvoplivanje.setBroj(a);
    }
    void setVreme(int a){
        vreme.setKolicina(a);
    }
    void setSan(int a){
        san.setSati(a);
    }
    void setOpustanje(int a){
        opustanje.setNivo(a);
    }
    void setLjubavKvalitet(int a){
        ljubav.setKvalitet(a);
    }
    float getKvalitet(){
        kvalitet=(porodica.getFinansije()*porodica.getSreca()*2+drustvoskola.getBliskost()*drustvoskola.getBroj()+
        drustvoplivanje.getBliskost()*drustvoplivanje.getBroj()+vreme.getKolicina()*5+san.getSati()*10+
        opustanje.getNivo()*7+ljubav.getKvalitet()*40)/900.00;
        return kvalitet;
    }
    friend ostream& operator<<(ostream& izlaz,const Zivot &z){
        izlaz<<"Zivot:"<<endl
        <<"Porodica: "<<"Finansije: "<<z.getPorodicaFinansije()<<" Sreca: "<<z.getPorodicaSreca()<<endl
        <<"Drustvo skola: "<<"Bliskost: "<<z.getDrustvoSkolaBliskost()<<" Kolicina: "<<z.getDrustvoSkolaBroj()<<endl
        <<"Drustvo plivanje: "<<"Bliskost: "<<z.getDrustvoPlivanjeBliskost()<<" Kolicina: "<<z.getDrustvoPlivanjeBroj()<<endl
        <<"Slobodno vreme: "<<z.getVreme()<<endl
        <<"Sati sna: "<<z.getSan()<<endl
        <<"Psihicko opustanje: "<<z.getOpustanje()<<endl
        <<"Ljubav: "<<z.getLjubavKvalitet()<<endl;
        return izlaz;
    }
    Zivot& operator =(const Zivot& z){
        ljubav=z.ljubav;
        kvalitet=z.kvalitet;
        porodica=z.porodica;
        drustvoplivanje=z.drustvoplivanje;
        drustvoskola=z.drustvoskola;
        vreme=z.vreme;
        san=z.san;
        opustanje=z.opustanje;
        return *this;
    }
    friend bool operator ==(const Zivot& z1, const Zivot& z2){
        if(z1.getPorodicaFinansije()!=z2.getPorodicaFinansije() || z1.getPorodicaSreca()!=z2.getPorodicaSreca()
           || z1.getDrustvoSkolaBliskost()!=z2.getDrustvoSkolaBliskost() || z1.getDrustvoSkolaBroj()!=z2.getDrustvoSkolaBroj()
           || z1.getDrustvoPlivanjeBliskost()!=z2.getDrustvoPlivanjeBliskost() || z1.getDrustvoPlivanjeBroj()!=z2.getDrustvoPlivanjeBroj()
           || z1.getVreme()!=z2.getVreme() || z1.getSan()!=z2.getSan()
           || z1.getOpustanje()!=z2.getOpustanje() || z1.getLjubavKvalitet()!=z2.getLjubavKvalitet())
            return false;
        else
            return true;
    }
    friend bool operator !=(const Zivot& z1, const Zivot& z2){
        if(z1==z2)
            return false;
        else
            return true;
    }
    friend bool operator >(Zivot& z1, Zivot& z2){
        if(z1.getKvalitet()>z2.getKvalitet())
            return true;
        else
            return false;
    }
    friend bool operator <(Zivot& z1, Zivot& z2){
        if(z1.getKvalitet()<z2.getKvalitet())
            return true;
        else
            return false;
    }
};


#endif // ZIVOT_HPP_INCLUDED
