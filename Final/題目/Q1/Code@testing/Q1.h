#include <vector>
#include <algorithm> /* hint */

class myVector : public std::vector<int>
{
public:
    int sum()
    {
        int sz = (int)vector::size();
        std::cout << vector::size() << std::endl;
        int sum = 0;
        for(int i = 0; i< sz; i++)
        {
            sum += (*this)[i];
        }
        return sum;
    }
    void show(){
        int sz = (int)vector::size();
        for(int i = 0; i< sz; i++)
        {
            std::cout <<  (*this)[i] << " ";
        }
        std::cout << std::endl;
    }
    void sort(){
        int sz = (int)vector::size();
        for(int i = 0; i<sz;i++ ){
            int min = (*this)[i];
            int idx = i;
            for(int j = i+1; j<sz;j++){
                if((*this)[j] < min){
                    min = (*this)[j];
                    idx = j;
                }
            }
            int temp = (*this)[i];
            (*this)[i] = min;
            (*this)[idx] = temp;
        }
    }
    void concat(vector b){
        int sz = (int)vector::size();
        for(int i = 0; i<sz;i++){
            this->push_back(b[i]);
        }
    }
    int size(){
        return 0;
    }
    /* your code above */
};
