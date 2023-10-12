#include "ForClass.hpp"




void GoGoGo()
{
	double numOne = 0, numTwo = 0, numThree = 0;
	int choose = 0;
	int stop = 0;

	while (stop != 1)
	{
		std::cout << "\n������� ���������: ";
		std::cin >> numOne;
		std::cout << "������� �����������: ";
		std::cin >> numTwo;
		std::cout << "������� ���� ��� �����: ";
		std::cin >> numThree;
		std::cout << "�������� ��������: \n" <<
			"1 - ��������, 2 - ���������, 3 - ���������, 4 - �������,\n" <<
			"5 - ������� ����, 6 - ������� �����, 7 - ���������, 8 - ���������\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "�������� ����� � ������: " << obj.Summ() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 2:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "��������� ����� �� �����: " << obj.Sub() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 3:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "��������� ����� �� �����: " << obj.Mult() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 4:
		{
			if (numThree == 0)
			{
				std::cout << "�� ���� ������ ������ :(" << std::endl;
				break;
			}
			else
			{
				Drobb obj(numOne, numTwo, numThree);
				obj.Input(numOne, numTwo, numThree);
				std::cout << "\n�����: " << numOne << "/" << numTwo <<
					" = " << obj.Input() << std::endl;
				std::cout << "������� ����� �� �����: " << obj.Div() << std::endl;
				obj.RightOrNot();
				obj.FullPart();
				break;
			}
			break;
		}
		case 5:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "������� ����: " << obj.UnPluss() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 6:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			if (numOne / numTwo >= 0)
			{
				std::cout << "������� �����: " << obj.UnMin() << std::endl;
				obj.RightOrNot();
				obj.FullPart();
				break;
			}
			if (numOne / numTwo < 0)
			{
				std::cout << "������� �����: " << obj.UnMin() << std::endl;
				obj.RightOrNot();
				obj.FullPart();
				break;
			}
		}
		case 7:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "���������: " << obj.Inkrement() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 8:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\n�����: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "���������: " << obj.Dikrement() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		default:
		{
			break;
		}
		}

		std::cout << "\n����������? 1 - ���, 0 - ��: ";
		std::cin >> stop;

	}

}

Drobb::Drobb(double num1, double num2, double num3)
{
	upNum_ = num1;
	downNum_ = num2;
	anotherNum_ = num3;
}

void Drobb::Input(double num1, double num2, double num3)
{
	upNum_ = num1;
	downNum_ = num2;
	anotherNum_ = num3;
}
double Drobb::Input()
{
	return upNum_ / downNum_;
}

double Drobb::Summ()
{
	return (upNum_ / downNum_) + anotherNum_;
}
double Drobb::Sub()
{
	return (upNum_ / downNum_) - anotherNum_;
}
double Drobb::Mult()
{
	return (upNum_ / downNum_) * anotherNum_;
}
double Drobb::Div()
{
	return (upNum_ / downNum_) / anotherNum_;
}
double Drobb::UnPluss()
{
	return  upNum_ / downNum_;
}
double Drobb::UnMin()
{
	return  -(upNum_ / downNum_);
}
double Drobb::Inkrement()
{
	return  1 + (upNum_ / downNum_);
}
double Drobb::Dikrement()
{
	return  (upNum_ / downNum_) - 1;
}

//������
void Drobb::RightOrNot()const {
	if (upNum_ < downNum_) {
		std::cout << "����� ����������!\n";
	}
	else if (upNum_ > downNum_) {
		std::cout << "����� �� ����������!\n";
	}
	else if (upNum_ == downNum_)
	{
		std::cout << "����� - ��� ����� �����!\n";
	}
}

void Drobb::FullPart()const {
	int numm = 0;
	double numm2 = 0;
	numm = upNum_ / downNum_;
	numm2 = upNum_ / downNum_;
	std::cout << "����� ����� �����: " << numm << "\n";
	std::cout << "�� ����� ����� �����: " << numm2 - numm << "\n";
	std::cout << "�������� �����: " << downNum_ << " / " << upNum_ << "\n";
}