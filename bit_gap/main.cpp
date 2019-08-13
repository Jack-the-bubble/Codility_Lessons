#include <iostream>

int main() {
	int N = 328;

	int first  = -1;
	int scnd = -1;
	int max_gap = 0;
	int i  = 0;
	while (N>=1){
		if (N & 1){
			if (first == -1){
				first = i;
			} else {
//				check for max gap
				if (max_gap < i - first - 1)
					max_gap = i - first - 1;
				scnd = first;
				first = i;
			}
		}
		N = N>>1;
		i++;

	}


//	if (scnd == -1)
//		return 0;
//	else
//		return max_gap;
	int x;
	if (scnd == -1)
		max_gap = 0;



	std::cout << "Hello, World!" << std::endl;
	return 0;
}