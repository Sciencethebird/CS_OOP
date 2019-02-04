#ifndef MYSTACK
#define MYSTACK
class MyStack{
	friend int getAvailCap(MyStack & s);
public:
	MyStack();
	MyStack(int c);
	MyStack(const MyStack & s);
	~MyStack();
	void print(){
		if(len > 0){
		    for(int i = 0; i < len; i++){
		    	printf("%d ", arr[i]);
			}
			printf("\n");
		}else{
			printf("Empty Stack\n");
		}
	}
	void push(int n);
	void pop();
private:
	int * arr;
	int cap;
	int len;
};
#endif