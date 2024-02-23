#include "Player.h"
Player::Player() {

}

Player::~Player() {

}



int Player::checkDart(int a) {
	Dartboard D;
	int totalscore = a;

	if (a == 0) {
		D.sidtotalscore = 301;
		D.joetotalscore = 301;
	}
	if (50 > a) {
		return -2; 
	}

	else if (a == 50) {
		return 50;
	}

	else if (totalscore - 50 >= 50) {
		return 50;
	}

	else if (totalscore - 20 >= 50) { //Much neater way to do this using for loop: get simply working first
		return 20;
	}

	else if (totalscore - 19 >= 50) {
		return 19;
	}

	else if (totalscore - 18 >= 50) {
		return 18;
	}

	else if (totalscore - 17 >= 50) {
		return 17;
	}

	else if (totalscore - 16 >= 50) {
		return 16;
	}

	else if (totalscore - 15 >= 50) {
		return 15;
	}

	else if (totalscore - 14 >= 50) {
		return 14;
	}

	else if (totalscore - 13 >= 50) {
		return 13;
	}

	else if (totalscore - 12 >= 50) {
		return 12;
	}

	else if (totalscore - 11 >= 50) {
		return 11;
	}

	else if (totalscore - 10 >= 50) {
		return 10;
	}

	else if (totalscore - 9 >= 50) {
		return 9;
	}

	else if (totalscore - 8 >= 50) {
		return 8;
	}

	else if (totalscore - 7 >= 50) {
		return 7;
	}

	else if (totalscore - 6 >= 50) {
		return 6;
	}

	else if (totalscore - 5 >= 50) {
		return 5;
	}

	else if (totalscore - 4 >= 50) {
		return 4;
	}

	else if (totalscore - 3 >= 50) {
		return 3;
	}

	else if (totalscore - 2 >= 50) {
		return 2;
	}

	else if (totalscore - 1 >= 50) {
		return 1;
	}
}
