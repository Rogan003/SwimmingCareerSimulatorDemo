#ifndef TIPICNAOPREMA_HPP_INCLUDED
#define TIPICNAOPREMA_HPP_INCLUDED
class tipicnaOprema{
protected:
    int kvalitet;
    Marka marka;
public:
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
