// week01-3.cpp
#include <iostream> // �ϥ� C++ ���~��, �t�d��JInput ��XOutput
using namespace std; // �ϥ� C++ �� std �� �R�W�Ŷ�

int main()
{
	int n;
	cin >> n; // �ϥ� C++ �� Console Input ��J��r���
	int ans = 0;
	for(int i=1; i<=n; i++){
		ans += i*i;
	}
	cout << ans; // �ϥ� C++ �� Console Output ��X��r���
}
