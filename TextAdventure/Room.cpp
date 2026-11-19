#include "Room.h"

Room::Room(std::string desc, bool isVisible, bool canLeave, char roomSymbol)
{
	this->Description = desc;
	this->IsVisible = isVisible;
	this->CanLeave = canLeave;
	this->IsCompleted = false;
	this->RoomSymbol = roomSymbol;
}

void Room::SetRoomCompleted()
{
	this->IsCompleted = true;
	this->CanLeave = true;
	this->IsVisible = true;
}

void Room::SetIsVisible(bool newVis)
{
}

void Room::SetCanLeave(bool newCanLeave)
{
}

std::string Room::GetDescription()
{
	return std::string();
}

char Room::GetRoomSymbol()
{
	return this->RoomSymbol;
}
