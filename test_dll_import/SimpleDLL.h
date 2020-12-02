#pragma once

#ifdef SIMPLEDLL_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

class DLL_EXPORT SimpleDLLClass
{
public:
    SimpleDLLClass();
    virtual ~SimpleDLLClass();

    virtual int getValue() { return m_nValue; };
    virtual void setValue(int value) { m_nValue = value; };
public:
    static int m_nValue;
};
