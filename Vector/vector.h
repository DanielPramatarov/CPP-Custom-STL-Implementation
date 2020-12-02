#ifndef __VECTOR_H__
#define __VECTOR_H__

template<typename T>
class vector
{
private:
    T* m_Data = nullptr;
    size_t m_Size = 0;
    size_t  m_Capacity = 0;


public:
    vector()
    {
        ReAlloc(2);
    }
    
    ~vector()
    {
        delete[] m_Data;
    }
    void PushBack(const T& value)
    {
        if (m_Size >= m_Capacity)
        {
            ReAlloc(m_Capacity + m_Capacity / 2);
        }
        m_Data[m_Size] = value;
        m_Size++;
    }
    
    size_t Size() const
    {
        return m_Size;
    }
    
    void PopBack()
    {
        if(m_Size > 0)
        {
            m_Size--;
            m_Data[m_Size].~T();
        }
    }
    
    void Clear()
    {
        for(size_t i = 0; i < m_Size; i++)
        {
            m_Data[i].~T();
        }
        m_Size = 0;
    }
    
    const T& operator[](size_t index) const
    {
        return m_Data[index];
    }
    
     T& operator[](size_t index) 
    {
        return m_Data[index];
    }
private:
    void ReAlloc(size_t NewCapacity)
    {
        
        
        T* newBlock = new T[NewCapacity];
        
        size_t  size = m_Size;
        
        if (NewCapacity < size)
        {
            size = NewCapacity;
        }
        for (size_t i = 0; i < m_Size; i++)
        {
            newBlock[i] = m_Data[i];
            
        }
        delete[] m_Data;
        m_Data = newBlock;
        m_Capacity = NewCapacity;
    }



};



#endif // __VECTOR_H__