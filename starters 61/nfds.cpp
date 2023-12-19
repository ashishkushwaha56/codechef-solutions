#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<char>> &v, int x, int y, int n, int m) {
	int t = 1;
	int c = 0 ;
	queue<pair<int, int>> q;
	q.push({x, y});
	int ans = 1;
	pair<int, int> p;
	v[x][y] = 'X';
	while (!q.empty()) {
		p = q.front();
		q.pop();

		t--;
		if (p.first - 1 >= 0) {
			if (v[p.first - 1][p.second] == 'P') {
				q.push({p.first - 1, p.second});
				v[p.first - 1][p.second] = 'X';
				c++;
			}
		}
		if (p.first + 1 < n) {
			if (v[p.first + 1][p.second] == 'P') {
				q.push({p.first + 1, p.second});
				v[p.first + 1][p.second] = 'X';
				c++;
			}
		}
		if (p.second - 1 >= 0) {
			if (v[p.first][p.second - 1] == 'P') {
				q.push({p.first, p.second - 1});
				v[p.first][p.second - 1] = 'X';
				c++;
			}
		}
		if (p.second + 1 < m) {
			if (v[p.first][p.second + 1] == 'P') {
				q.push({p.first, p.second + 1});
				v[p.first][p.second + 1] = 'X';
				c++;
			}
		}
		if (p.first - 1 >= 0 and p.second - 1 >= 0) {
			if (v[p.first - 1][p.second - 1] == 'P') {
				q.push({p.first - 1, p.second - 1});
				v[p.first - 1][p.second - 1] = 'X';
				c++;
			}
		}
		if (p.first + 1 < n and p.second - 1 >= 0) {
			if (v[p.first + 1][p.second - 1] == 'P') {
				q.push({p.first + 1, p.second - 1});
				v[p.first + 1][p.second - 1] = 'X';
				c++;
			}
		}
		if (p.first - 1 >= 0 and p.second + 1 < m) {
			if (v[p.first - 1][p.second + 1] == 'P') {
				q.push({p.first - 1, p.second + 1});
				v[p.first - 1][p.second + 1] = 'X';
				c++;
			}
		}
		if (p.first + 1 < n and p.second < m) {
			if (v[p.first + 1][p.second + 1] == 'P') {
				q.push({p.first + 1, p.second + 1});
				v[p.first + 1][p.second + 1] = 'X';
				c++;
			}
		}
		if (t == 0) {
			if (c > 0) {
				ans++;
			}
			t = c;
			c = 0;
		}
	}
	cout << ans << endl;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int x, y;
	cin >> x >> y;
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> v[i][j];
		}
	}
	x--;
	y--;
	bfs(v, x, y, n, m);
}


int main() {
	solve();
	return 0;
}
