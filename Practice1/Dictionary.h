#pragma once

#include "Pair.h"

namespace Practice1 {

	using namespace System;
	using namespace System::Text;
	using namespace System::IO;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;

	ref class Dictionary
	{
	private:
		String ^ fileName;
		List <Pair^> ^ pairs;
		bool loaded;

	public:
		Dictionary(String ^ fileName);

		void Load();
		void Save();
		void Add(Pair ^ pair);
		void Add(String ^ word, String ^ info);
		void Remove(Pair ^ pair);
		Pair ^ FindByWord(String ^ word);
		void ViewWordsStartWith(ListBox ^ lb, String ^ startWith);
		void View(ListBox ^ lb);
	};

}