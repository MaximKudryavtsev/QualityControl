/*#include "stdafx.h"

using namespace std;

class Triangle
{
public:
	string IdentifyTypeOfTriangle()
	{
		string type = "";
		if ((m_a + m_b > m_c) && (m_b + m_c > m_a) && (m_a + m_c < m_b))
		{
			if ((m_a == m_b) && (m_b == m_c))
			{
				type = "equilateral";
			}
			else if ((m_a == m_b) || (m_b == m_c) || (m_a == m_c))
			{
				type = "isosceles";
			}
			else
			{
				type = "normal";
			}
		}
		else
		{
			type = "non-triangle";
		}
		return type;
	}
	Triangle(double a, double b, double c)
		: m_a(a)
		, m_b(b)
		, m_c(c)
	{
		if (a < 0 || b < 0 || c < 0)
		{
			throw invalid_argument("Value of side length of triangle couldn't negative");
		}
		else if ((a == 0) || (b == 0) || (c == 0))
		{
			throw invalid_argument("Value of side length of triangle couldn't equals 0");
		}
		else
		{
			IdentifyTypeOfTriangle();
		}
	}
	~Triangle() = default;
private:
	double m_a = 0;
	double m_b = 0;
	double m_c = 0;
};

int main(int argc, char* argv[])
{
	try
	{
		string aStr = argv[1],
			bStr = argv[2],
			cStr = argv[3];
		double a = atof(aStr.c_str());
		double b = atof(bStr.c_str());
		double c = atof(cStr.c_str());

		if (argc != COUNT_OF_ARGUMENTS)
		{
			throw invalid_argument("Wrong count of arguments");
		}

		Triangle triangle(a, b, c);
		if (triangle.IdentifyTypeOfTriangle() == "equilateral")
		{
			cout << "equilateral" << endl;
		}
		else if (triangle.IdentifyTypeOfTriangle() == "isosceles")
		{
			cout << "isosceles" << endl;
		}
		else if (triangle.IdentifyTypeOfTriangle() == "normal")
		{
			cout << "normal" << endl;
		}
		else if (triangle.IdentifyTypeOfTriangle() == "non-triangle")
		{
			cout << "non triangle" << endl;
		}
	}
	catch (const exception& ex)
	{
		std::cout << "Error catched: " << ex.what() << std::endl;
		return 1;
	}
	return 0;
}

*/