#include <clocale>
#include <iostream>

int main() {
	std::setlocale(LC_ALL, "");
	
	int user_input;
	do {
		std::cout << "Путеводитель по России-матушке приветствует тебя, мой друг!" << std::endl;
		std::cout << "1 - Хочу познать искусство России" << std::endl;
		std::cout << "0 - Хочу быть австралопитеком..." << std::endl;
		std::cout << "Путеводитель по России-матушке > ";
		
		std::cin >> user_input;
		if (user_input == 1) {
			// TODO
		}
		else if (user_input == 0) {
			exit(0);
		}
		
		std::cout << std::endl;
	} while (true);
	
	return 0;
}