#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

const MZubishina::show_menu(const MenuItem* current) {
	std::cout << "Путеводитель по России-матушке приветствует тебя, мой друг!" << std::endl;
	for (int i = 1; i < current->children_count; i++) {
		std::cout << current->children[i]->title << std::endl;
	}
	std::cout << current->children[0]->title << std::endl;
	std::cout << "Путеводитель по России-матушке > ";
	
	int user_input;
	std::cin >> user_input;
	std::cout << std::endl;
	
	return current->children[user_input];
}

const MZubishina::exit(const MenuItem* current) {
	std::exit(0);
}

const MZubishina::know_artist(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}

const MZubishina::know_musician(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent;
}


const MZubishina::know_go_back(const MenuItem* current) {
	//TODO
	std::cout << current->title << std::endl << std::endl;
	return current->parent->parent;
}