#include "LoadGame.h"
#include <fstream>

void Load()
{
	std::string SaveFile;
	std::string Save;

	std::ifstream in("D:\\VS\\XorO\\XorO\\Save\\Save.txt");
	if (in.is_open())
	{
		while (getline(in, SaveFile))
		{
			Save = SaveFile;
		}
	}
	in.close();

	nlohmann::json DeSerialization = nlohmann::json::parse(Save);

	Field.height = DeSerialization.at(0).get<int>();
	Field.width = DeSerialization.at(1).get<int>();

	PlayerMove = DeSerialization.at(2).get<bool>();

	InitLoadField();

	int Element = 3;
	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
		{
			Field.fieldGame[Oy][cell] = DeSerialization.at(Element).get<int>();
			++Element;
		}
}