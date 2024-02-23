#include <iostream>
#include "Player.h"
#include "Dartboard.h"

using namespace std;

int main() {
	Dartboard D;
	char s = 's';
	char j = 'j';
	int no_of_turns = 0;
	int sid_victory_counter = 0;
	int joe_victory_counter = 0;

	cout << "How many games would you like to simulate? " << endl;
	cin >> no_of_turns;

	for (int i = 0; i < no_of_turns;) {

		if (D.sidtotalscore == 0) {
			cout << "Sid won 1 game!" << endl;
			sid_victory_counter++;
			i++;
		}
		else if (D.joetotalscore == 0) {
			cout << "Joe won 1 game!" << endl;
			joe_victory_counter++;
			i++;
		}
		if (D.throwdart(s) != -2) { //if it equals this jsust go to top for loop again wont alter variables as quits by returning before that
			//Just worried that if i write it like this it wont fix the rproblem, is all i need to do throw the dart again? yes it is
			cout << "Sids dart thrown successfully" << endl;
		}
		if (D.throwdart(j) != -2) { // if it doesnt hit the -2 on this throw itll keep on going and alter it 
			cout << "Joes Dart thrown successfully" << endl;
		}
	}
	cout << no_of_turns << " Sid " << sid_victory_counter << " Joe " << joe_victory_counter << endl;

	cout << "Sids percentage success rate: " << (double)sid_victory_counter / no_of_turns * 100 << "%" << endl;
	cout << "Joes percentage success rate: " << (double)joe_victory_counter / no_of_turns * 100 << "%" << endl;

	return 0;
}