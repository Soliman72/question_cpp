#include <iostream>
#include <string>
using namespace std;

struct question {
	string title;
	string ans[3];
	int correctAns;
};

bool checkAns(int correct) {
	int ans;
	cout << "choose 1-3 : ";
	cin >> ans;
	// check correct choose
	while (ans > 3 || ans < 1) {
		cout << "error in number => choose between 1 and 3 : ";
		cin >> ans;
	}
	cout << "====================\n";


	// check ans 
	if (ans == correct)
		return true;
	else
		return false;
}

bool quiz(question x) {
	cout << x.title << "\n";
	for (int i = 0; i < 3; i++)
		cout << i + 1 << ". " << x.ans[i] << " \n";
	// send correct answer of the Q to the checkAns F.
	return checkAns(x.correctAns); // return true or false
}

int main() {
	int score = 0;

	question q1;
	q1.title = "What is the smallest country ?";
	q1.ans[0] = "USA";
	q1.ans[1] = "indian";
	q1.ans[2] = "Vatican City";
	q1.correctAns = 3;
	
	question q2;
	q2.title = "What is the biggest animal in the world ?";
	q2.ans[0] = "Elephant";
	q2.ans[1] = "Blue whale";
	q2.ans[2] = "Great white shark";
	q2.correctAns = 2;

	question q3;
	q3.title = "How many elements are there in the periodic table of element ?";
	q3.ans[0] = "118 elements";
	q3.ans[1] = "119 elements";
	q3.ans[2] = "120 elements";
	q3.correctAns= 1;

	question q4;
	q4.title = "155 % 10 ?";
	q4.ans[0] = "15";
	q4.ans[1] = "5";
	q4.ans[2] = "15,5";
	q4.correctAns= 2;

	question q5;
	q5.title = "Where is Bali";
	q5.ans[0] = "1. Malaysia";
	q5.ans[1] = "2. Venezuela";
	q5.ans[2] = "3. Indonesia";
	q5.correctAns = 3;

	score += quiz(q1);
	score += quiz(q2);
	score += quiz(q3);
	score += quiz(q4);
	score += quiz(q5);

	cout << " you get a score " << score << " / 5 \n";

	return 0;
}