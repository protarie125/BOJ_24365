#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto sum = a + b + c;
	auto avg = sum / 3;

	if (a == avg && b == avg && c == avg) {
		cout << 0;
		return 0;
	}

	if (b < avg) {
		if (avg <= a && avg <= c) {
			cout << avg - b;
			return 0;
		}

		if (a < avg) {
			cout << (avg - b) + 2 * (avg - a);
			return 0;
		}

		if (c < avg) {
			cout << (avg - b) + 2 * (avg - c);
			return 0;
		}
	}
	else {
		if (a < avg && c < avg) {
			cout << b - avg;
			return 0;
		}

		if (avg <= a) {
			cout << 2 * (a - avg) + (b - avg);
			return 0;
		}

		if (avg <= c) {
			cout << 2 * (c - avg) + (b - avg);
			return 0;
		}
	}

	return 0;
}