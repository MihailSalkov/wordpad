#include "Pair.h"

namespace Practice1 {

	Int32 Pair::CompareTo(Object^ obj)
	{
		if (obj == nullptr) return 1;

		Pair ^ b = (Pair^)obj;

		return String::Compare(word, b->Word);
	}

	Pair::Pair()
	{
		Word = "";
		Info = "";
	}

	Pair::Pair(String ^ word, String ^ info)
	{
		this->word = word;
		this->info = info;
	}
}