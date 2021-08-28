#pragma once

namespace Practice1 {

	using namespace System;

	ref class Pair : public IComparable {
	private:
		String ^ word;
		String ^ info;

	public:
		virtual Int32 CompareTo(Object^ obj);

		Pair();
		Pair(String ^ word, String ^ info);

		property String ^ Word {
			void set(String ^ word)
			{ this->word = word; }
			String ^ get()
			{ return word; }
		}
		property String ^ Info {
			void set(String ^ info)
			{ this->info = info; }
			String ^ get()
			{ return info; }
		}
	};
}