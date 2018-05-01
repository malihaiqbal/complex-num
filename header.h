#include<iostream>
using namespace std;

class ComplexNumber
{
public:
	ComplexNumber()//Null
	{
		this->real = 0;
		this->img = 0;
	}
	ComplexNumber(float real, float img)//Parameterized
	{
		this->real = real;
		this->img = img;
	}
	ComplexNumber(ComplexNumber& copyCNum)//COPY
	{
		this->real = copyCNum.real;
		this->img = copyCNum.img;
	}
	//SETTERS
	void setReal(float real)
	{
		this->real = real;
	}
	void setImg(float img)
	{
		this->img = img;
	}
	void setNum(float real, float img)
	{
		this->real = real;
		this->img = img;
	}
	//GETTERS
	float getReal()
	{
		return this->real;
	}
	float getImg()
	{
		return this->img;
	}
	ComplexNumber* getNum()
	{
		return this;
	}
	//Add Functions
	ComplexNumber add(ComplexNumber Z)
	{
		ComplexNumber result(this->real + Z.real, this->img + Z.img);
		return result;
	}
	ComplexNumber add(ComplexNumber Z1, ComplexNumber Z2)
	{
		ComplexNumber result(Z1.real + Z2.real, Z1.img + Z2.img);
		return result;
	}
	//Subtract Functions
	ComplexNumber subtract(ComplexNumber Z)
	{
		ComplexNumber result(this->real - Z.real, this->img - Z.img);
		return result;
	}
	ComplexNumber subtract(ComplexNumber Z1, ComplexNumber Z2)
	{
		ComplexNumber result(Z1.real - Z2.real, Z1.img - Z2.img);
		return result;
	}
	//multiplication Functions
	ComplexNumber multiplication(ComplexNumber Z)
	{
		ComplexNumber result(this->real * Z.real, this->img * Z.img);
		return result;
	}

	ComplexNumber multiplication(ComplexNumber Z1, ComplexNumber Z2)
	{
		ComplexNumber result(Z1.real * Z2.real, Z1.img * Z2.img);
		return result;
	}
	//division function
	ComplexNumber division(ComplexNumber Z)
	{
		ComplexNumber result(this->real / Z.real, this->img / Z.img);
		return result;
	}
	ComplexNumber division(ComplexNumber Z1, ComplexNumber Z2)
	{
		ComplexNumber result(Z1.real / Z2.real, Z1.img / Z2.img);
		return result;
	}
	void display()
	{
		cout << "( " << this->real << " , " << this->img << ")" << endl;
	}

	ComplexNumber operator + (ComplexNumber A)
	{
		ComplexNumber result(this->real + A.real, this->img + A.img);
		return result;
	}
	ComplexNumber operator - (ComplexNumber A)
	{
		ComplexNumber result(this->real -A.real, this->img - A.img);
		return result;
	}
	ComplexNumber operator * (ComplexNumber A)
	{
		ComplexNumber result(this->real * A.real, this->img * A.img);
		return result;
	}
	ComplexNumber operator / (ComplexNumber A)
	{
		ComplexNumber result(this->real / A.real, this->img / A.img);
		return result;
	}







private:
	float real;
	float img;
};

ostream& operator << (ostream& s, ComplexNumber X)
{
	return s << "( " << X.getReal() << " , " << X.getImg() << " )" << endl;
}

