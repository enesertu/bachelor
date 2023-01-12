#include "Doctoral.h"

Doctoral::Doctoral(int NOAPhd, int NOPPhd, const string &first, const string &last, const string &uni, const string &title)
    : Master(NOAPhd, NOPPhd, first, last, uni, title) 
{
    setNOAPhd(NOAPhd);
    setNOPPhd(NOPPhd);
}

Doctoral::~Doctoral()
{
    //destructor
}

void Doctoral::setNOAPhd(int noaphd)
{
    if(noaphd>0)
        NOAPhd = noaphd;
    else
        NOAPhd = 0;
}

void Doctoral::setNOPPhd(int nopPhd)
{
    if(nopPhd>0)
        NOPPhd = nopPhd;
    else
        NOPPhd = 0;
}

int Doctoral::getNOAPhd() const
{
    return NOAPhd;
}

int Doctoral::getNOPPhd() const
{
    return NOPPhd;
}

void Doctoral::printResume() const
{
    Master::printResume();
    cout << "Number of articles for Ph.D: " << getNOAPhd() << endl;
    cout << "Number of projects for Ph.D: " << getNOPPhd() << endl;
}

double Doctoral::performance()
{
    return 12.0 + 6.2 * getNOAPhd() + 14.5 * getNOPPhd() + Master::performance();
}

