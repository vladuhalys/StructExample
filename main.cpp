#include "box_provider.h"

int main()
{
	ColorRGBA * color = new ColorRGBA(255, 0, 0, 255);
	BoxProvider * boxProvider = new BoxProvider();
	Box * box = boxProvider->createBox(10, 10, 10, color, WOOD);
	cout << boxProvider->BoxInfo(box) << endl;
	cout << endl << endl;
	cout << boxProvider->BoxJson(box) << endl;
	boxProvider->deleteBox(box);
	return 0;
}