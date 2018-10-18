#include <iostream>
using namespace std;

template<class M>
class Matrix
{
    private:
        int row;
        int column;
        M element[2][2];
    public:
        Matrix()
        Matrix(int,int)
        void set(int,int,M)
        void operator ^(int)
        M operator ()()
        friend ostream& operator<<(ostream&out,const Matrix<M>& m)
};


