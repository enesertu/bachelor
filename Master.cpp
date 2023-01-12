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
	string errorMessage = "!!NoA must be greater then 0!!";

	try{

		NOAMaster  = noamaster;
		if (NOAMaster < 0){
			throw errorMessage;
		}
	}

	catch (string x)
	{

		cout << x << endl;
		cout << "NOAMaster is automatically set 0!!!" << endl;
		NOAMaster = 0;

	}
}

void Master::setNOPMaster(int nopmaster)
{
	string errorMessage = "!!NoP must be greater then 0!!";

	try{

		NOPMaster  = nopmaster;
		if (NOAMaster < 0){
			throw errorMessage;
		}
	}

	catch (string x)
	{

		cout << x << endl;
		cout << "NOPMaster is automatically set 0!!!" << endl;
		NOPMaster = 0;

	}
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
