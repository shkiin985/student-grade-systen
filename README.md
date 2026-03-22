#include<iostream>
#include<vector>
#include<algorithm>
int main() {
	std::vector<int> prices{ 7,1,5,3,6,4 };
	int min_prics = prices[0];
	int max_profit = 0;
	for (int i = 1; i < prices.size(); i++) {
		int current_price = prices[i];
	    min_prics = std::min(min_prics, current_price);
		max_profit = std::max(max_profit, current_price - min_prics);
	}
	std::cout << "�������Ϊ��" << max_profit << "\n";
	return 0;
}
