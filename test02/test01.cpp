#include <iostream>
using namespace std;
int get_tails(int number) {
	int tail = 0;
	int head = 0;

	for (int i = 0; i < number; i++) {
		int rnd = rand() % 20;
		if (rnd < 13) {
			tail++;
		}

	}
	return tail;

}
int main() {
	srand(time(NULL));
	int number = 1000;
	int head, tail;
	tail = get_tails(number);
	head = number - tail;
	cout << "heads - " << head << ",tails - " << tail << endl;

	return 0;
}