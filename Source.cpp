#include <iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//Array11.Дан массив A размера N и целое число K(1 ≤ K ≤ N).Вывести элементы массива с порядковыми номерами, кратными K : AK, A2·K, A3·K, ....Условный оператор не использовать.
	/*srand(time(nullptr));
	const int N = 40;
	int K = 8;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl << "Числа с порядковым номером, кратным K : " << endl;
	for (int i = K; i < N; i=i+K)
	{
			cout << A[i] << ", ";
	}
	cout << endl;*/
	//Array12.Дан массив A размера N(N — четное число).Вывести его элементы с четными номерами в порядке возрастания номеров : A2, A4, A6, ..., AN.Условный оператор не использовать.
	/*srand(time(nullptr));
	const int N = 26;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl << "Числа с четным порядковым номером : " << endl;
	for (int i = 2; i < N; i=i+2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;*/
	//Array13.Дан массив A размера N(N —нечетное число).Вывести его элементы с нечетными номерами в порядке убывания номеров : AN, AN−2, AN−4, ..., A1.Условный оператор не использовать.
	/*srand(time(nullptr));
	const int N = 25;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl << "Числа с нечетным порядковым номером : " << endl;
	for (int i = N-1; i >= 1;i=i-2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;*/
	//Array14.Дан массив A размера N.Вывести вначале его элементы с четными номерами(в порядке возрастания номеров), а затем — элементы с нечетными номерами(также в порядке возрастания номеров) : A2, A4, A6, ..., A1, A3, A5, ....Условный оператор не использовать.
	/*srand(time(nullptr));
	const int N = 25;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl << "Числа с четным порядковым номером : " << endl;
	for (int i = 2; i < N; i=i+2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;
	cout << endl << "Числа с нечетным порядковым номером : " << endl;
	for (int i = 1; i < N; i=i+2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;*/
	//Array15.Дан массив A размера N.Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров : A1, A3, A5, ..., A6, A4, A2.
	/*srand(time(nullptr));
	const int N = 25;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl << "Числа с нечетным порядковым номером : " << endl;
	for (int i = 1; i < N; i=i+2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;
	cout << endl << "Числа с четным порядковым номером : " << endl;
	for (int i = N-1; i > 2; i=i-2)
	{
		cout << A[i] << ", ";
	}
	cout << endl;*/
	//Array16.Дан массив A размера N.Вывести его элементы в следующем порядке : A1, AN, A2, AN−1, A3, AN−2, ....
	/*srand(time(nullptr));
	const int N = 25;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl;
	cout << "Элементы в порядке по условию: " << endl;
	for (int i = 1; i < N; i++)
	{
		cout << A[i] << ", ";
		cout << A[N - i] << ", ";                                                        
	}
	cout << endl;*/
	//Array17.Дан массив A размера N.Вывести его элементы в следующем порядке : A1, A2, AN, AN−1, A3, A4, AN−2, AN−3, ... .
	/*srand(time(nullptr));
	const int N = 25;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = rand() % 51 - 25;
		cout << "Число - " << A[i] << "; Порядковый номер - " << i << endl;
	}
	cout << endl;
	cout << "Элементы в порядке по условию: " << endl;
	for (int i = 1; i < N; i=i+2)
	{
		cout << A[i] << ", ";
		cout << A[i+1] << ", ";
		cout << A[N - i] << ", ";
		cout << A[N - i - 1] << ", ";
	}
	cout << endl;*/
	
	
	
	
	
	
	
}