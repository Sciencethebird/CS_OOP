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
    Matrix(M a0, M a1, M a2, M a3)
    {
        element[0][0] = a0;
        element[0][1] = a1;
        element[1][0] = a2;
        element[1][1] = a3;
    };
    //Matrix(int ,int );
    Matrixele(int i,int j)
    {
        return element[i][j];
    }
    void set(int i,int j, M num)
    {
        element[i][j] = num;
    }
    void operator^(int p)
    {

        for(int i = 0; i<p-1; i++) ////t0 t1   t0 t1
        {
            ////t2 t3   t2 t3
            M t0, t1, t2, t3;
            t0 = element[0][0] ;
            t1 = element[0][1] ;
            t2 = element[1][0] ;
            t3 = element[1][1] ;
            set(0, 0, t0*t0 + t1* t2);
            set(1, 0, t2*t0 + t3* t2);
            set(0, 1, t0*t1 + t1* t3);
            set(1, 1, t2*t1 + t3* t3);
        }

    };

    M operator ()(const Matrix<M> c1)
    {
        return element[0][0]*element[1][1] - element[1][0]*element[0][1];
    };
    friend ostream& operator<<(ostream&out,const Matrix<M>& m)
    {

        out<<m.element[0][0]<<" " <<m.element[0][1]<<" "<<m.element[1][0]<<" " <<m.element[1][1]<< endl;
        return out;
    }
};
//void operator^(const Matrix M c1, int p){


//}

int main()
{
    int c;
    cin >> c;

    while(c != 0)
    {

        if(c == 1)
        {
            int a0, a1, a2, a3, pow;
            cin >> a0 >> a1 >> a2 >> a3;
            cin >> pow;
            Matrix<int> c1(a0, a1, a2, a3);
            cout << c1(c1) << endl;

            c1^(pow);
            cout << c1<< endl;


        }


        if(c == 2) {
            float a0, a1, a2, a3;
            cin >> a0 >> a1 >> a2 >> a3;
            cin >> pow;
            Matrix<float> c1(a0, a1, a2, a3);
            cout << c1(c1) << endl;
            c1^(pow);
            cout << c1<< endl;

        }

        cin >> c;
    }

    return 0;
}

