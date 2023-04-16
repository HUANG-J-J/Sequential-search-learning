#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define STlen 20
#define range 20

typedef int ElemType;
typedef struct {
	ElemType* elem;   //整型指针
	int TableLen;     //动态数组内的元素个数
}SSTable;

void ST_init(SSTable& ST, int len);
void ST_print(SSTable ST);
int ST_search(SSTable ST, ElemType key);
void ST_printkey(SSTable ST, int pos);
