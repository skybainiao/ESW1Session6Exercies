#pragma once
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <cstdint>
#include "LinkedList.h"
#include "ListNode.h"
#include "ListNode.c"

#include <stdint.h>


typedef struct linkedList {
	int size;
	listNode* head;
	listNode* end;
}linkedList;


linkedList_t linkedList_create() {
	linkedList_t newlist = calloc(sizeof(linkedList), 1);

	if (NULL == newlist) {
		return NULL;
	}

	newlist->size = 0;
	newlist->head == NULL;
	newlist->end = newlist->head;

	return newlist;
}


LinkedListReturnCode linkedList_destroy(linkedList_t* self) {
	free(*self);
	*self = NULL;
	return OK;
}


LinkedListReturnCode linkedList_push(linkedList_t self,void* item){
	listNode* newNode = malloc(sizeof(listNode));
	newNode->item = item;
	if (self->size = 0)
	{
		self->head->item = newNode->item;
		self->head->next = NULL;
		self->size++;
		return OK;
	}
	if (self->size = 1)
	{
		self->head->next = newNode;
		newNode->next = NULL;
		self->size++;
		return OK;
	}
	if (self->size>1)
	{
		self->end->next = newNode;
		newNode->next = NULL;
		self->size++;
		return OK;
	}
	
}


void* linkedList_pull(linkedList_t self) {
	if (self->size = 0)
	{
		return EMPTY;
	}
	if (self->size>0)
	{
		return self->head->item;
	}
}


LinkedListReturnCode linkedList_containsItem(linkedList_t self,void* item) {
	if (self->size = 0)
	{
		return EMPTY;
	}
	if (self->size = 1)
	{
		if (self->head->item = item)
		{
			return FOUND;
		}
		else
		{
			return NOT_FOUND;
		}
	}
	if (self->size>1)
	{
		listNode* node = self->head;
		for (int i = 0; i < self->size; i++)
		{
			node = node->next;
			if (node->item = item)
			{
				return FOUND;
			}
			else
			{
				return NOT_FOUND;
			}
		}

	}
}


LinkedListReturnCode linkedList_removeItem(linkedList_t self,void* item) {
	if (self->size = 0)
	{
		return EMPTY;
	}
	if (self->size = 1)
	{
		if (self->head->item = item)
		{
			self->head == NULL;
			self->size = 0;
			return OK;
		}
		else
		{
			return NOT_FOUND;
		}
	}
	if (self->size>0)
	{
		listNode* node = self->head;
		for (int i = 0; i < self->size; i++)
		{
			node = node->next;
			if (node->item = item)
			{
				node == NULL;
				return OK;
			}
			else
			{
				return NOT_FOUND;
			}
		}
	}
	
}


void* linkedList_peekItemByIndex(linkedList_t self,uint16_t index) {
	listNode* node = self->head;

	for (int i = 0; i < self->size; i++)
	{
		node = node->next;
		if (i = index)
		{
			return node->item;
		}
	}


}


uint16_t linkedList_length(linkedList_t self) {
	if (self->size = 0)
	{
		return EMPTY;
	}
	if (self->size>0)
	{
		return self->size;
	}
}


void linkedList_clear(linkedList_t self) {
	self->head == NULL;
	self->end = self->head;
	self->size = 0;
}

