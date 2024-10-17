#pragma once
class Film
{
	char* name;
	double time;
	int year;
	char* nameOfReshis;
	char* zhanr;
	double data;
public:
	Film();
	Film(const char*_name,double _time,int _year,double _data,const char*_nameOfReshis,const char*zhanr);
	Film(const Film& obj);
	~Film();
	void GetNameFilm();
	void GetNameOfReshisor();
	void GetZhanr();
	double GetTime();
	int GetYear();
	int GetData();
	void SetNameFilm();
	void SetNameOfReshisor();
	void SetZhanr();
	void SetTime(double _time);
	void SetYear(int _year);
	void SetData(int _data);
	void Print();
	void Input();
};

