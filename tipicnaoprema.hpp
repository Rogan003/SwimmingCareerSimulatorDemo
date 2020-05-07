#ifndef TIPICNAOPREMA_HPP_INCLUDED
#define TIPICNAOPREMA_HPP_INCLUDED
class tipicnaOprema{
protected:
    int kvalitet;
    Marka marka;
public:
    tipicnaOprema(){
        int pom=rand()%3;
        if(pom==0)
            marka=TYR;
        else if(pom==1)
            marka=Speedo;
        else
            marka=Arena;
        kvalitet=marka+1;
    }
    tipicnaOprema(Marka a){
        marka=a;
        kvalitet=a+1;
    }
    tipicnaOprema(const tipicnaOprema &a){
        marka=a.marka;
        kvalitet=a.kvalitet;
    }
    int getKvalitet()const{
        return kvalitet;
    }
    string getMarka()const{
        if(marka==0)
            return "TYR";
        else if(marka==1)
            return "Speedo";
        else
            return "Arena";
    }
    void setMarka(Marka a){
        marka=a;
        kvalitet=a+1;
    }
};


#endif // TIPICNAOPREMA_HPP_INCLUDED
