#include "function.h"

int main() {
	ElemType key = 10;
	SSTable ST;
	ST_init(ST, STlen);
	ST_print(ST);
	ST_printkey(ST, ST_search(ST, key));
	return 0;
}