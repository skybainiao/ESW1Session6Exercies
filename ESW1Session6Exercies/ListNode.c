#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstdint>
#include "LinkedList.h"
#include "ListNode.h"


typedef struct listNode {
	void* item;
    struct listNode* next;
}listNode;