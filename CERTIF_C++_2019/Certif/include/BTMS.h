#ifndef BTMS_H
#define BTMS_H


class BTMS
{
    public:
        BTMS();
        virtual ~BTMS();

    protected:

    private:
        bool globalHotWarning;
        Train t[3];
};

#endif // BTMS_H
