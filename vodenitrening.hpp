#ifndef VODENITRENING_HPP_INCLUDED
#define VODENITRENING_HPP_INCLUDED
class vodeniTrening : public Treninzi{
private:
    int ukupno;
    int tehnika;
public:
    vodeniTrening(){
        ukupno=0;
        tehnika=0;
    }
    vodeniTrening(int a){
        tehnika=a/5;
        ukupno=0;
    }
    vodeniTrening(const vodeniTrening &a){
        ukupno=a.ukupno;
        tehnika=a.tehnika;
    }
    void treniraj5(){
        ukupno+=5;
        tehnika-=1;
    }
    void treniraj4(){
        ukupno+=4;
    }
    void treniraj3(){
        ukupno+=3;
        tehnika+=1;
    }
    void treniraj2(){
        ukupno+=2;
        tehnika+=3;
    }
    void treniraj1(){
        ukupno+=1;
        tehnika+=5;
    }
    int getTehnika()const{
        return tehnika;
    }
    int getUkupno()const{
        return ukupno;
    }
    void resetUkupno(){
        ukupno/=8;
        tehnika/=6;
    }
};


#endif // VODENITRENING_HPP_INCLUDED
