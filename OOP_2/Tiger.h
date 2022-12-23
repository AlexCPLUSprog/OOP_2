#pragma once
#include <iostream>
#include <string>
// Существует наследование и декомпозиция

class Animal
{
public:
	Animal() {
		std::cout << "Animal() constructor" << "\n";
	}

	~Animal() {
		std::cout << "~Animal() destructor" << "\n";
	}

	int fight() {	
		return strength;
	}
	int run() {
		return speed;
	}
	void eat() {
		std::cout << "Animal have eaten" << "\n";
	}
private:
	int strength = 10;
	int speed = 5;
};


class Tiger : public Animal // Наследование
{
public:
	Tiger(int height, const std::string& color){
		std::cout << "Tiger() constructor" << "\n";
		_height = height;
		_color = color;
	}
	~Tiger(){
		std::cout << "~Tiger() destructor" << "\n";
	}
	int fight() {
		return _strength;
	}
	void setHeight(int height) {
		_height = height;
	}

	// Константная функция. Нельзя менять значение полей классов
	int getHeight() const {
		//_height = 5; - ошибка компиляции
		// setHeight(10); - не константная функция, ошибка компиляции
		return _height;
	}

	const std::string& getColor() {
		return _color;
	}

	friend std::ostream& operator<<(std::ostream& os, Tiger& t) {
		os << t.getHeight() << " " << t.getColor();
		return os;
	}

private:
	// Tiger *this;
	int _height;
	std::string _color;
	int _strength = 50;
};

