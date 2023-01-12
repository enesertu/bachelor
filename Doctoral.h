#ifndef DOCTORAL_H
#define DOCTORAL_H

#include "Master.h"

class Doctoral : public Master
{
	public:
		Doctoral(int,int, const string &,const string &,const string &,const string &);
		~Doctoral();
		void setNOAPhd(int);
		void setNOPPhd(int);
		int getNOAPhd(void) const;
		int getNOPPhd(void) const;
		virtual void printResume(void) const;
		virtual double performance(void);
	private:
		int NOAPhd;
		int NOPPhd;
};

#endif
