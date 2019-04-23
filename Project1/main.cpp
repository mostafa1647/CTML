#include "CTML.h"

int main()
{
	CTML html;
	html.set_head();
	html.set_body();
	html.finish();
	system("pause");
	return 0;
}