#pragma once
#include <iostream>
#include <string>


class TCras
{
public:
	int Menu_1();
	int SelectClass(int _answer);
	int RestartTranport(int answer);
	int RestartOrEnd(int ClassNumber);
protected:
	int answer;
};
