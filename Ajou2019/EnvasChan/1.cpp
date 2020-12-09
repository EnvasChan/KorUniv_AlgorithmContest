#include"선택.h"

#ifdef semple
#include <iostream>
#include <vector>
#include <algorithm>
#include<array>
using namespace std;
int main()
{
	int n = 0;
	int l = 0;
	int k = 0;
	int a = 0;
	int sum = 0;
	int count = 0;

	vector<int> values;

	int pro[101][2];

	cin >> n >> l >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> pro[i][0] >> pro[i][1];
	}

	for (int i = 0; i < n; i++)
	{
 		if (pro[i][0] <= l)
		{
			values.push_back(100);
		
			if (pro[i][1] <= l)
			{		
				values.back() += 40;// 맨 뒤에 있는 값에 살포시 얹어준다.
			}
		}
	}

	sort(values.begin(), values.end(), greater<int>());

	for (int i = 0; i < values.size() && i < k; i++)
	{
		sum += values[i];
	}

	cout << sum;

	return 0;
}


#endif