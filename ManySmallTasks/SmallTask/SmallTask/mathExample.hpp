#pragma	once

class MathExample {
	int a;
	int b;
	int c;
public:
	MathExample() {
		this->getArguments();
	};
	double quadraticFunction();
	double quadraticFunction(int a, int b, int c);
private:
	void getArguments();
}; 