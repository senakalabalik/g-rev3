#include <iostream>
#include <vector>


template <class T> 

std::vector<std::vector<T> > create_matrix(T(x), int(rows), int(cols)) {
	std::vector< std::vector<int> > matrix ;
	std::vector<int>invector;
		for (int j = 0; j < cols; j++) {
			invector.push_back(x);
		}
	for (int i = 0; i < rows; i++) {
		matrix.push_back(invector);
	}
	return matrix ;
}


int main() {

	create_matrix(int(5),int(3),int(3))	; //örnek input
}

