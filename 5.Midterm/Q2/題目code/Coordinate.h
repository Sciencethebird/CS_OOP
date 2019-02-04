#ifndef COORDINATE_H
#define COORDINATE_H
#include<stdio.h>
class Coordinate
{
	public:
		Coordinate(){
			printf("constructor\n");
			xValue = 0.0;
			yValue = 0.0;
		}
		Coordinate(float x, float y);
		void setNewValue(float x, float y);
		void getMidPointWith(Coordinate c);
		float getLengthWith(Coordinate c);
		float getSlopeWith(Coordinate c);
		float showXValue();
		float showYValue();
	private:
		float xValue, yValue;
};
#endif
