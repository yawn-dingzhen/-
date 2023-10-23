#include<iostream>
using namespace std;
// 第一次修改
// 第二次修改
// 第二次修改
// 第二次修改
template <typename T>
class vector
{
public:
    class iterator
    {
    public:
        explicit iterator(T* InPtr)
        {
            Ptr = InPtr;
        }

        iterator()
        {
            Ptr = nullptr;
        }

        // 前置++
        iterator& operator++()
        {
            ++this->Ptr;
            return *this;
        }

        // 后置++
        iterator operator++(int)
        {
            iterator tmp = *this;
            ++this->Ptr;
            return tmp;
        }

        iterator& operator--()
        {
            --this->Ptr;
            return *this;
        }

        // 后置--
        iterator operator--(int)
        {
            iterator tmp = *this;
            --this->Ptr;
            return tmp;
        }

        bool operator!=(const iterator& InOther) const
        {
            return Ptr != InOther.Ptr;
        }

        T& operator*()
        {
            return *Ptr;
        }

    private:
        T* Ptr;
    };

    // @TODO no const
    iterator begin() const
    {
        return iterator(Data);
    }

    iterator end() const
    {
        return iterator(Data + Size);
    }

public:
    vector():
        Capacity{1},
        Size{0}
    {
        // https://blog.csdn.net/Long_xu/article/details/130265125
        Data = static_cast<T*>(malloc(sizeof(T) * Capacity));
    }

    // https://zhuanlan.zhihu.com/p/498803683
    // https://zhuanlan.zhihu.com/p/130467398
    // 构造数组
    explicit vector(const int InLength):
        Size{0}
    {
        Capacity = InLength;
        Data = static_cast<T*>(malloc(sizeof(T) * Capacity));
    }

    // 拷贝构造函数，当有两个vector时将一个vector赋值给另一个vector
    vector(const vector& InOther) :
        Capacity{InOther.Capacity},
        Size{InOther.Size}
    {
        Data = static_cast<T*>(malloc(sizeof(T) * Capacity));
        copy(InOther.Data, InOther.Data+size(), Data);
    }

    // @TODO error
    vector& operator=(const vector& InOther)
    {
        if (this != &InOther)
        {
            if (Data != nullptr)
            {
                free(Data);
            }
            this->Capacity = InOther.Capacity;
            this->Size = InOther.Size;
            Data =(T*)malloc(sizeof(T) * (this->Capacity));
            copy(InOther.Data, InOther.Data+size(), Data);
       }
        return *this;
    }

    // move
    // https://blog.csdn.net/xhtchina/article/details/126094792
    vector(vector&& InOther) noexcept :
        Capacity{InOther.Capacity},
        Size{InOther.Size},
        Data{InOther.Data}
    {
        InOther.Size = 0;
        InOther.Capacity = 0;
        InOther.Data = nullptr;
    }

    vector& operator=(vector&& InOther) noexcept
    {
        if (this != &InOther)
        {
            if (Data != nullptr)
            {
                free(Data);
            }
            this->Data = InOther.Data;
            this->Capacity = InOther.Capacity;
            this->Size = InOther.Size;
            InOther.Data = nullptr;
            InOther.Capacity = 0;
            InOther.Size = 0;
        }
        return *this;
    }

    ~vector()
    {
        if (Data != nullptr)
        {
            free(Data);
        }
    }

    T& operator[](int InIndex)
    {
        return Data[InIndex];
    }

    const T& operator[](int InIndex) const
    {
        return Data[InIndex];
    }

    void push_back(const T& InElement)
    {
        if (size() == capacity())
        {
            extendLength();
        }
        Data[Size] = InElement;
        Size++;
    }

    void push_back(T& InElement)
    {
        if (size() == capacity())
        {
            extendLength();
        }
        Data[Size] = InElement;
        Size++;
    }

    void pop_back()
    {
        if (size() > 0)
        {
            Size--;
        }
    }

    // 通过下标寻找
    T find_index(int InIndex)
    {
        return Data[InIndex];
    }

    // 通过元素找下标
    int find_element(T InTarget)
    {
        for (int i = 0; i < size(); ++i)
        {
            if (Data[i] == InTarget)
            {
                return i;
            }
        }
        return no_pos;
    }

    // 查找是否有这个元素
    bool find(T InTarget)
    {
        for (int i = 0; i < size(); ++i)
        {
            if (Data[i] == InTarget)
            {
                return true;
            }
        }
        return false;
    }

    // 检查容器是否为空
    bool empty() const
    {
        return size() == 0;
    }

    // 返回容纳的元素数
    int size() const
    {
        return Size;
    }

    // 返回当前存储空间能够容纳的元素数
    int capacity() const
    {
        return Capacity;
    }

    void clear()
    {
        Data = nullptr;
        Size = 0;
        Capacity = 0;
    }

    void insert(const int InIndex, T InElement)
    {
        Size++;
        if (Size == Capacity)
        {
            extendLength();
        }
        // https://stackoverflow.com/questions/16695958/why-to-avoid-postfix-operator-in-c
        for (int i = size(); i > InIndex; --i)
        {
            Data[i] = Data[i - 1];
        }
        Data[InIndex] = InElement;
    }

    void erase(const int InIndex)
    {
        for (int i = InIndex; i < size(); ++i)
        {
            Data[i] = Data[i + 1];
        }
        Size--;
    }

    void swap(T& InA, T& InB)
    {
        T tmp = InA;
        InA = InB;
        InB = tmp;
    }

    void emplace_back(T&& InElement)
    {
        push_back(forward<T>(InElement));
    }

private:
    // 扩容算法
    void extendLength()
    {
        T* arr = Data;
        Capacity = Capacity * 2;
        Data = static_cast<T*>(malloc(sizeof(T) * Capacity));
        // @TODO
        // std::copy
        // https://en.cppreference.com/w/cpp/language/ub
        copy(arr, arr+size(),Data);
        free(arr);
    }

public:
    static int no_pos;

private:
    // Rename
    int Capacity;
    int Size;
    T* Data;
};

int vector<int>::no_pos = -1;

int main()
{
    vector<char> a;
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    a.push_back('b');
    vector<char> b;
    b = a;
    return 0;
}
