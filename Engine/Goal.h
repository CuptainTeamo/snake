#pragma once

#include "Snake.h"
#include "Board.h"
#include <random>

class Goal {
public:
	Goal(std::mt19937& rng, const Board& brd, Snake& snake);
	void Respawn(std::mt19937& rng, const Board& brd, Snake& snake);
	void Draw(Board& brd) const;
	void Destroy(Board& brd) const;
	const Location& GetLocation() const;
private:
	Location loc;
	static constexpr Color c = Colors::Red;
	static constexpr Color destroy = Colors::Black;
};
