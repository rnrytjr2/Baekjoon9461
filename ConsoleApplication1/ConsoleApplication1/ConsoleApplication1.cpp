// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
long long P(int length);
long long DP[101];
int main()
{
	int N, T;
	cin >> T;
	DP[1] = 1;
	DP[2] = 1;
	DP[3] = 1;
	DP[4] = 2;
	DP[5] = 2;
	DP[6] = 3;
	DP[7] = 4;
	DP[8] = 5;
	DP[9] = 7;
	DP[10] = 9;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << P(N)<<"\n";
	}
}
long long P(int length)
{
	if (DP[length] != 0)
	{
		return DP[length];
	}
	else
	{
		DP[length] = P(length - 1) + P(length - 5);
		return DP[length];
	}
}
///1,1,1,2,2,3,4,5,7,9,12,16,21,28