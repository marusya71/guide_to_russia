#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
	std::setlocale(LC_ALL, "");
	
	MZubishina::MenuItem study_summ = { "", MZubishina::study_summ };
	MZubishina::MenuItem study_substract = { "", MZubishina::study_substract };
	MZubishina::MenuItem study_multiply = { "", MZubishina::study_multiply };
	MZubishina::MenuItem study_divide = { "", MZubishina::study_divide };
	MZubishina::MenuItem study_go_back = { "", MZubishina::study_go_back };
	
	MZubishina::MenuItem* study_children[] = {
		&study_go_back,
		&study_summ,
		&study_substract,
		&study_multiply,
		&study_divide
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
	
	MZubishina::MenuItem study = { "1 - Хочу познать искусство России" , MZubishina::study;
	MZubishina::MenuItem exit = { "0 - Хочу быть австралопитеком...", MZubishina::exit };
		
	MZubishina::MenuItem* main_children[] = { &exit, &study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
		
	int user_input;
	do {
		std::cout << "Путеводитель по России-матушке приветствует тебя, мой друг!" << std::endl;
		for (int i = 1; i < main_size; i++) {
			std::cout << main_children[i]->title << std::endl;
		}
		std::cout << main_children[0]->title << std::endl;
		std::cout << "Путеводитель по России-матушке > ";
		
		std::cin >> user_input;
		main_children[user_input]->func();
		
		std::cout << std::endl;
	} while (true);
	
	return 0;
}