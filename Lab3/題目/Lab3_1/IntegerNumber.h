#ifndef INTNUM_H
#define INTNUM_H
class IntegerNumber
{
	public:
		IntegerNumber(){
			printf("constructor\n");
			number = 0;
		}
		IntegerNumber(int n);
		void add(IntegerNumber n);
		void sub(IntegerNumber n);
		void mul(IntegerNumber n);
		void div(IntegerNumber n);
		void mod(IntegerNumber n);
		int getNumber();
		void setNumber(int n);
	private:
		int number;
};
#endif