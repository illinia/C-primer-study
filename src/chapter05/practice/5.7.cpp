#include "include_header.h"
#include "5.7.h"

int main() {
	int ival1, ival2;
	if (ival1 != ival2)
		ival1 = ival2; // ; �ʿ�
	else ival1 = ival2 = 0;

	int minval, ival, occurs;
	if (ival < minval)
		minval = ival;
	occurs = 1; // if ���� ��Ͽ� �߰�ȣ ������ 1���常 ����

	int ival = get_value(); // ival �� if �� �������� ������ if ��� �ȿ����� ��ȿ
	if (ival)
		cout << "ival = " << ival << endl;
	if (!ival)
		cout << "ival = 0\n";

	if (ival = 0) // 0�� ������ ival�� ���� if���� �����̹Ƿ� o�� false�� �����Ǿ� if�� ����� ������� ����
		ival = get_value();
}

int get_value() {
	return 0;
}