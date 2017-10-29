#include "stdafx.h"

using namespace std;

bool isEqual(double a, double b) {
	return fabs(a - b) < numeric_limits<float>::epsilon();
}

void CheckInputData(double a, double b, double c)
{
	if (a < 0 || b < 0 || c < 0)
	{
		throw invalid_argument("Side length of triangle can't be negative");
	} 
	else if (a == 0 || b == 0 || c == 0)
	{
		throw invalid_argument("Side length of triangle can't be 0");
	}
}

string IdentifyTypeOfTriangle(double a, double b, double c)
{
	if ((!isEqual(a + b, c)) && (a + b > c) && !isEqual(b + c, a) && (b + c > a) && !isEqual(a + c, b) && (a + c > b))
	{
		if (isEqual(a, b) && isEqual(b, c))
		{
			return "equilateral";
		}
		else if (isEqual(a, b) || isEqual(b, c) || isEqual(a, c))
		{
			return "isosceles";
		}
		else
		{
			return "normal";
		}	
	}
	else
	{
		return "non-triangle";
	}
}

void ReplaceCommaToDot(string& s)
{
	size_t pos = s.find(",");
	if (pos != string::npos)
	{
		s.replace(pos, 1, ".");
	}
}

int main(int argc, char* argv[])
{
	try
	{
		if (argc != COUNT_OF_ARGUMENTS)
		{
			throw invalid_argument("Wrong count of arguments");
		}
		string aStr = argv[1],
			   bStr = argv[2],
			   cStr = argv[3];
		double a = boost::lexical_cast<double>(aStr);
		double b = boost::lexical_cast<double>(bStr);
		double c = boost::lexical_cast<double>(cStr);
		CheckInputData(a, b, c);
		cout << IdentifyTypeOfTriangle(a, b, c);
	}
	catch (const exception& ex)
	{
		cout << ex.what() << endl;
		return 1;
	}
    return 0;
}

