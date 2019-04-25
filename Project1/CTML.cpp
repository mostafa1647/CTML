#include "CTML.h"



CTML::CTML()
{
	out.open("CTML.html", ios::out);
	text = "<!DOCTYPE html><html>";
}


void CTML::set_head()
{
	cout << "Enter <head> tag please\n";
	string temp, temp2;
	temp = "<head>";
	temp2 = "<title>";
	temp = temp + temp2;
	cout << "Enter <title> tag's value\n";
	cin >> temp2;
	temp = temp + temp2;
	temp2 = "</title></head>";
	temp = temp + temp2;
	text = text + temp;
}

void CTML::set_body()
{
	string temp;
	char a;
	cout << "Do you want to add background color?(Y/N)\n";
	cin >> a;
	if (a == 'Y')
	{
		string color;
		cout << "Enter color\n";
		cin >> color;
		temp = "<body style=\"background-color:" + color + ";\">";
		text = text + temp;
	}
	else if (a == 'N')
	{
		temp = "<body>";
		text = text + temp;
	}
	int menu;
	cout << "Note: if you want to add <hr> or <br> elements inside of other elements please enter this tag in the value of the tag\n";
	while (true)
	{
		cout << "Enter the number of tag you want to add\n";
		cout << "1. <p>\n";
		cout << "2. <h1>\n";
		cout << "3. <h2>\n";
		cout << "4. <h3>\n";
		cout << "5. <h4>\n";
		cout << "6. <h5>\n";
		cout << "7. <h6>\n";
		cout << "8. <hr>\n";
		cout << "9. <br>\n";
		cout << "0. finish\n";
		cin >> menu;
		if (menu == 1)
		{
			this->p();
		}
		else if (menu == 2)
		{
			this->h1();
		}
		else if (menu == 3)
		{
			this->h2();
		}
		else if (menu == 4)
		{
			this->h3();
		}
		else if (menu == 5)
		{
			this->h4();
		}
		else if (menu == 6)
		{
			this->h5();
		}
		else if (menu == 7)
		{
			this->h6();
		}
		else if (menu == 8)
		{
			this->hr();
		}
		else if (menu == 9)
		{
			this->br();
		}
		else if (menu == 0)
		{
			break;
		}
	}
	temp = "</body>";
	text = text + temp;
}

void CTML::p()
{
	string p, color;
	cout << "Enter <p> element value\n";
	cin >> p;
	cout << "Enter the color of element\n";
	cin >> color;
	string temp;
	temp = "<p style=\"color:" + color + ";\">" + p + "</p>";
	text = text + temp;
}

void CTML::h1()
{
	string h1, color, temp;
	cout << "Enter <h1> element value\n";
	cin >> h1;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h1 style=\"color:" + color + ";\">" + h1 + "</h1>";
	text = text + temp;
}

void CTML::h2()
{
	string h2, color, temp;
	cout << "Enter <h2> element value\n";
	cin >> h2;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h2 style=\"color:" + color + ";\">" + h2 + "</h1>";
	text = text + temp;
}

void CTML::h3()
{
	string h3, color, temp;
	cout << "Enter <h3> element value\n";
	cin >> h3;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h3 style=\"color:" + color + ";\">" + h3 + "</h1>";
	text = text + temp;
}

void CTML::h4()
{
	string h4, color, temp;
	cout << "Enter <h4> element value\n";
	cin >> h4;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h4 style=\"color:" + color + ";\">" + h4 + "</h1>";
	text = text + temp;
}

void CTML::h5()
{
	string h5, color, temp;
	cout << "Enter <h5> element value\n";
	cin >> h5;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h5 style=\"color:" + color + ";\">" + h5 + "</h1>";
	text = text + temp;
}

void CTML::h6()
{
	string h6, color, temp;
	cout << "Enter <h6> element value\n";
	cin >> h6;
	cout << "Enter the color of element\n";
	cin >> color;
	temp = "<h6 style=\"color:" + color + ";\">" + h6 + "</h1>";
	text = text + temp;
}

void CTML::hr()
{
	string temp = "<hr>";
	text = text + temp;
}

void CTML::br()
{
	string temp = "<br>";
	text = text + temp;
}

void CTML::finish()
{
	text = text + "</html>";
	out << text;
}

CTML::~CTML()
{
	out.close();
}
