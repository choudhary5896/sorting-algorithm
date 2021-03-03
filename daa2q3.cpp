#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;

	cout <<"Following activities are selected "<< endl;
	i = 0;
	cout <<" "<< i;
	for (j = 1; j < n; j++)
	{
	if (s[j] >= f[i])
	{
		cout <<" " << j;
		i = j;
	}
	}
}
int main()
{
	int n;
    cin>>n;
    int s[n] = {1, 3, 0, 5, 8, 5};
	int f[n] = {2, 4, 6, 7, 9, 9};

	printMaxActivities(s, f, n);
	return 0;
}
