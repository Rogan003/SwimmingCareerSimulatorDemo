#ifndef LJUBAV_HPP_INCLUDED
#define LJUBAV_HPP_INCLUDED
class Ljubav{
private:
    bool postoji;
    int kvalitet;
public:
    Ljubav(){
        int pom=rand()%2;
        if(pom==0){
            postoji=false;
            kvalitet=0;
        }
        else{
            postoji=true;
            kvalitet=rand()%5+1;
        }
    }
    Ljubav(bool b, int a){
        postoji=b;
        if(postoji==false)
            kvalitet=0;
        else{
            if(a>=5)
                kvalitet=5;
            else if(a<=1)
                kvalitet=1;
            else
                kvalitet=a;
        }
    }
    Ljubav(const Ljubav &a){
        postoji=a.postoji;
        kvalitet=a.kvalitet;
    }
    int getKvalitet()const{
        return kvalitet;
    }
    bool getPostoji()const{
        return postoji;
    }
    void setPostoji(bool a){
        postoji=a;
        if(postoji==false)
            kvalitet=0;
    }
    void setKvalitet(int a){
        if(postoji==false)
            kvalitet=0;
        else{
            if(a>=5)
                kvalitet=5;
            else if(a<=1)
                kvalitet=1;
            else
                kvalitet=a;
        }
    }
};


#endif // LJUBAV_HPP_INCLUDED
