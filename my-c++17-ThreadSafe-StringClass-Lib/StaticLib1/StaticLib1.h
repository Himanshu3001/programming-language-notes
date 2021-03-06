// StaticLib1.h

#ifndef __STATICLIB1_H
#define __STATICLIB1_H

#include "cstdio"
#include "iostream"
#include "mutex"

using namespace std;

namespace NsString {

	// TODO: template based for unicode & others?	// template <class charT>
	class String {

		mutex _mut1;

		char *_buf = NULL;
		size_t _len;
	public:

		String();
		String(char const* s);
		String(String const& s);
		String(String && s);
		~String();


		int _compare(const char* p, const char* q, size_t n);
		int compare(String const& q);

		size_t size();

		String& operator=(String& s);
		friend std::ostream& operator<<(std::ostream& os, String& obj);
	};
}

#endif
