#include "Dictionary.h"

namespace Practice1 {

	Dictionary::Dictionary(String ^ fileName)
	{
		this->fileName = fileName;
		pairs = gcnew List<Pair^>();
		loaded = false;
		Load();
	}

	void Dictionary::Load()
	{
		StreamReader ^ sr = gcnew StreamReader(fileName);
		String ^ line;
		Pair ^ pair;

		while (1)
		{
			line = sr->ReadLine();
			if (line == nullptr) break;
			if (line == "") continue;

			int sep = line->IndexOf(",");

			pair = gcnew Pair();
			pair->Word = line->Substring(0, sep);
			pair->Info = line->Substring(sep+1);

			Add(pair);
		}
		sr->Close();
		loaded = true;
	}

	void Dictionary::Save()
	{
		pairs->Sort();

		StreamWriter ^ sw = gcnew StreamWriter(fileName);
		for each (Pair ^ pair in pairs)
			sw->WriteLine(pair->Word + "," + pair->Info);

		sw->Close();
	}

	void Dictionary::Add(Pair ^ pair)
	{
		pairs->Add(pair);

		if (loaded)
			Save();
	}

	void Dictionary::Add(String ^ word, String ^ info)
	{
		Add(gcnew Pair(word->Trim()->ToUpper(), info->Trim()->Replace("\n", " ")));
	}

	void Dictionary::Remove(Pair ^ pair)
	{
		pairs->Remove(pair);

		if (loaded)
			Save();
	}

	Pair ^ Dictionary::FindByWord(String ^ word)
	{
		for (int i = 0; i < pairs->Count; i++)
		{
			if (pairs[i]->Word == word)
				return pairs[i];
		}

		return nullptr;
	}

	void Dictionary::ViewWordsStartWith(ListBox ^ lb, String ^ startWith)
	{
		startWith = startWith->Trim()->ToUpper();

		if (startWith == "")
		{
			View(lb);
			return;
		}

		lb->Items->Clear();

		for (int i = 0; i < pairs->Count; i++)
		{
			if (pairs[i]->Word->StartsWith(startWith))
				lb->Items->Add(pairs[i]->Word);
		}
	}

	void Dictionary::View(ListBox ^ lb)
	{
		lb->Items->Clear();

		for (int i = 0; i < pairs->Count; i++)
		{
			if (i == 3000) break;
			lb->Items->Add(pairs[i]->Word);
		}
	}

}