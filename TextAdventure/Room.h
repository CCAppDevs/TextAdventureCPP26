#pragma once
#include <string>

class Room
{
private:
protected:
	std::string Description;
	bool IsVisible;
	bool CanLeave;
	bool IsCompleted;
	char RoomSymbol;

public:
	Room(std::string desc, bool isVisible, bool canLeave, char roomSymbol);

	void SetRoomCompleted(); // toggles the room to a finished state
	void SetIsVisible(bool newVis);
	void SetCanLeave(bool newCanLeave);
	std::string GetDescription();
	char GetRoomSymbol();
};

