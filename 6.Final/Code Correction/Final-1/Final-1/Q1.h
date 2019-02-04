#include <vector>
#include <iostream>
#include <algorithm> /* hint */

class myVector : public std::vector<int>
{
public:
        /* your code below */
    int sum(){
        int sum = 0;
        size_t sz = this->vector<int>::size();
        for(int i = 0; i< sz; i++)
            sum+= (*this)[i];
        return sum;
    }
    void concat(myVector &other){
        size_t sz = other.size();
        for(int i = 0; i< sz; i++)
            this->push_back(other[i]);
    }
    void sort(){
        std::sort(this->begin(), this->end());
    }
    void show(){
        size_t sz  = this->vector<int>::size();
        for(int i = 0; i< sz; i++)
            std::cout << (*this)[i] << " ";
    }
    int size(){
        return 0;
    }
    friend std::ostream& operator << (std::ostream& out , const myVector &n);
};
std::ostream& operator << (std::ostream& out , const myVector &n){
    size_t sz  = n.vector<int>::size();
    for(int i = 0; i< sz; i++)
        out << n[i] << " ";
    return out;
}
