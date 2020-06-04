#pragma once
#include <iostream>
#include "MyForm.h"
using namespace std;

/*Итак, у нас 4 операнда. И 6 операций: сложение, вычитание, умножение, деление, преобразование в десятичную дробь и обратно. 
	Нужно сделать еще кнопку стереть, но это будет сделано не здесь.


*/


class Calc {
public:
	int numerator_1, numerator_2, denominator_1, denominator_2;

	Calc() {
	};												//Конструктор
												//Деструктор



	int Addition_numerator(int numerator_1, int numerator_2, int denominator_1, int denominator_2);		//Сложение числителя
	int Addition_denominator(int denominator_1, int denominator_2);
	int Subtraction_numerator(int numerator_1, int numerator_2, int denominator_1, int denominator_2);				//Вычитание
	int Subtraction_denominator(int denominator_1, int denominator_2);
	int Multiplication_numerator(int numerator_1, int numerator_2);			//Умножение
	int Multiplication_denominator(int denominator_1, int denominator_2);
	int Division_numerator(int numerator_1, int denominator_2);				//Деление
	int Division_denominator(int numerator_2, int denominator_1);
	double Plain(double numerator_1, double denominator_1);															//Из обычной в десятичную

	int return_lenght_string(int number);
	double return_lenght_string_double(double number);
	
	~Calc();
};


int Calc::Addition_numerator(int numerator_1, int numerator_2, int denominator_1, int denominator_2){
	return (numerator_1 * denominator_2) + (denominator_1 * numerator_2);
}

int Calc::Addition_denominator(int denominator_1, int denominator_2) {
	return denominator_1 * denominator_2;
}

int Calc::Subtraction_numerator(int numerator_1, int numerator_2, int denominator_1, int denominator_2) {
	return (numerator_1 * denominator_2) - (denominator_1 * numerator_2);
}
int Calc::Subtraction_denominator(int denominator_1, int denominator_2) {
	return denominator_1 * denominator_2;
}

int Calc::Multiplication_numerator(int numerator_1, int numerator_2) {
	return numerator_1 * numerator_2;
}

int Calc::Multiplication_denominator(int denominator_1, int denominator_2) {
	return denominator_1 * denominator_2;
}

int Calc::Division_numerator(int numerator_1, int denominator_2) {
	return numerator_1 * denominator_2;
}
int Calc::Division_denominator(int numerator_2, int denominator_1) {
	return numerator_2 * denominator_1;
}

double Calc::Plain(double numerator_1, double denominator_1) {
	return numerator_1 / denominator_1;
}

int Calc::return_lenght_string(int number) {
	int count = 0;
	while (number > 1) {
		number /= 10;
		count++;
	}
	return count;
}

inline Calc::~Calc()
{
}







