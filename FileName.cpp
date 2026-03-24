#include<iostream>
#include<vector>
class solution {
public:
	std::vector<std::vector<int>> generateMatrix(int n) {
		std::vector<std::vector<int>> res(n, std::vector<int>(n, 0));
		int startX = 0, startY = 0;
		int loop = n / 2;
		int mid = n / 2;
		int count = 1;
		int offset = 1;
		while (loop--) {
			int i = startX;
			int j = startY;
			for (; j < n - offset; j++) {
				res[i][j] = count++;
			}
			for (; i < n - offset; i++) {
				res[i][j] = count++;
			}
			for (; j >startY; j--) {
				res[i][j]=count++;
			}
			for (; i >startX; i--) {
				res[i][j]=count++;
			}
			startX++;
			startY++;
			offset++;
		}
		if (n % 2 != 0) {
			res[mid][mid] = count;
		}
		return res;
	}
};