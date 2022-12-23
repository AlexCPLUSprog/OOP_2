#pragma once
#include <iostream>
#include <string>

class Class_1
{
public:
	Class_1(){
		std::cout << "Class_1() constructor" << "\n";
	}
	void setLength(int length) {
		_length = length;
	}

	int getLength(int length) {
		return _length;
	}

	void setHeigth(int heigth) {
		_heigth = heigth;
	}

	int getHeigth(int heigth) {
		return _heigth;
	}
		

	~Class_1(){
		std::cout << "Class_1() destructor" << "\n";
	}
private:
	int _length = 10;
	std::string _color;	
	int _heigth = 15;
};

class Class_2 : public Class_1
{
public:
	Class_2(){
		std::cout << "Class_2() constructor" << "\n";;
	}
	int getWindows(int windows) {
		return _windows;
	}

	void setWindows(int windows) {
		_windows = windows;
	}

	~Class_2() {
		std::cout << "Class_2() destructor" << "\n";
	}
private:
	int _windows = 26;
	std::string _roof;
	std::string _foundation;
};


class Class_3 : public Class_2 {
public:
	Class_3() {
		std::cout << "Class_3() constructor" << "\n";
	}

	~Class_3() {
		std::cout << "Class_3() destructor" << "\n";
	}
private:
	int _rooms = 3;

};