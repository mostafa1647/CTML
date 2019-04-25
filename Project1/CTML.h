#pragma once
#include <iostream>
#include <string.h>
#include <string>
#include <fstream>

using namespace std;

class CTML
{
	ofstream out;
	string text;
public:
	CTML();
	void set_head();
	void set_body();
	void p();
	void h1();
	void h2();
	void h3();
	void h4();
	void h5();
	void h6();
	void hr();
	void br();
	void finish();

	~CTML();
};

