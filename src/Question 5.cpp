/*
*
*@author - Muhammed Suwaneh
*@ESOGU Department of Computer Engineering
*
*
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#define size 10

using namespace std;

char display();
int randomInt(int, int);
char generate_Operator();
int perform_Calculation(char, int, int);
int display_Problem(char, int, int, int);
bool isCorrect(int, int);
void display_Results(int, int);

int main() {

	srand(time(NULL));

	int num1, num2, max, min, correct_answer, get_users_answer;
	bool get_evaluation;
	char level, oper;
	int correct = 0, wrong = 0, n = 0;
	char leave_quiz = ' ';

	cout << "---------------------- QUIZ ---------------------" << "\n\n";

	do {

		level = display();

		cout << endl;

		if (level == 'a' || level == 'A') {

			max = 9; min = 0;
		}
		else if (level == 'b' || level == 'B') {

			max = 999; min = 0;
		}

		else if (level == 'c' || level == 'C') {

			max = 9999; min = 0;
		}

		cout << "---------------------- QUESTIONS ---------------------" << "\n\n";

		do {

			num1 = randomInt(max, min);
			num2 = randomInt(max, min);

			oper = generate_Operator();
			correct_answer = perform_Calculation(oper, num1, num2);
			get_users_answer = display_Problem(oper, num1, num2, correct_answer);

			get_evaluation = isCorrect(get_users_answer, correct_answer);

			if (get_evaluation == true) {

				correct++;
			}

			else {

				wrong++;
			}

			n++;

		} while (n != 10);

		cout << "---------------------- RESULTS ---------------------" << "\n\n";
		display_Results(correct, wrong);

		cout << "Do you want to continue ? (y/n)" << endl;
		cin >> leave_quiz;

		if (leave_quiz == 'n' || leave_quiz == 'N') {

			cout << "Successfully terminated" << endl;
			cout << "Thanks" << endl;
			break;
		}

	} while (leave_quiz != 'n');

	cout << endl;
	system("pause");
}

char display() {

	char choice;

	do {
		cout << endl << "Levels" << "\n\n";
		cout << "Easy(a)" << endl;
		cout << "Moderate(b)" << endl;
		cout << "Advanced(c)" << endl;
	    cout << "Choose: ";
		cin >> choice;

		if (choice == 'a' || choice == 'A' || choice == 'b' || choice == 'B' || choice == 'c' || choice == 'C') {

			break;
		}

	} while (1);

	return choice;
}

int randomInt(int max, int min) {

	int num(-1);

	while (num < min || num > max)
		num = rand();

	return num;
}

char generate_Operator() {

	char oper = 1;

	while (oper != 43 && oper != 45)
		oper = rand();

	return oper;
}


int perform_Calculation(char oper, int num1, int num2) {

	switch(oper)
	{
    
	case 43:
			return num1 + num2;
		break;
	case 45:
			return num1 - num2;
		break;
	default:
		cout << "Syntax error" << endl;
		return 0;
		break;
	}
}

int display_Problem(char oper, int  num1, int num2, int correct_answer) {

	int answer, i;

	for (i = 1; i <= 2; i++) {
		if (i == 2) {
			cout << "Try again" << endl;
		}
		cout << num1 << oper << num2 << " = ";
		cin >> answer;
		cin.ignore();

		if (correct_answer == answer) {
			cout << "Correct" << endl;
			break;
		}

		else {

			cout << "Wrong" << endl;
		}
	}

	return answer;
}

bool isCorrect(int users_answer, int correct_answer) {

	if (users_answer == correct_answer) {
		 
		return true;
	}

	return false;

}

void display_Results(int correct, int wrong) {

	cout << "Corrects : " << correct << " " << endl;
	cout << "Wrongs: " << wrong << " " << endl;
}



