#include "sorted.h"

using namespace std;

SortedArray::SortedArray()
{
	numbers_ = numbers_;

}

SortedArray::~SortedArray()
{
	numbers_.clear();
}

void SortedArray::AddNumber(int num){
	numbers_.push_back(num);

}

vector<int> SortedArray::GetSortedAscending()
/* ascend 키워드를 통해 class SortedArray의 member variable numbers_를 오름차순으로 정렬
 */
{
	sort(numbers_.begin(), numbers_.end());
	return numbers_;
}

vector<int> SortedArray::GetSortedDescending()
/* descend 키워드를 통해 class SortedArray의 member variable numbers_를 내림차순으로 정렬
 */
{
	sort(numbers_.begin(), numbers_.end(), greater<int>());
	return numbers_;
}

int SortedArray::GetMax()
/* max 키워드를 통해 class SortedArray의 member variable numbers_에서 최댓값을 return
 */
{	vector<int> arr_max = numbers_;
	sort(arr_max.begin(), arr_max.end());
	return *(arr_max.end()-1);

}


int SortedArray::GetMin()
/* min 키워드를 통해 class SortedArray의 member variable numbers_에서 최솟값을 return
*/
{
	vector<int> arr_min = numbers_;
	sort(arr_min.begin(), arr_min.end());
	return *arr_min.begin();

}


