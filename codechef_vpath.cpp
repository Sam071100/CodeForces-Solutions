#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long result;
vector<vector<long long> > v;
vector<long long> solutionArray;
vector<long long> totalVal;

void dfs(long long cur, long long par)
{
	solutionArray[cur] = totalVal[cur] = 1;
	long long sum = 0, cnt = 0;

	for (long long i = 0; i < (v[cur].size()); i++)
	{
		long long node = v[cur][i];
		if (node != par)
		{
			dfs(node, cur);
			solutionArray[cur] += ((2 * solutionArray[node]) % 1000000007);
			solutionArray[cur] %= 1000000007;
			cnt++;
			totalVal[cur] += totalVal[node];
			totalVal[cur] %= 1000000007;
			totalVal[cur] += solutionArray[node];
			totalVal[cur] %= 1000000007;
			sum += solutionArray[node];
		}
	}
	for (long long i = 0; i < (v[cur].size()); i++)
	{
		long long node = v[cur][i];
		if (node != par)
		{
			totalVal[cur] += (solutionArray[node] * ((sum - solutionArray[node] + 1000000007) % 1000000007)) % 1000000007;
			totalVal[cur] %= 1000000007;
		}
	}
}


int main()
{
	fastIO
	long long T, n;
	cin >> T;
	while (T--)
	{
		result = 0;
		cin >> n;
		v.resize(n + 1);
		solutionArray.resize(n + 1);
		totalVal.resize(n + 1);

		long long l, r;
		for (long long i = 0; i < n - 1; i++)
		{
			cin >> l >> r;
			v[l].push_back(r);
			v[r].push_back(l);
		}

		dfs(1, 1);
		long long result = totalVal[1] % 1000000007;
		cout << result << "\n";

		solutionArray.clear();
		v.clear();
		totalVal.clear();
	}

	return 0;
}