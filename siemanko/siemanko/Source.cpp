/*include <iostream>

using namespace std;

#define mask (uint8_t)0x0F
#define neg_mask (uint8_t)0x01

uint8_t var_to_mask = 255;

int main() {

	int v1 = 1;
	int v2 = 2;

	if (v1 == 1 && v2 == 2) {
		cout << "if &&" << endl;
	}

	if (v1 == 1 || v2 == 144) {
		cout << "if ||" << endl;
	}

	uint8_t result_of_multiply = var_to_mask & mask;

	var_to_mask &= mask;

	cout << (int)var_to_mask << endl;


	uint8_t var_to_neg = 0x03;

	var_to_neg ^= neg_mask;

	cout << (int)var_to_neg << endl;


	system("pause");
	return 0;
}*/