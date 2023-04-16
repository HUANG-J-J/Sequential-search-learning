#include "function.h"

void ST_init(SSTable& ST, int len) {
	ST.TableLen = len + 1;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i = 0;
	srand(time(NULL));
	for (i = 1; i < ST.TableLen; i++) {
		ST.elem[i] = rand() % range;
	}
}

void ST_print(SSTable ST) {
	for (int i = 1; i < ST.TableLen; i++) {
		printf("%d ", ST.elem[i]);
	}
	printf("\n");
}

int ST_search(SSTable ST, ElemType key) {
	ST.elem[0] = key;
	int i = 0;
	for (i = ST.TableLen - 1; ST.elem[i] != key; i--);
	if (i != 0) {
		printf("THE POS IS %d\n", i);
	}
	else {
		printf("SEARCH FAIL\n");
	}
	return i;
}

void ST_printkey(SSTable ST, int pos) {
	if (0 == pos || pos >= ST.TableLen) {
		printf("PRINT FAIL\n");
	}
	else {
		printf("THE KEY IS %d", ST.elem[pos]);
	}
}