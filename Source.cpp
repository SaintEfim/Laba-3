#include <iostream>
#include <conio.h>
#include <Windows.h> 
using namespace std;
//bool is_number(char number[]);
//int char_to_int(char number[]);
void screen_exit();
void screen1();
void screen2();
void vod();
void screen_error(int error);
void otvet(double& XBegin, double& XEnd, double& YBegin, double& YEnd, double& XWalk, double& YWalk);
void proverka(double X, double Y, double Z, short int b);
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
COORD position = { 0, 0 };
int main()
{
	setlocale(LC_ALL, "rus");
	bool proverka = true;
	char chose;
	setlocale(LC_ALL, "rus");
	screen1();
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		screen2();
	}
	else if (chose == 27) {
		system("cls");
		screen_exit();
	}
	return 0;
}
//bool is_number(char number[]) {
//	for (int i = 0; i < 100; i++) {
//		if ((char)number[i] != -52 && number[i] != '\0') {
//			if (!((char)number[i] >= 48 && (char)number[i] <= 57 && number[i]))
//				return false;
//		}
//		else
//			return true;
//	}
//}
//int char_to_int(char number[]) {
//	int number_of_digits = 0;
//
//	for (int i = 0; number[i] != '\0'; i++) {
//		if ((char)number[i] != -52) {
//			number_of_digits++;
//		}
//	}
//
//	if (number_of_digits == 1) {
//		return ((char)(number[0] - 48));
//	}
//	if (number_of_digits == 2) {
//		return ((char)(number[0] - 48) * 10 + (char)(number[1] - 48));
//	}
//	if (number_of_digits == 3) {
//		return (((char)(number[0] - 48) * 100) + (((char)(number[1])) - 48) * 10 + (char)(number[2]) - 48);
//	}
//}
void screen_exit()
{
	system("cls");
	int height = 7;
	int weight = 40;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 16) cout << "График";
				else if (j == weight - 5) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 9) cout << "Завершила свою работу";
				else if (j == weight - 20) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == weight) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 26)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Повтор";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	bool proverka = true;
	char chose;
	proverka = ((chose = _getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		screen2();
	}
	else if (chose == 27) {
		system("cls");
		exit(0);
	}
}
void screen1()
{
	int height = 7;
	int weight = 45;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i == 2 || i == 3 || i == 4 || i == 5) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Программа";
				else if (j == weight - 8) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 5) cout << "Организация циклических вычислений";
				else if (j == weight - 33) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 15) cout << "Гр. 1092";
				else if (j == weight - 7) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 8) cout << "Феденко Ефим Михайлович";
				else if (j == weight - 22) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 25)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Далее";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
}
void screen2()
{
	int height = 8, weight = 45;
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < height - 1; i++) {
		bool i_is_not_a_second_third_fourth_and_fifth = (i==1||i == 2 || i == 3 || i == 4 || i == 5 || i == 6) ? 0 : 1;
		for (int j = 0; j <= weight; j++) {
			if ((j == 0 || j == weight) && i_is_not_a_second_third_fourth_and_fifth) {
				cout << "|";
			}
			else if (i == 1) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Хнач=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else if (i == 2) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Хкон=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else if (i == 3) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Хшаг=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else if (i == 4) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Yнач=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else if (i == 5) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Yкон=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else if (i == 6) {
				if (j == 0) cout << "|";
				else if (j == 12) cout << "Yшаг=";
				else if (j == weight - 4) cout << "|";
				else cout << " ";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j <= weight; j++) {
			if (j == 0 || j == weight - 25)
				cout << "|";
			else if (j == 7) {
				cout << "Esc - Выход  Enter - Далее";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < weight + 1; i++) {
		cout << "-";
	}
	cout << "\n";
	vod();
}
void vod()
{
	int error=0;
	double XBegin, XEnd, YBegin, YEnd, XWalk, YWalk;
	position = { 17, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> XBegin;
	//while (cin.fail()) {
	//	cout << "Invalid values." << '\n';
	//	cin.clear();
	//	cin.ignore(256, '\n');
	//	cin >> XEnd;
	//}
	do {
		screen_error(error);
		position = { 17, 3 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> XEnd;
		//screen_error(error);
		error=1;
	} while (XEnd < XBegin);
	error = 0;
	screen_error(error);
	do {
		screen_error(error);
		position = { 17, 4 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> XWalk;
		error = 2;
	} while (XWalk <= 0);
	error = 0;
	screen_error(error);
	position = { 17, 5 };
	SetConsoleCursorPosition(hConsole, position);
	cin >> YBegin;
	do {
		screen_error(error);
		position = { 17, 6 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> YEnd;
		error = 1;
	} while (YEnd < YBegin);
	error = 0;
	screen_error(error);
	do {
		screen_error(error);
		position = { 17, 7 };
		SetConsoleCursorPosition(hConsole, position);
		cin >> YWalk;
		error = 2;
	}while(YWalk <= 0);
	otvet(XBegin, XEnd, YBegin, YEnd, XWalk, YWalk);
}
void screen_error(int error)
{
	if (error == 0) {
		position = { 7, 9 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "Esc - Выход  Enter - Далее";
	}
    else if (error==1) {
		position = { 0, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "---------------------------------------------" << endl;
		cout << "|           Конец больше начало!            " << endl;
		cout << "---------------------------------------------" << endl;
	} 
	else if (error==2) {
		position = { 0, 8 };
		SetConsoleCursorPosition(hConsole, position);
		cout << "---------------------------------------------" << endl;
		cout << "|            Шаг отрицательный!             " << endl;
		cout << "---------------------------------------------" << endl;
	}
}
void otvet(double& XBegin, double& XEnd, double& YBegin, double& YEnd, double& XWalk, double& YWalk)
{
	double X=0, Y=0,Z=0;
	X = XBegin;
	system("cls");
	short int a = 55;
	short int  b = 3;
	cout << "--------------------------------------------------------";
	position = { 0, 1 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "|X           |Y           |Z                           |";
	position = { 0, 2 };
	SetConsoleCursorPosition(hConsole, position);
	cout << "--------------------------------------------------------";
	do {
		for (Y = YBegin; Y <= YEnd; Y += YWalk) {
			position = { 0, b };
			SetConsoleCursorPosition(hConsole, position);
			cout << "|";
			proverka(X, Y, Z, b);
			cout << endl;
			position = { a, b };
			SetConsoleCursorPosition(hConsole, position);
			cout << "|";
			cout << endl;
			b++;
		}
		X = X + XWalk;
	} while (X <= XEnd);
	cout << "--------------------------------------------------------"<<'\n';
	cout << "|         Esc-выход                  Enter-повтор      |"<<'\n';
	cout << "--------------------------------------------------------";
	bool proverka = true;
	char chose;
	proverka = ((chose =_getch()) == 27) ? 0 : 1;
	//ASCII "Esc" = 27, ASCII "Enter" = 13;
	if (chose == 13) {
		system("cls");
		screen2();
	}
	else if (chose == 27) {
		system("cls");
		screen_exit();
	}
}
void proverka(double X, double Y, double Z,short int b)
{
	if ((X+1)<=0){
		position = { 1, b };
		SetConsoleCursorPosition(hConsole, position);
		cout << X;
		position = { 13, b };
		SetConsoleCursorPosition(hConsole, position);
		cout << "|" << Y << '\t';
		position = { 26, b };
		SetConsoleCursorPosition(hConsole, position);
		cout << "|Значение не определенно";
	}
	else{
		Z = (pow(X, 2) + 2 * cos(Y) + 1) / (log10(fabs(1 + sqrt(X + 1))));
		position = { 1, b };
		SetConsoleCursorPosition(hConsole, position);
		cout << X;
		position = { 13, b };
		SetConsoleCursorPosition(hConsole, position);
		cout <<"|" << Y <<'\t';
		position = { 26, b };
		SetConsoleCursorPosition(hConsole, position);
		cout <<"|" << Z;
	}
}
