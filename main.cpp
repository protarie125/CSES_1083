#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n;
	cin >> n;

	auto ans = (n * (n + 1)) / 2;
	for (auto i = 1; i < n; ++i) {
		ll x;
		cin >> x;

		ans -= x;
	}

	cout << ans;

	return 0;
}