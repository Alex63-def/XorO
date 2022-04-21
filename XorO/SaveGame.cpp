#include "SaveGame.h"
#include <fstream>

void Save()
{
	nlohmann::json Serialization{};

	Serialization.push_back(Field.height);
	Serialization.push_back(Field.width);

	Player();

	Serialization.push_back(PlayerMove);

	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			Serialization.push_back(Field.fieldGame[Oy][cell]);
	
	std::string SerializationString = Serialization.dump();

	std::ofstream out;         
	out.open("D:\\VS\\XorO\\XorO\\Save\\Save.txt"); 
	if (out.is_open())
		out << SerializationString << std::endl;
}

void Player()
{	
	for (int Oy = 0; Oy < Field.height; Oy++)
		for (int cell = 0; cell < Field.width; cell++)
			if (Field.fieldGame[Oy][cell] == 'X')
				++QuantityX;
			else if (Field.fieldGame[Oy][cell] == 'O')
				++QuantityY;

	if (QuantityX > QuantityY)
		PlayerMove = false;
	else
		PlayerMove = true;
}