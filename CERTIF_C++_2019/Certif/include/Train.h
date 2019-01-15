#ifndef TRAIN_H
#define TRAIN_H


class Train
{
    public:
        Train();
        virtual ~Train();
    receiveCJCTemp(); // hlr38
    protected:

    private:
        double CJCTemp;
        bool CJCValidity;
        Roue r[4];
};

#endif // TRAIN_H
