#ifndef FORCLASSHPP
#define FPRCLASSHPP

#include "Head.hpp"

class Drobb
{
public:

	//����������� ������
	Drobb(double num1, double num2, double num3) ;

	void Input(double num1, double num2, double num3) ;

	double Input() ;

	//��������
	double Summ();

	double Sub();
	
	double Mult();
	
	double Div();
	
	double UnPluss();
	
	double UnMin();
	
	double Inkrement();
	
	double Dikrement();

	//������
	void RightOrNot()const;

	void FullPart()const;


private:
	double upNum_;
	double downNum_;
	double anotherNum_;
};


void GoGoGo();


#endif 

