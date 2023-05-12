#include <iostream>

using namespace std;
template <typename SUU>
class Change {
private:
	SUU num1;
	SUU num2;
public:
	Change(SUU num1, SUU num2) {
		this->num1 = num1;
		this->num2 = num2;
	}
	~Change(){}
	SUU getNum1() {
		return num1;
	}
	SUU getNum2() {
		return num2;
	}
};
int main()
{

	Change <int> exp0(12,34);
	cout << endl << "   INT" << endl;
	cout << " First  --- " << exp0.getNum2() << endl;
	cout << " Second --- " << exp0.getNum1() << endl;
	Change <double> exp1(12.23, 34.67);
	cout << endl << "   DOUBLE" << endl;
	cout << " First  --- " << exp1.getNum2() << endl;
	cout << " Second --- " << exp1.getNum1() << endl;
	Change <char> exp2('S', 'A');
	cout << endl << "   CHAR" << endl;
	cout << " First  --- " << exp2.getNum2() << endl;
	cout << " Second --- " << exp2.getNum1() << endl;

}