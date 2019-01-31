include <iostream>
using namespace std;

int main(){
	char game = 'Y';
	
	while(('Y' == game) || ('y' == game)){
		cout << " Do you want to play a game?" << endl;
		cout << " (Y/n)" << endl;
		cin >> game;
	
		if( ('Y' == game) || ('y' == game)){
		cout <<" How about thermonuclear war?" <<endl;
		} else {
		cout << " Goodbye then " << endl;
		}
	}
	
	
	return0;
}