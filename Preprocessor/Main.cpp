#include <iostream>
#include "Foo.h"

#define PI 3.14
#define E 2.71
 //#define forever for (;;) //создание бесконечного цикла for и теперь мы можем его всегда добавлять в нашу программу
#define forever for (int fori=0; ;fori++) 
#define begin { //это вместо открывающей фигурной скобки
#define end } // вместо закрывающей фигурной скобки 
#define sum(a,b) a+b
#define print_arr(arr,len) std::cout<<'[';\
for (int i = 0; i < len; i++)\
	std::cout << arr[i] << ",";\
	std::cout << "\b\b]\n"
#define NUM 0
#if NUM>0

void func() {
	std::cout << "Hello World!\n";
}
#elif NUM<0
void func() {
	std::cout << "WOWWWW\n";
}

#else
void func() {
	std::cout << "Bye World!\n";
}

#endif

#ifdef NUM
const int L = 10;
#else
const int L = 20;
#endif























int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	func();
	std::cout << L << std::endl;
		
		
		//Объекты препроцессора
	/*std::cout << "PI= " << PI << std::endl;
	std::cout << "E= " << E << std::endl;
	//forever{
	//	  std::cout << '.'; //бесконечно выводится точка 
	//}
	forever {
		std::cout << '.';
	if (fori >= 10)
		break;
}*/
	
	//Макросы препроцессора
	/*std::cout << "Введите 2 числа:\n";
	std::cin >> n >> m;
	std::cout << n << "+" << m << "=" << sum(n, m) << std::endl;

	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	print_arr(arr, size);

	std::cout << PI << std::endl;

#undef PI
#define PI 3
	std::cout << PI << std::endl;*/




	return 0;
}