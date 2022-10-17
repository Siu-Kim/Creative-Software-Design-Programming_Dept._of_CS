#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>




using namespace std;

class SortedArray
{
	public:
		SortedArray();
		~SortedArray();

		void AddNumber(int num);

		vector<int> GetSortedAscending();
		vector<int> GetSortedDescending();
		int GetMax();
		int GetMin();

	private:
		vector<int> numbers_;
};

