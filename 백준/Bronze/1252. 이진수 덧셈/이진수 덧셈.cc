#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long llu;
#define max(a,b) (a > b ? a : b)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string a, b;
	string bstring;
	cin >> a >> b;
	int b_size = 0, ssize = 0, tmp = 0;
	int asize = 0, bsize = 0, start = 0;
	
	if (a.size() > b.size()) {
		b_size = a.size();
		ssize = b.size();
		bstring = a;
	}
	else {
		b_size = b.size();
		ssize = a.size();
		bstring = b;
	}

	int* num = new int[b_size + 1];
	asize = a.size(); bsize = b.size();
	for (int i = 0; i < b_size + 1; i++) {
		num[i] = 0;
	}

	while (1) {
		if (ssize == 0) break;
		if (tmp + (a[asize - 1] - '0') + (b[bsize - 1] - '0') > 1) {
			num[b_size] = tmp + (a[asize - 1] - '0') + (b[bsize - 1] - '0') - 2;
			tmp = 1;
		}
		else {
			num[b_size] = tmp + (a[asize - 1] - '0') + (b[bsize - 1] - '0');
			tmp = 0;
		}
		asize--; bsize--; ssize--; b_size--;
	}

	if (b_size - ssize > 0) {
		while (1) {
			if (b_size == 0) break;
			if (tmp + (bstring[b_size - 1] - '0') > 1) {
				num[b_size] = 0;
				tmp = 1;
			}
			else {
				num[b_size] = tmp + (bstring[b_size - 1] - '0');
				tmp = 0;
			}
			b_size--;
		}
	}

	if (tmp == 1) num[0] = 1;
	else num[0] = 0;

	for (int i = 0; ;i++) {
		if (num[i] == 1) {
			start = i; break;
		}
		else start = -1;
		if (i == max(a.size(), b.size())) break;
	}
	if (start == -1) cout << "0";
	else {
		for (int i = start; i < max(a.size(), b.size()) + 1; i++) {
			cout << num[i];
		}
	}
	
	return 0;
}