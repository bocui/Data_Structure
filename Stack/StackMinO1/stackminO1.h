#ifndef STACKMINO1
#define STACKMINO1

#include <stack>

using std::stack;
using std::size_t;

template<typename T> class StackMinO1
{
public:
    StackMinO1() {}
    virtual ~StackMinO1() {}
    void push(const T &value);
    void pop();

    const T & top() const;
    const T & min() const;
    bool empty() const;
    size_t size() const; 
    
private:
    stack<T> m_data;
    stack<T> m_minValue;    
};

template<typename T> 
void StackMinO1<T>::push(const T &value)
{
    m_data.push(value);
    if(m_minValue.size() == 0 || value < m_minValue.top()) 
	m_minValue.push(value);
    else
	m_minValue.push(m_minValue.top());
}

template<typename T>
void StackMinO1<T>::pop()
{
    m_data.pop();
    m_minValue.pop();
}

template<typename T>
const T & StackMinO1<T>::top() const
{
    return m_data.top();
}

template<typename T> 
const T & StackMinO1<T>::min() const
{
    return m_minValue.top();
}

template<typename T>
bool StackMinO1<T>::empty() const
{
    return m_data.empty();
}

template<typename T>
size_t StackMinO1<T>::size() const
{
    return m_data.size();
}

#endif
