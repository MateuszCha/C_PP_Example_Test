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
	static int ownRoundMethod(double value, unsigned short index); /// porblem if index = 5 value = 45.59 return 45// idnex = 50 value 45.59 return 46  
private:
	void getArguments();
}; 