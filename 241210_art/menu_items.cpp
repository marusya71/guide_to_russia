#include "menu_items.hpp"

#include <cstddef>

#include "menu_fuctions.hpp"
	
const MZubishina::MenuItem MZubishina::KNOW_ARTIST = {
	"1 - Русские художники", MZubishina::know_artist, &MZubishina::KNOW
};
const MZubishina::MenuItem MZubishina::KNOW_MUSICIAN = {
	"2 - Русские музыканты", MZubishina::know_musician, &MZubishina::KNOW
};
const MZubishina::MenuItem MZubishina::KNOW_GO_BACK = {
	"0 - Выйти в главное меню", MZubishina::know_go_back, &MZubishina::KNOW
};

namespace {
	const MZubishina::MenuItem* const know_children[] = {
		&MZubishina::KNOW_GO_BACK,
		&MZubishina::KNOW_ARTIST,
		&MZubishina::KNOW_MUSICIAN
	};
	const int know_size = sizeof(know_children) / sizeof(know_children[0]);
}
	
const MZubishina::MenuItem MZubishina::KNOW = {
	"1 - Хочу познать искусство России" , MZubishina::show_menu, &MZubishina::MAIN, know_children, know_size
};
const MZubishina::MenuItem MZubishina::EXIT = {
	"0 - Хочу быть австралопитеком...", MZubishina::exit, MZubishina::MAIN
};

namespace {
	const MZubishina::MenuItem* const main_children[] = {
		&MZubishina::EXIT,
		&MZubishina::KNOW
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const MZubishina::MenuItem MZubishina::MAIN = {
	nullptr, MZubishina::show_menu, nullptr, main_children, main_size
};