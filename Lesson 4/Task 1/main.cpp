#include <iostream>
#define MODE 1

#if MODE == 1
int add(int a, int b) {
	return (a + b);
}
#endif

int main()
{
	#ifdef MODE 
		#if MODE == 0
			std::cout << "Работаю в режиме тренировки" << std::endl;
		#elif MODE == 1 
			std::cout << "Работаю в боевом режиме" << std::endl;
			int x, y;
			std::cout << "Введите число 1: ";
			std::cin >> x;
			std::cout << "Введите число 2: ";
			std::cin >> y;
			std::cout << "Результат сложения: " << add(x, y) << std::endl;
		#else 
			std::cout << "Неизвестный режим. Завершение работы" << std::endl;
			return 0;
		#endif
	#else 
		#error "Определите MODE!"
	#endif

	return 0;
}
