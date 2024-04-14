#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	float widht, hight, area, perimetr, diagonal;
	cout << "Введите ширину прямоугольника" << endl;
	cin >> widht;
	cout << "Введите длину прямоугольника" << endl;
	cin >> hight;
	//Тест на дурака
	if (widht <= 0 || hight <= 0) {
		cout << "error" << endl;
	return 0;
}
	area = widht * hight; //Нахождение площади
	perimetr = 2 * (widht + hight);//Нахождение периметра
	diagonal = sqrt(widht * widht + hight * hight);//Нахождение длины диагонали
	cout << "Площадь прямоугольника" << " " << area << endl;
	cout << "Периметр прямоугольника" << " " << perimetr << endl;
	cout << "Длина диагонали" << " " << diagonal << endl;
	return 0;
}