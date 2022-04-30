#pragma once
#include<stdbool.h>
#include <cstdint>
#include "ListNode.h"
#include "ListNode.c"


typedef enum {
	OK,
	EMPTY,
	NOT_FOUND,
	FULL,
	FOUND
}LinkedListReturnCode;


typedef struct linkedList* linkedList_t;

LinkedListReturnCode linkedList_destroy(linkedList_t self);
LinkedListReturnCode linkedList_push(linkedList_t self,void* item);
void* linkedList_pull(linkedList_t self);
LinkedListReturnCode linkedList_containsItem(linkedList_t self,void* item);
LinkedListReturnCode linkedList_removeItem(linkedList_t self,void* item);
void* linkedList_peekItemByIndex(linkedList_t self,uint16_t index);
uint16_t linkedList_length(linkedList_t self);
void linkedList_clear(linkedList_t self);
linkedList_t linkedList_create();
