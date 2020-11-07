#pragma once
#include "Node.h";

template <typename T>
class DoubleLink
{
public:
	Node<T>* start;
	Node<T>* end;
	int count;

	DoubleLink() {
		start = nullptr;
		end = nullptr;
		count = 0;
	};

	~DoubleLink() {};

	bool IsEmpty() {
		return count == 0;
	}

	void InsertAtEnd(T new_value) {
		Node<T>* new_node = new Node<T>();
		new_node->value = new_value;

		if (IsEmpty()) {
			start = new_node;
			end = new_node;
		}
		else {
			end->next = new_node;
			new_node->prev = end;
			end = new_node;
		}

		count++;
		return;
	}
};

