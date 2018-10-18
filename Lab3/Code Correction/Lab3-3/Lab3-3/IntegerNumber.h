#ifndef INTNUM_H
#define INTNUM_H
class IntegerNumber
{
public:
    
    IntegerNumber();
    IntegerNumber(int);
    //IntegerNumber(const IntegerNumber &n); /// we don't need copy constructor here (shallow copy will do)
    
    /// Initialization Functions
    int getNumber();
    void setNumber(int n);
    
    /// +
    friend int operator+(int, IntegerNumber &);
    friend int operator+(IntegerNumber &, int);
    int operator+(IntegerNumber &);
    
    /// -
    friend int operator-(int, IntegerNumber &);
    friend int operator-(IntegerNumber &, int);
    friend int operator-(IntegerNumber &);         /// This is negative sign, like, -n1.
    int operator-(IntegerNumber &n);               /// This is subtract between objects.
    
    /// *
    friend int operator*(int a, IntegerNumber &n);
    friend int operator*(IntegerNumber &n, int a);
    int operator*(IntegerNumber &);
    
    /// /
    friend int operator/(int a, IntegerNumber &n);
    friend int operator/(IntegerNumber &n, int a);
    int operator/(IntegerNumber &);
    
    /// %
    friend int operator%(int a, IntegerNumber &n);
    friend int operator%(IntegerNumber &n, int a);
    int operator%(IntegerNumber &);
    
    /// =
    const IntegerNumber operator=(const int);
    const IntegerNumber operator=(const IntegerNumber &);
    
    /// --
    friend IntegerNumber operator--(IntegerNumber &);      /// prefix
    friend IntegerNumber operator--(IntegerNumber &, int); /// postfix
    
    /// ++
    friend IntegerNumber operator++(IntegerNumber &);
    friend IntegerNumber operator++(IntegerNumber &, int);
    
    /// +=
    void operator+=(IntegerNumber &);
    void operator+=(int);
    
    /// -=
    void operator-=(IntegerNumber &);
    void operator-=(int);
    
    /// <<
    friend std::ostream& operator<<(std::ostream &, const IntegerNumber &);
    
    /// others
    void add(IntegerNumber);
    void sub(IntegerNumber);
    void mul(IntegerNumber);
    void div(IntegerNumber);
    void mod(IntegerNumber);
    
private:
    int number;
};

/// constructors

IntegerNumber::IntegerNumber(){
    //std::cout << "constructor" << std::endl;
    number = 0;
}
IntegerNumber::IntegerNumber(int n){
    //std::cout << "constructor" << std::endl;
    number = n;
}


/// +
int operator+(IntegerNumber &n, int a){
    return n.number + a;
}
int operator+(int a, IntegerNumber &n){
    return n.number + a;
}
int IntegerNumber::operator+(IntegerNumber &n){
    return number + n.number;
}

/// -
int operator-(IntegerNumber &n, int a){
    return n.number - a;
}
int operator-(int a, IntegerNumber &n){
    return a - n.number;
}
int operator-(IntegerNumber &n){
    return -n.number;
}
int IntegerNumber::operator-(IntegerNumber &n){
    return number - n.number;
}

/// *
int operator*(IntegerNumber &n, int a){
    return n.number * a;
}
int operator*(int a, IntegerNumber &n){
    return n.number * a;
}
int IntegerNumber::operator*(IntegerNumber &n){
    return number * n.number;
}

/// /
int operator/(IntegerNumber &n, int a){
    return n.number / a;
}
int operator/(int a, IntegerNumber &n){
    return a / n.number;
}
int IntegerNumber::operator/(IntegerNumber &n){
    return number / n.number;
}

/// %
int operator%(IntegerNumber &n, int a){
    return n.number % a;
}
int operator%(int a, IntegerNumber &n){
    return a % n.number;
}
int IntegerNumber::operator%(IntegerNumber &n){
    return number % n.number;
}

/// =
const IntegerNumber IntegerNumber::operator=(const int a){
    number = a;
    return *this;
}
const IntegerNumber IntegerNumber::operator=(const IntegerNumber &a){
    number = a.number;
    return *this;
}

///+=
void IntegerNumber::operator+=(IntegerNumber &n){
    number += n.number;
}
void IntegerNumber::operator+=(int n){
    number += n;
}

///-=
void IntegerNumber::operator-=(IntegerNumber &n){
    number -= n.number;
}
void IntegerNumber::operator-=(int n){
    number -= n;
}

/// ++
IntegerNumber operator++ (IntegerNumber &n, int){
    IntegerNumber temp(n);
    ++n.number;
    return temp;
}
IntegerNumber operator++ (IntegerNumber &n){
    n.number++;
    return n;
}

/// --
IntegerNumber operator-- (IntegerNumber &n, int){
    IntegerNumber temp(n);
    --n.number ;
    return temp;
}
IntegerNumber operator-- (IntegerNumber &n){
    n.number--;
    return n;
}

/// others
void IntegerNumber::add(IntegerNumber n){
    number += n.number;
}
void IntegerNumber::sub(IntegerNumber n){
    number -= n.number;
}
void IntegerNumber::mul(IntegerNumber n){
    number *= n.number;
}
void IntegerNumber::div(IntegerNumber n){
    number /= n.number;
}
void IntegerNumber::mod(IntegerNumber n){
    number %= n.number;
}
void IntegerNumber::setNumber(int n){
    number = n;
}
int IntegerNumber::getNumber(){
    return number;
}

std::ostream& operator<<(std::ostream & stream, const IntegerNumber &in){
    stream << in.number;
    return stream;
}
#endif
