#include <iostream>
using namespace std;

int main() {
	int mass[10];
	for (int i=0; i<10; i++){
		cin >> mass[i];
	}
	int step = 10 / 2, i, j, tmp, k=0, c=0;
		while (step > 0) {
			k=k+1;
			for(i = step; i < 10; ++i) {
				tmp = mass[i];
 
				for(j = i - step; j >= 0 && mass[j] > tmp; j -= step) {
					mass[j+step] = mass[j];
					c=c+1;
 
				}
				mass[j+step] = tmp;
			}
			step /= 2;
		  }
		for (int i=0; i<10; i++){
			cout << mass[i] << endl;
		}
		cout << k << endl;
		cout << c << endl;
	system("pause");
	return 0;
}

