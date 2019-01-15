#ifndef ROUE_H
#define ROUE_H


class Roue
{
    public:
        Roue();
        virtual ~Roue();
    void receiveTemperature();
    protected:

    private:
        double displayT;
        bool tempValidity;
        bool warning;
};

#endif // ROUE_H
