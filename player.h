#ifndef PLAYER_H
#define PLAYER_H

class Player
{
	public:
		Player();
		~Player();
		int score;
		int turn_total;
		bool hold;
		void endTurn(int roll);
		void increaseTurnTotal(int roll);
		bool did_win;
};

#endif
