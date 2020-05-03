#ifndef DRZAVA_DEF
#define DRZAVA_DEF


class drzava
{
    private:
        int jacina;
        drzava country;
        int brMed;
    public:
        Drzava();
        Drzava(drzava,int);
        Drzava(const Drzava&);
        int brojMed()const;
        void setMed(int);
        void setDrzava(drzava);
        string nazivDrzave()const;
        int getJacinu()const;
};

#endif
