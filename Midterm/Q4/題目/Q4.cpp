#include <iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
class fruit{
	protected:
		friend class guest;
		string name[5];
		int cost[5];
	public:
	   fruit();

};
class guest{
	private:
		string guest_name;
		int money;
	public:
        void set_data(); //You need to set guest_name and money in this function
		void print(); //Print the guest_name and money
};
