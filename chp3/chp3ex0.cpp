// chp3ex0.cpp
// �߰����, �⸻���, �׸��� ���� ���� ��� �ް� ������ ��� ������ ����ϱ�
#include <ios>
#include <iomanip> 
#include <iostream>
#include <string>

using std::cin; using std::setprecision; // �Ǽ� ���� ���� ����
using std::cout; using std::string;
using std::endl; using std::streamsize; // ���� �� �ִ� �Է� ������

int main() {
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl; // +�� ���� �ǹ�

	// �߰����� �⸻��� ������ ���� �Է¹ޱ�
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final; // �Է� 2�� ����

	// ���� ������ ����
	cout << "Enter all homework grades: " // ���ڿ� enter ���ڿ� - �ڵ�����
		"followed by EOF: ";

	// ���ݱ��� �Էµ� ���� ������ ������ ��
	int count = 0; // ���� �?
	double sum = 0; // �ջ� ��� - 0.0 (�ڵ����� �����Ϸ����� 0�̶� �ᵵ 0.0���� ����)
	
	// �Է��� ���� ����
	double x; // cin���� ����ϱ�
	
	// �Һ���: ���ݱ��� count�� ������ �Է¹޾����� �Է¹��� ������ ���� sum
	while (cin >> x) { //x�� �ԷµǸ� ��� �������� ����
		++count; // ���� 1, 2, 3, 4, 5 ...
		sum += x; // 0�� + 9�� + 15�� + ...
	}

	// ����� ���
	streamsize prec = cout.precision(); // precision �ʱ�ȭ
	cout << "Final grade: " << setprecision(3) << 0.2 * midterm + 0.4 * final + 0.4 + sum / count << setprecision(prec) << endl;

	return 0;
} // main ��