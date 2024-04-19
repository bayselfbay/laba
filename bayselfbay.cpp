#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	float widht, hight, area, perimetr, diagonal;
	wcout << L"Введите ширину прямоугольника" << endl;
	cin >> widht;
	wcout << L"Введите длину прямоугольника" << endl;
	cin >> hight;
	if (widht <= 0 || hight <= 0) {
		cout << "error" << endl;
	return 0;
}
	area = widht * hight; //Нахождение площади
	perimetr = 2 * (widht + hight);//Нахождение периметра
	diagonal = sqrt(widht * widht + hight * hight);//Нахождение длины диагонали
	wcout << L"Площадь прямоугольника" << " " << area << endl;
	wcout << L"Периметр прямоугольника" << " " << perimetr << endl;
	wcout << L"Длина диагонали" << " " << diagonal << endl;
	return 0;
}