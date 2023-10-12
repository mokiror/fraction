#include "ForClass.hpp"




void GoGoGo()
{
	double numOne = 0, numTwo = 0, numThree = 0;
	int choose = 0;
	int stop = 0;

	while (stop != 1)
	{
		std::cout << "\nВведите числитель: ";
		std::cin >> numOne;
		std::cout << "Введите знаменатель: ";
		std::cin >> numTwo;
		std::cout << "Введите чило для дроби: ";
		std::cin >> numThree;
		std::cout << "Выберите действие: \n" <<
			"1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление,\n" <<
			"5 - унарный плюс, 6 - унарный минус, 7 - инкремент, 8 - декркмент\n";
		std::cin >> choose;

		switch (choose)
		{
		case 1:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Сложение дроби с числом: " << obj.Summ() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 2:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Вычитание числа из дроби: " << obj.Sub() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 3:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Умножение числа из дробь: " << obj.Mult() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 4:
		{
			if (numThree == 0)
			{
				std::cout << "На ноль делить нельзя :(" << std::endl;
				break;
			}
			else
			{
				Drobb obj(numOne, numTwo, numThree);
				obj.Input(numOne, numTwo, numThree);
				std::cout << "\nДробь: " << numOne << "/" << numTwo <<
					" = " << obj.Input() << std::endl;
				std::cout << "Деление дроби на число: " << obj.Div() << std::endl;
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
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Унарный плюс: " << obj.UnPluss() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 6:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			if (numOne / numTwo >= 0)
			{
				std::cout << "Унарный минус: " << obj.UnMin() << std::endl;
				obj.RightOrNot();
				obj.FullPart();
				break;
			}
			if (numOne / numTwo < 0)
			{
				std::cout << "Унарный минус: " << obj.UnMin() << std::endl;
				obj.RightOrNot();
				obj.FullPart();
				break;
			}
		}
		case 7:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Инкремент: " << obj.Inkrement() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		case 8:
		{
			Drobb obj(numOne, numTwo, numThree);
			obj.Input(numOne, numTwo, numThree);
			std::cout << "\nДробь: " << numOne << "/" << numTwo <<
				" = " << obj.Input() << std::endl;
			std::cout << "Дикремент: " << obj.Dikrement() << std::endl;
			obj.RightOrNot();
			obj.FullPart();
			break;
		}
		default:
		{
			break;
		}
		}

		std::cout << "\nПродолжить? 1 - нет, 0 - да: ";
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

//методы
void Drobb::RightOrNot()const {
	if (upNum_ < downNum_) {
		std::cout << "Дробь правильная!\n";
	}
	else if (upNum_ > downNum_) {
		std::cout << "Дробь не правильная!\n";
	}
	else if (upNum_ == downNum_)
	{
		std::cout << "Дробь - это целое число!\n";
	}
}

void Drobb::FullPart()const {
	int numm = 0;
	double numm2 = 0;
	numm = upNum_ / downNum_;
	numm2 = upNum_ / downNum_;
	std::cout << "Целая часть дроби: " << numm << "\n";
	std::cout << "Не целая часть дроби: " << numm2 - numm << "\n";
	std::cout << "Обратная дробь: " << downNum_ << " / " << upNum_ << "\n";
}