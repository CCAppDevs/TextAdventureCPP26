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

public:
	Room(std::string desc, bool isVisible, bool canLeave);

	void SetRoomCompleted(); // toggles the room to a finished state
	void SetIsVisible(bool newVis);
	void SetCanLeave(bool newCanLeave);
	std::string GetDescription();
};

