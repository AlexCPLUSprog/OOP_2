#pragma once
#include <string>
class Point
{
public:
	explicit Point (int x, int y, std::string& str) : _x(x), _y(y), _str(str) {}

	// В большинстве случаев this можно не использовать
	int getX(){
		return this->_x;
		//return (*this)._x; (вместо стрелочки ->)
	}
	void setX(int x){
		this->_x = x;
	}
	// метод move сдвигает точку
	Point& move(int x, int y) {
		_x += x;
		_y += y;
		return *this; // возвращает указатель на этот же класс
	}
		

private:
	int _x;
	int _y;	
	std::string _str;
};

