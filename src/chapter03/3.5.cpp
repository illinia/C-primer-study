#include "include_header.h"

int main()
{
	unsigned cnt = 42;
	constexpr unsigned sz = 42;

	int arr[10];
	int* parr[sz];
	//string bad[cnt];
	//string strs[get_size()];

	const unsigned sz = 3;
	int ia1[sz] = { 1,2,3 };
	int a2[] = { 0,1,2 };
	int a3[5] = { 0,1,2 };
	string a4[3] = { "hi", "bye" };
	//int a5[2] = { 0, 1, 2 };

	char a1[] = { 'C', '+', '+' };
	char a2[] = { 'C', '+', '+', '\0' };
	char a3[] = "C++";
	//const char a4[6] = "Daniel";
	int a[] = { 0, 1, 2 };
	//int a2[] = a;
	//a2 = a;

	int* ptrs[10];
	//int& refs[10];
	int(*Parray)[10] = &arr;
	int(&arrRef)[10] = arr;

	int* (&array)[10] = ptrs;

	unsigned scores[11] = {};
	unsigned grade;
	while (cin >> grade) {
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)
		cout << i << " ";
	cout << endl;

	//string nums[] = { "one", "tow", "three" };
	//string* p = &nums[0];
	//
	//string* p2 = nums;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);
	//ia2 = 42;

	decltype(ia) ia3;
	//ia3 = p;
	//ia3[4] = i;

	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p = arr;
	++p;

	int* e = &arr[10];

	for (int* b = arr; b != e; ++b)
		cout << *b << endl;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* beg = begin(ia);
	int* last = end(ia);

	// pbeg�� arr�� ù ��Ҹ�, pend�� ������ ��� �ٷ� ���� ��ġ
	int* pbeg = begin(arr), * pend = end(arr);

	// ������ ù ��° ��Ҹ� ã���� ��� ��Ҹ� Ȯ���ϸ� �����
	while (pbeg != pend && *pbeg >= 0)
		++pbeg;

	constexpr size_t sz = 5;
	int arr[sz] = { 1,2,3,4,5 };
	int* ip = arr;
	int* ip2 = ip + 4;

	int* p = arr + sz;
	//int* p2 = arr + 10;

	ptrdiff_t n = end(arr) - begin(arr);
	
	int* b = arr, * e = arr + sz;
	while (b < e) {
		++b;
	}

	/*int i = 0;
	int sz1 = 42;
	int* p1 = &i, * e = &sz1;
	while (p1 < e) {}*/

	int ia[] = { 0, 2, 4, 6, 8 };
	int last = *(ia + 4);
	//last = *ia + 4;

	int ia[] = { 0, 2, 4, 6, 8 };

	int i = ia[2];
	int* p = ia;
	i = *(p + 2);

	int* p = &ia[2];
	int j = p[1];
	int k = p[-2];
}