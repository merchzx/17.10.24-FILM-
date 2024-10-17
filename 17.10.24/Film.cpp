#include "Film.h"
#include <iostream>
using namespace std;
Film::Film()
{
	name = nullptr;
	time = 0;
	data = 0;
	nameOfReshis = nullptr;
	zhanr = nullptr;
	year = 0;
}

Film::Film(const char* _name, double _time, int _year, double _data, const char* _nameOfReshis, const char* _zhanr)
{
	name = new char[strlen(_name) + 1];
	strcpy_s(name, strlen(_name) + 1, _name);
	nameOfReshis = new char[strlen(_nameOfReshis) + 1];
	strcpy_s(nameOfReshis, strlen(_nameOfReshis) + 1, _nameOfReshis);
	zhanr = new char[strlen(_zhanr) + 1];
	strcpy_s(zhanr, strlen(_zhanr) + 1, _zhanr);
	time = _time;
	data = _data;
	year = _year;
}

Film::Film(const Film& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	nameOfReshis = new char[strlen(obj.nameOfReshis) + 1];
	strcpy_s(nameOfReshis, strlen(obj.nameOfReshis) + 1, obj.nameOfReshis);
	zhanr = new char[strlen(obj.zhanr) + 1];
	strcpy_s(zhanr, strlen(obj.zhanr) + 1, obj.zhanr);
	time = obj.time;
	data = obj.data;
	year = obj.year;
}

Film::~Film()
{
	delete[]name;
	delete[]nameOfReshis;
	delete[]zhanr;
}

void Film::GetNameFilm()
{
	cout << "Name: " << name;
}

void Film::GetNameOfReshisor()
{
	cout << "Name OF Reshisor: " << nameOfReshis;
}

void Film::GetZhanr()
{
	cout << "Zhanr: " << zhanr;
}

double Film::GetTime()
{
	return time;
}

int Film::GetYear()
{
	return year;
}

int Film::GetData()
{
	return data;
}

void Film::SetNameFilm()
{
	char buff[100]{};
	cout << "Enter name of Film: ";
	cin.getline(buff, 100);
	if (name != nullptr) {
		delete[]name;
	}
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
}

void Film::SetNameOfReshisor()
{
	char buff[100]{};
	cout << "Enter name of Reshisor: ";
	cin.getline(buff, 100);
	if (nameOfReshis != nullptr) {
		delete[]nameOfReshis;
	}
	nameOfReshis = new char[strlen(buff) + 1];
	strcpy_s(nameOfReshis, strlen(buff) + 1, buff);
}

void Film::SetZhanr()
{
	char buff[100]{};
	cout << "Enter Zhanr of Film: ";
	cin.getline(buff, 100);
	if (zhanr != nullptr) {
		delete[]zhanr;
	}
	zhanr = new char[strlen(buff) + 1];
	strcpy_s(zhanr, strlen(buff) + 1, buff);
}

void Film::SetTime(double _time)
{
	time = _time;
}

void Film::SetYear(int _year)
{
	year = _year;
}

void Film::SetData(int _data)
{
	data = _data;
}

void Film::Print()
{
	cout << "Name Of Film: " << name 
		<< endl << "Year: " << year
		<<endl<<"Time (in minutes): "<<time
		<<endl<<"Zhanr: "<<zhanr<<endl
		<<"Name OF Reshisor: "<<nameOfReshis<<endl;
}

void Film::Input()
{
	char buff[100]{};
	cout << "Enter name of Film: ";
	cin.getline(buff,100);
	if (name != nullptr) {
		delete[]name;
	}
	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
	cout << "Enter zhanr of film: ";
	cin.getline(buff, 100);
	if (zhanr != nullptr) {
		delete[]zhanr;
	}
	zhanr = new char[strlen(buff) + 1];
	strcpy_s(zhanr, strlen(buff) + 1, buff);
	cout << "Enter name of reshisor: ";
	cin.getline(buff, 100);
	if (nameOfReshis != nullptr) {
		delete[]nameOfReshis;
	}
	nameOfReshis = new char[strlen(buff) + 1];
	strcpy_s(nameOfReshis, strlen(buff) + 1, buff);
	cout <<"Enter Year: ";
	cin >> year;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "Enter Time(in minutes): ";
	cin >> time;
	cout << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
