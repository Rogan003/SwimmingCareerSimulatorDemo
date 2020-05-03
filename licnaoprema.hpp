#ifndef LICNAOPREMA_HPP_INCLUDED
#define LICNAOPREMA_HPP_INCLUDED
class licnaOprema{
private:
    list <Karbon> karbon;
    int brKarbon;
    list <Naocare> naocare;
    int brNaocare;
    list <Kapa> kapa;
    int brKapa;
    list <Mrezica> mrezica;
    int brMrezica;
    float kvalitet;
    float poskval;
public:
    licnaOprema(){
        brKarbon=1;
        brNaocare=1;
        brKapa=1;
        brMrezica=1;
        list <Karbon>::iterator i=karbon.begin();
        Karbon k1;
        karbon.insert(i,k1);
        list <Naocare>::iterator j=naocare.begin();
        Naocare n1;
        naocare.insert(j,n1);
        list <Kapa>::iterator k=kapa.begin();
        Kapa k2;
        kapa.insert(k,k2);
        list <Mrezica>::iterator l=mrezica.begin();
        Mrezica m1;
        mrezica.insert(l,m1);
    }
    licnaOprema(Marka a, Marka b, Marka c, Marka d){
        brKarbon=1;
        brNaocare=1;
        brKapa=1;
        brMrezica=1;
        list <Karbon>::iterator i=karbon.begin();
        Karbon k1(a);
        karbon.insert(i,k1);
        list <Naocare>::iterator j=naocare.begin();
        Naocare n1(b);
        naocare.insert(j,n1);
        list <Kapa>::iterator k=kapa.begin();
        Kapa k2(c);
        kapa.insert(k,k2);
        list <Mrezica>::iterator l=mrezica.begin();
        Mrezica m1(d);
        mrezica.insert(l,m1);
    }
    licnaOprema(const licnaOprema &a){
        kapa=a.kapa;
        karbon=a.karbon;
        mrezica=a.mrezica;
        naocare=a.naocare;
        brKarbon=a.brKarbon;
        brNaocare=a.brNaocare;
        brKapa=a.brKapa;
        brMrezica=a.brMrezica;
    }
    float getPoskval()const{
        return poskval;
    }
    int getBrKarbon()const{
        return brKarbon;
    }
    int getBrMrezica()const{
        return brMrezica;
    }
    int getBrKapa()const{
        return brKapa;
    }
    int getBrNaocare()const{
        return brNaocare;
    }
    int getKarbonKvalitet(int i){
        list <Karbon>::iterator j=karbon.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getKvalitet();
    }
    int getNaocareKvalitet(int i){
        list <Naocare>::iterator j=naocare.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getKvalitet();
    }
    int getKapaKvalitet(int i){
        list <Kapa>::iterator j=kapa.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getKvalitet();
    }
    int getMrezicaKvalitet(int i){
        list <Mrezica>::iterator j=mrezica.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getKvalitet();
    }
    string getKarbonMarka(int i){
        list <Karbon>::iterator j=karbon.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getMarka();
    }
    string getNaocareMarka(int i){
        list <Naocare>::iterator j=naocare.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getMarka();
    }
    string getKapaMarka(int i){
        list <Kapa>::iterator j=kapa.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getMarka();
    }
    string getMrezicaMarka(int i){
        list <Mrezica>::iterator j=mrezica.begin();
        for(int k=1;k<i;++j,++k){}
        return j->getMarka();
    }
    void setKarbonMarka(Marka a){
        Karbon k1(a);
        karbon.push_back(k1);
        brKarbon++;
    }
    void setNaocareMarka(Marka a){
        Naocare k1(a);
        naocare.push_back(k1);
        brNaocare++;
    }
    void setKapaMarka(Marka a){
        Kapa k1(a);
        kapa.push_back(k1);
        brKapa++;
    }
    void setMrezicaMarka(Marka a){
        Mrezica k1(a);
        mrezica.push_back(k1);
        brMrezica++;
    }
    float getKvalitet(bool igrac){
        int i,j,k,l;
        if(igrac==true){
            cout<<"Izaberite karbon(redni broj):";
            list<Karbon>::iterator it=karbon.begin();
            for(int o=1;it!=karbon.end();++it,++o)
                cout<<o<<". "<<it->getMarka()<<endl;
            cin>>i;
            cout<<"---"<<endl;
            cout<<"Izaberite naocare(redni broj):";
            list<Naocare>::iterator it2=naocare.begin();
            for(int o=1;it2!=naocare.end();++it2,++o)
                cout<<o<<". "<<it2->getMarka()<<endl;
            cin>>j;
            cout<<"---"<<endl;
            cout<<"Izaberite kapu(redni broj):";
            list<Kapa>::iterator it3=kapa.begin();
            for(int o=1;it3!=kapa.end();++it3,++o)
                cout<<o<<". "<<it3->getMarka()<<endl;
            cin>>k;
            cout<<"---"<<endl;
            cout<<"Izaberite mrezicu(redni broj):";
            list<Mrezica>::iterator it4=mrezica.begin();
            for(int o=1;it4!=mrezica.end();++it4,++o)
                cout<<o<<". "<<it4->getMarka()<<endl;
            cin>>l;
        }
        else
            i=1,j=1,k=1,l=1;
        kvalitet=(getKarbonKvalitet(i)*6+getNaocareKvalitet(j)+getKapaKvalitet(k)+getMrezicaKvalitet(l)*10)/90.00;
        poskval=kvalitet;
        return kvalitet;
    }
    friend ostream& operator<<(ostream& izlaz, licnaOprema &o){
        izlaz<<"Licna oprema: "<<endl
        <<"Karbon: "<<endl;
        for(int i=1;i<=o.getBrKarbon();++i)
            izlaz<<i<<". "<<o.getKarbonMarka(i)<<endl;
        izlaz<<"Kapa: "<<endl;
        for(int i=1;i<=o.getBrKapa();++i)
            izlaz<<i<<". "<<o.getKapaMarka(i)<<endl;
        izlaz<<"Naocare: "<<endl;
        for(int i=1;i<=o.getBrNaocare();++i)
            izlaz<<i<<". "<<o.getNaocareMarka(i)<<endl;
        izlaz<<"Mrezica: "<<endl;
        for(int i=1;i<=o.getBrMrezica();++i)
            izlaz<<i<<". "<<o.getMrezicaMarka(i)<<endl;
        return izlaz;
    }
    friend istream& operator>>(istream& ulaz, licnaOprema &l){
        int niz[4];
        ulaz>>niz[0]>>niz[1]>>niz[2]>>niz[3];
        if(niz[0]==1)
            l.setKarbonMarka(TYR);
        else if(niz[0]==2)
            l.setKarbonMarka(Speedo);
        else if(niz[0]==3)
            l.setKarbonMarka(Arena);
        if(niz[1]==1)
            l.setNaocareMarka(TYR);
        else if(niz[1]==2)
            l.setNaocareMarka(Speedo);
        else if(niz[1]==3)
            l.setNaocareMarka(Arena);
        if(niz[2]==1)
            l.setKapaMarka(TYR);
        else if(niz[2]==2)
            l.setKapaMarka(Speedo);
        else if(niz[2]==3)
            l.setKapaMarka(Arena);
        if(niz[3]==1)
            l.setMrezicaMarka(TYR);
        else if(niz[3]==2)
            l.setMrezicaMarka(Speedo);
        else if(niz[3]==3)
            l.setMrezicaMarka(Arena);
        return ulaz;
    }
    licnaOprema& operator =(const licnaOprema &l){
        karbon=l.karbon;
        naocare=l.naocare;
        mrezica=l.mrezica;
        kapa=l.kapa;
        brKarbon=l.brKarbon;
        brKapa=l.brKapa;
        brMrezica=l.brMrezica;
        brNaocare=l.brNaocare;
        kvalitet=l.kvalitet;
        return *this;
    }
    friend bool operator >(licnaOprema& l1, licnaOprema& l2){
        if(l1.getPoskval()>l2.getPoskval())
            return true;
        else
            return false;
    }
    friend bool operator <(licnaOprema& l1, licnaOprema& l2){
        if(l1.getPoskval()<l2.getPoskval())
            return true;
        else
            return false;
    }
};


#endif // LICNAOPREMA_HPP_INCLUDED
