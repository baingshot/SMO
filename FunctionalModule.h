#include <iostream>
#include <iomanip>
#include <conio.h>
#include <vector>
#include <ctime>
#include <cmath>
using namespace std;

struct inbox
{
	int n;
	double t;
public:
	inbox(int nomob, double tob){n = nomob; t = tob;}
	~inbox(){}
};

class Istochnik
{
public:
	//friend FuncModule;
	int kol, kobr, kotk;
	double tpost, tay, tog, tnapr;
	double lambda;
	vector<double> timesP;
	vector<double> timesB;
public:
	Istochnik();
	~Istochnik();

	void made();
	void del();
};

class Vxod
{
public:
	//friend FuncModule;
	friend Istochnik;
	vector<Istochnik> vx;
	double lambdaVX;
public:
	Vxod(int n, double lambda);
	~Vxod();

	void made();
	void del();
	int find_first_zayavka();
	bool kminlessthen( int n );
};

class MyBuffer
{
public:
	//friend FuncModule;
	vector<inbox> buf;
	int size;
	int inbuf;
public:
	MyBuffer(int n);
	~MyBuffer();

	void zapic(int nomob, double tob);
	void read(int& nomob, double& tob);
	void del();
};

class Pribor
{
public:
	//friend FuncModule;
	double tosvob;
	double workingtime;
public:
	Pribor();
	~Pribor();

	void del();
};

class Vixod{
public:
	//friend FuncModule;
	friend Pribor;
	vector<Pribor> vix;
public:
	Vixod( int n);
	~Vixod();

	void del();
	bool svobodniy_exists(double tpost);
	void find_perviy_svobodniy_pribor_po_kolcy(int& ukaz, double tpost);
	void find_perviy_osvob_pribor( int& ukaz, double tpost );
};


//--------------------------Istochnik
Istochnik::Istochnik()
{
	kol=0;
	kobr=0;
	kotk=0;
	tpost=0;
	tay=0;
	tog=0;
	tnapr=0;
	lambda= 1;
}
Istochnik::~Istochnik()
{
}
void Istochnik::made()
{
	double R1,R2,R3;
	R1= rand() / double( RAND_MAX );
	R2= rand() / double( RAND_MAX );
	R3= rand() / double( RAND_MAX );
	tay= ((-1)/lambda)*log(R1*R2*R3);
	tpost+= tay;
}
void Istochnik::del()
{
	kol=0;
	kobr=0;
	kotk=0;
	tpost=0;
	tay=0;
	tog=0;
	tnapr=0;
	lambda= 1;
}
//-------------------------Vxod
Vxod::Vxod(int n, double lambdavx)
{
	for( int i =0 ;i <n; i++)
	{
	vx.push_back(Istochnik());
	vx[i].lambda = lambdavx;
	}
	lambdaVX=lambdavx;
}
Vxod::~Vxod()
{
}
int Vxod::find_first_zayavka()
{
	int min=0;
	for(int i =0 ; i< vx.size(); i++)
	{
		if(vx[i].tpost < vx[min].tpost) min= i;
	}
	return min;
}
bool Vxod::kminlessthen( int n )
{
	bool less = true;
	for( int i = 0; i< vx.size(); i++ )
	{
		if( vx[i].kol > (n-1))
		{
			less = false;
			break;
		}
	}
	return less;
}
void Vxod::made()
{
	for(int i=0; i< vx.size();i++)
	{
		vx[i].made();
	}
}
void Vxod::del()
{
	for(int i=0; i< vx.size();i++)
	{
		vx[i].del();
		vx[i].lambda=lambdaVX;
	}
}

//-------------------------Buffer
MyBuffer::MyBuffer( int n )
{
	size = n;
	inbuf = 0;
}
MyBuffer::~MyBuffer()
{
}
void MyBuffer:: zapic(int nomob, double tob)
{
	if(inbuf<size)
	{
	inbox tmp(nomob,tob);
	buf.push_back(tmp);
	inbuf++;
	}
}

void MyBuffer ::read(int& nomb, double& tob)
{
	if( buf.size()!= 0 && inbuf>0)
	{
		nomb = buf[buf.size()-1].n;
		tob = buf[buf.size()-1].t;
		buf.pop_back();
		inbuf--;
	}

}

void MyBuffer:: del()
{
	inbuf=0;
	buf.erase(buf.begin(),buf.end());
}

//-------------------------Pribor
Pribor::Pribor()
{
	tosvob=0;
}
Pribor::~Pribor()
{
}
void Pribor::del()
{
	tosvob=0;
	workingtime=0;
}

//Vixod
Vixod::Vixod( int n ){
	for( int i =0 ;i <n; i++)
	{
	vix.push_back(Pribor());
	}
}
Vixod::~Vixod(){}
void Vixod::del(){
	for(int i=0; i< vix.size();i++)
	{
		vix[i].del();
	}
}

bool Vixod::svobodniy_exists(double tpost) //есть ли свободные приборы
{
	bool find = false;
	for( int i=0 ; i< vix.size(); i++ )
	{
		if(vix[i].tosvob < tpost) 
		{
			find= true;
			break;
		}
	}
	return find;
}

void Vixod::find_perviy_svobodniy_pribor_po_kolcy(int& ukaz, double tpost){ //находим первый свободный прибор по кольцу
	bool find = false;

	if((ukaz == (vix.size()-1))&& (vix.size()>1))
	{
		ukaz=0;
	}
	else
	{
		ukaz++;
	}
	for( int i=ukaz ; i< vix.size(); i++ )
	{
		if(vix[i].tosvob < tpost) //ищем прибор, который освободился раньше,чем пришла заявка, начиная с указателя и до конца списка приборов
		{
			find= true;
			ukaz= i;	
			break;
		}
	}
	if (find == false){
	for( int i=0 ; i< ukaz; i++ )
	{
		if(vix[i].tosvob < tpost) //ищем прибор, который освободился раньше, чем пришла заявка, начиная с начала списка приборов и до укзаателя
		{
			find= true;
			ukaz= i;
			break;
		}
	}
	}
	return;
}

void Vixod::find_perviy_osvob_pribor( int& ukaz, double tpost ) //находим прибор, который раньше всех освободился
{
	int min=0;
	for( int i=0 ; i< vix.size(); i++ )
	{
		if(vix[i].tosvob < tpost) //ищем приборы, которые освободятся раньше, чем пришла заявка
		{
			if(vix[i].tosvob < vix[min].tosvob) min=i;
		}
	}
	ukaz= min;
	return;
}





