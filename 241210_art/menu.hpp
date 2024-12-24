#pragna once

namespace MZubishina {
	struct MenuItem {
		const char* const title;
		const (*func)(const MenuItem* current);
		
		const MenuItem* parent;

		const MenuItem* const *children;
		const int children_count;
		
	};
}