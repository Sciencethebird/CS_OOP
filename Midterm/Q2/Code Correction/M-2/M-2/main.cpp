//
//  main.cpp
//  M-2
//
//  Created by Sciencethebird on 2018/8/2.
//  Copyright © 2018年 Sciencethebird. All rights reserved.
//

#include<iostream>
#include<math.h>

using namespace std;
#include "Coordinate.h"

Coordinate::Coordinate(float x, float y):xValue(x), yValue(y){
    cout << "constructor" << endl;
}
void Coordinate::setNewValue(float x, float y){
    xValue = x;
    yValue = y;
}
void Coordinate::getMidPointWith(Coordinate c){
    xValue += c.xValue;
    yValue += c.yValue;
    xValue /= 2;
    yValue /= 2;
}
float Coordinate::getLengthWith(Coordinate c){
    float dx, dy;
    dx = xValue - c.xValue;
    dy = yValue - c.yValue;
    return pow(pow(dx, 2) + pow(dy, 2), 0.5);
}
float Coordinate::getSlopeWith(Coordinate c){
    float dx, dy;
    dx = c.xValue - xValue;
    dy = c.yValue - yValue;
    return dy/dx;
}
float Coordinate::showXValue(){
    return xValue;
}
float Coordinate::showYValue(){
    return yValue;
}


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
 }

