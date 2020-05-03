#ifndef DRUSTVOPLIVANJE_HPP_INCLUDED
#define DRUSTVOPLIVANJE_HPP_INCLUDED
class DrustvoPlivanje : public Drustvo{
public:
    DrustvoPlivanje(){
        broj=rand()%30+1;
        bliskost=rand()%10+1;
    }
    DrustvoPlivanje(int a, int b){
        if(a<0)
            broj=0;
        else
            broj=a;
        if(b>=10)
            bliskost=10;
        else if(b<=1)
            bliskost=1;
        else
            bliskost=b;
    }
    DrustvoPlivanje(const DrustvoPlivanje &a){
        broj=a.broj;
        bliskost=a.bliskost;
    }
};


#endif // DRUSTVOPLIVANJE_HPP_INCLUDED
