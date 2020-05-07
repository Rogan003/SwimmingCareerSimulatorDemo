#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <list>
using namespace std;
enum drzava{Egipat,Jamajka,Srbija,Hrvatska,Svajcarska,Austrija,Italija,Rusija,Nemacka,Brazil,Australija,Kanada,Kina,VelikaBritanija,Japan,SAD};
enum Marka{TYR,Speedo,Arena};
#include "drzava.hpp"
#include "trener.hpp"
#include "bazen.hpp"
#include "oprema.hpp"
#include "uprava.hpp"
#include "plivaci.hpp"
#include "klub.hpp"
#include "porodica.hpp"
#include "drustvo.hpp"
#include "drustvoskola.hpp"
#include "drustvoplivanje.hpp"
#include "slobodnovreme.hpp"
#include "spavanje.hpp"
#include "opustanje.hpp"
#include "ljubav.hpp"
#include "zivot.hpp"
#include "tipicnaoprema.hpp"
#include "licnaoprema.hpp"
#include "treninzi.hpp"
#include "vodenitrening.hpp"
#include "teretana.hpp"
#include "suvi.hpp"
#include "trenazniproces.hpp"
#include "plivac.hpp"
int main()
{
    srand(time(NULL));
    int nedelja=1,mesec=1,godina=2020,jacina,izbor,ss=0,brtakm[2],d1[10],d2[10],d3[10],d4[10],dolaz;
    int br[3]={0,0,0};
    char l;
    string ime,prezime;
    int godine;
    float rezultat,wrez=20.91,rez1=70.00,m[4],r[4];
    string provera;
    Plivac p1("","",0,0);
    cout<<"Zdravo! Unesite ime, prezime i godine plivaca: ";
    cin>>p1;
    cout<<"Da li ste nekad ranije bili plivac? Unesite jednostavno da ili ne: ";
    cin>>provera;
    if(provera=="da"){
        cout<<"Unesite rezultat koji ste imali: ";
        cin>>rezultat;
    }
    else
        rezultat=64.5;
    if(rezultat==64.5)
        p1.setPocetniRez(rezultat);
    else
        p1.setPocetniRez(rezultat+20);
    p1.setBRez(rezultat);
    bool odustajanje=false;
    Plivac p2("Protivnik","Jedan",p1.getGodine(),rezultat-5);
    Plivac p3("Protivnik","Dva",p1.getGodine(),rezultat-5);
    Plivac p4("Protivnik","Tri",p1.getGodine(),rezultat-5);
    system("cls");
    do{
        cout<<"Nedelja: "<<nedelja<<" Mesec: "<<mesec<<" Godina: "<<godina<<"("<<p1.getGodine()<<" godina)"<<endl;
        if(nedelja==1 && mesec==1){
            cout<<"Da li zelite da dodate bazen: ";
            string rec;
            cin>>rec;
            if(rec=="da"){
                cout<<"Unesite udaljenost: ";
                int udalj;
                cin>>udalj;
                float us=(rand()%400+100)/100.00;
                p1.dodajBazen(us,udalj);
            }
            cout<<"Unesite redni broj bazena na kom zelite da trenirate sl godine: ";
            int baz;
            cin>>baz;
            bool pomocnaprom=false;
            while(!pomocnaprom){
                pomocnaprom=p1.izaberBazen(baz);
                if(pomocnaprom==false){
                    cout<<"Nepostojeci redni broj bazena! Pokusajte ponovo: "<<endl;
                    cout<<"Unesite redni broj bazena na kom zelite da trenirate sl godine: ";
                    cin>>baz;
                }
            }
            cout<<"Unesite koju opremu zelite da kupite(redom karbon,naocare,kapa,mrezica)(0-nista, 1-TYR, 2-Speedo, 3-Arena): ";
            cin>>p1.getOprema();
            cout<<"Koliko takmicenja zelite da imate ove godine: ";
            cin>>brtakm[0];
            cout<<"Koliko njih ce biti ekstremno bitno: ";
            cin>>brtakm[1];
        }
        if(brtakm[1]>brtakm[0])
            brtakm[1]=brtakm[0];
        int i=0;
        if(mesec!=1 || nedelja!=1)
            i=2;
        for(;i<2;++i){
            if(brtakm[0]==0){
               brtakm[1]=0;
               break;
            }
            for(i=0;i<brtakm[0];++i){
               cout<<i+1<<". mesec takmicenja: ";
               cin>>d1[i];
               cout<<"Nedelja: ";
               cin>>d2[i];
            }
            if(brtakm[1]==0)
                break;
            for(i=0;i<brtakm[1];++i){
                int v[brtakm[1]];
                cout<<"Koja takmicenja ce biti bitna: ";
                cin>>v[i];
                d3[i]=d1[v[i]-1];
                d4[i]=d2[v[i]-1];
            }
        }
        cout<<"Takmicenja su u:"<<endl;
        for(i=0;i<brtakm[0];++i){
            cout<<d1[i]<<". mesec "<<d2[i]<<". nedelja"<<endl;
        }
        cout<<"Bitna su u:"<<endl;
        for(i=0;i<brtakm[1];++i){
            cout<<d3[i]<<". mesec "<<d4[i]<<". nedelja"<<endl;
        }
        cout<<"Unesite koliko jako zelite da trenirate(sve od 0-5(0-odmor), prvo voda, izbor teretana ili suvi, pa jacina tamo 0-5): ";
        cin>>p1.getTrening();
        int pom1=rand()%10;
            if(pom1==0)
                p2.odmaraj();
            else if(pom1<=2)
                p2.vodaTreniraj1();
            else if(pom1==3)
                p2.vodaTreniraj2();
            else if(pom1==4)
                p2.vodaTreniraj3();
            else if(pom1<=6)
                p2.vodaTreniraj4();
            else
                p2.vodaTreniraj5();
            if(pom1!=0){
                pom1=rand()%10+1;
                if(pom1%2==0){
                    if(pom1==2)
                        p2.teretanaTreniraj1();
                    if(pom1==4)
                        p2.teretanaTreniraj2();
                    if(pom1==6)
                        p2.teretanaTreniraj3();
                    if(pom1==8)
                        p2.teretanaTreniraj4();
                    else
                        p2.teretanaTreniraj5();
                }
            if(pom1%2==1){
                if(pom1==1)
                    p2.suviTreniraj1();
                if(pom1==3)
                    p2.suviTreniraj2();
                if(pom1==5)
                    p2.suviTreniraj3();
                if(pom1==7)
                    p2.suviTreniraj4();
                else
                    p2.suviTreniraj5();
            }
            }
            pom1=rand()%10;
            if(pom1==0)
                p3.odmaraj();
            else if(pom1<=2)
                p3.vodaTreniraj1();
            else if(pom1==3)
                p3.vodaTreniraj2();
            else if(pom1==4)
                p3.vodaTreniraj3();
            else if(pom1<=6)
                p3.vodaTreniraj4();
            else
                p3.vodaTreniraj5();
            if(pom1!=0){
                pom1=rand()%10+1;
                if(pom1%2==0){
                    if(pom1==2)
                        p3.teretanaTreniraj1();
                    if(pom1==4)
                        p3.teretanaTreniraj2();
                    if(pom1==6)
                        p3.teretanaTreniraj3();
                    if(pom1==8)
                        p3.teretanaTreniraj4();
                    else
                        p3.teretanaTreniraj5();
                }
                if(pom1%2==1){
                    if(pom1==1)
                        p3.suviTreniraj1();
                    if(pom1==3)
                        p3.suviTreniraj2();
                    if(pom1==5)
                        p3.suviTreniraj3();
                    if(pom1==7)
                        p3.suviTreniraj4();
                    else
                        p3.suviTreniraj5();
                }
            }
            pom1=rand()%10;
            if(pom1==0)
                p4.odmaraj();
            else if(pom1<=2)
                p4.vodaTreniraj1();
            else if(pom1==3)
                p4.vodaTreniraj2();
            else if(pom1==4)
                p4.vodaTreniraj3();
            else if(pom1<=6)
                p4.vodaTreniraj4();
            else
                p4.vodaTreniraj5();
            if(pom1!=0){
                pom1=rand()%10+1;
                if(pom1%2==0){
                    if(pom1==2)
                        p4.teretanaTreniraj1();
                    if(pom1==4)
                        p4.teretanaTreniraj2();
                    if(pom1==6)
                        p4.teretanaTreniraj3();
                    if(pom1==8)
                        p4.teretanaTreniraj4();
                    else
                        p4.teretanaTreniraj5();
                }
                if(pom1%2==1){
                    if(pom1==1)
                        p4.suviTreniraj1();
                    if(pom1==3)
                        p4.suviTreniraj2();
                    if(pom1==5)
                        p4.suviTreniraj3();
                    if(pom1==7)
                        p4.suviTreniraj4();
                    else
                        p4.suviTreniraj5();
                }
            }
        for(i=0;i<brtakm[0];++i){
            if(mesec==d1[i] && nedelja==d2[i]){
               cout<<"Vreme je za takmicenje!"<<endl;
               bool bitnost=false;
               for(int sklj=0;sklj<brtakm[1];++sklj)
                    if(mesec==d3[sklj] && nedelja==d4[sklj])
                        bitnost=true;
               float pom=p1.getRezultat(bitnost,true);
                int pl=0;
                int je=0;
                int j;
                m[3]=pom;
                m[0]=p2.getRezultat(bitnost,false);
                m[1]=p3.getRezultat(bitnost,false);
                m[2]=p4.getRezultat(bitnost,false);
                for(je=0;je<4;++je){
                r[je]=600;
                for(j=0;j<4;++j){
                   if(m[j]<r[je]){
                    for(int p=0;p<4;++p){
                      if(m[j]==r[p]){
                        ++pl;
                      }
                    }
                   if(pl==0)
                    r[je]=m[j];
                   }
                pl=0;
                }
                }
                for(j=0;j<4;++j){
                    cout<<j+1<<". mesto: "<<r[j]<<endl;
                    if(r[j]<wrez){
                        cout<<"OVO JE NOVI SVETSKI REKORD!!"<<endl;
                    wrez=r[j];
                }
                    if(r[j]==m[3]){
                        cout<<"--Ovo je tvoj rezultat!"<<endl;
                        if(pom<p1.getBRez()){
                            cout<<"--Novi najbolji rezultat!"<<endl;
                            p1.setBRez(pom);
                        }
                    if(j!=3)
                       br[j]+=1;
                }
                }
                cout<<"Pritisnite bilo sta da nastavimo: ";
                cin>>l;
            }
        }
        ++nedelja;
        if(nedelja==5){
            mesec++;
            nedelja=1;
        }
        if(mesec==13){
            dolaz=p1.getDolaznost();
            p1.godisnji(2);
            mesec=1;
            godina++;
            cout<<"Da li zelite da odustanete? Napisite da da odustanete: ";
            string pr;
            cin>>pr;
            if(pr=="da")
                odustajanje=true;
            else{
                cout<<"Da li zelite da promenite trenera?: ";
                string pomm;
                cin>>pomm;
                if(pomm=="da"){
                    cout<<"Unesite 1 za novog trenera, a 2 za vec postojeceg: ";
                    int brojtr;
                    cin>>brojtr;
                    string imeTrenera;
                    cout<<"Unesite ime trenera: ";
                    cin>>imeTrenera;
                    if(brojtr==1){
                        float nes=(rand()%400+100)/100.00;
                        p1.dodajTrenera(imeTrenera,nes);
                    }
                    bool pomoc=false;
                    while(!pomoc){
                        pomoc=p1.izaberiTrenera(imeTrenera);
                        if(!pomoc){
                            cout<<"Nepostojeci trener! Izaberite ponovo: "<<endl;
                            cout<<"Unesite ime trenera: ";
                            cin>>imeTrenera;
                        }
                    }
                }
            }
            p1.povecajGodine();
        }
        system("cls");
    }while(odustajanje==false);
    p1.setDolaznost(dolaz);
    cout<<"Svaka cast na vasoj plivackoj karijeri!"<<endl;
    Plivac p5=p1;
    if(p1!=p2 && p1!=p3 && p1!=p4 && p1==p5)
        cout<<"Bili ste jedinstven plivac!"<<endl;
    if(p1>p2 && p1>p3 && p1>p4)
        cout<<"Bili ste najbolji plivac!"<<endl;
    else{
        int pomocna=1;
        if(p1<p2)
            pomocna++;
        if(p1<p3)
            pomocna++;
        if(p1<p4)
            pomocna++;
        cout<<"Bili ste "<<pomocna<<". plivac!"<<endl;
    }
    cout<<"Vas najbolji rezultat: "<<p1.getBRez()<<endl;
    cout<<"Zlatne medalje: "<<br[0]<<" Srebrne medalje: "<<br[1]<<" Bronzane medalje: "<<br[2]<<endl;
    cout<<p1;
    return 0;
}
