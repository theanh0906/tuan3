#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[10000];
	srand(time(NULL));
	bool check = false;
	for (int i= 0; i < n; i++)
	{
		arr[i] = rand() % 100 + 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<endl;
	}
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				check = true;
				cout << arr[i];
				break;
			}

		}
		if (check == true)
			break;
	}
	if (check)
		cout << "yes";
	else
		cout << "no";

	return 0;
}
