#include "Header.h"

int main()
{
    SimpleDLLClass *test = new SimpleDLLClass();
    cout << test->getValue() << endl;
    test->setValue(100);
    cout << SimpleDLLClass::m_nValue << endl;
    return 0;
}