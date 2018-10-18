#include<iostream>
#include<math.h>

using namespace std;
#include "Coordinate.h"

Coordinate :: Coordinate(float x, float y){
    xValue = x;
    yValue = y;
    cout <<"constructor" << endl;
};
void Coordinate ::setNewValue(float x, float y){
    xValue = x;
    yValue = y;
};
void Coordinate :: getMidPointWith(Coordinate c){
    xValue = (xValue +c.xValue)/2;
    yValue = (yValue +c.yValue)/2;
};
float Coordinate :: getLengthWith(Coordinate c){
    float l,a, b;
    a = pow((xValue - c.xValue), 2);
    b = pow((yValue - c.yValue), 2);
    l = sqrt(a+b);
    return l;
};
float Coordinate :: getSlopeWith(Coordinate c){
    float slope;
    slope = (yValue - c.yValue)/(xValue - c.xValue);
    return slope;
};
float Coordinate :: showXValue(){
    return xValue;
};
float Coordinate :: showYValue(){
    return yValue;
};
/*
int main(){
    Coordinate c1(1.0, 2.0);
    Coordinate c2(3.5, 4.5);
    Coordinate c3;
    cout << c1.getLengthWith(c2) << endl;
    cout << "(" << c1.showXValue() << "," << c1.showYValue() << ")" << endl;
    c1.getMidPointWith(c2);
    cout << "(" << c1.showXValue() << "," << c1.showYValue() << ")" << endl;
    cout << c1.getLengthWith(c2) << endl;
    cout << c1.getSlopeWith(c3) << endl;
    c1.setNewValue(5.1, 6.2);
    cout << "(" << c1.showXValue() << "," << c1.showYValue() << ")" << endl;
    return 0;
}*/
