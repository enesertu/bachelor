#include "Master.h"

Master::Master(int NOAMaster, int NOPMaster, const string &first, const string &last, const string &uni, const string &title)
    : Bachelor(first, last, uni, title)
{
    setNOAMaster(NOAMaster);
    setNOPMaster(NOPMaster);
}

Master::~Master()
{
    //destructor
}

void Master::setNOAMaster(int noamaster)
{
    if(noamaster>0)
        NOAMaster = noamaster;
    else
        NOAMaster = 0;
}

void Master::setNOPMaster(int nopmaster)
{
    if(nopmaster>0)
        NOPMaster = nopmaster;
    else
        NOPMaster = 0;
}

int Master::getNOAMaster() const
{
    return NOAMaster;
}

int Master::getNOPMaster() const
{
    return NOPMaster;
}

void Master::printResume() const
{
    Bachelor::printResume();
    cout << "Number of articles for Master: " << getNOAMaster() << endl;
    cout << "Number of projects for Master: " << getNOPMaster() << endl;
}

double Master::performance()
{
    return 12.0 + 6.2 * getNOAMaster() + 14.5 * getNOPMaster();
}

