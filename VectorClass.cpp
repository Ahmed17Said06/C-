#include<iostream>
#include<cassert>
using namespace std;

class Vector
{
    private:
        int *arr = nullptr;
        int size = 0;
        int capacity;
    
    public:
        Vector(int size) : size(size) 
        {
            if (size < 0)
            {
                size = 1;
            }
            capacity = size * 2;
            // The actual size array will be bigger than needed
            arr = new int[capacity] {};
        }

        ~Vector()
        {
            delete[] arr;
            arr = nullptr;
        }

        int get(int idx)
        {
            assert(0 <= idx && idx < size);
            return arr[idx];
        }

        void set(int idx, int val)
        {
            assert(0 <= idx && idx < size);
            arr[idx] = val;
        }

        void print()
        {
            for (int i = 0; i < size; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }

        int find(int value)
        {
            for (int i = 0; i < size; ++i)
            {
                if(arr[i] == value)
                {
                    return i;
                }
            }
            return -1; // -1 for not found
        }

        int get_front()
        {
            return arr[0];
        }

        int get_back()
        {
            return arr[size - 1];
        }

        // void push_back_old_slow(int value)
        // {
        //     // Add elemet to the end of the vector
        //     // 1) create a new array of bigger size

        //     int *arr2 = new int[size + 1];
        //     // 2) copy old data
        //     for (int i = 0; i < size; ++i)
        //     {
        //         arr2[i] = arr[i];
        //     }
        //     // 3) add the new element and increase size
        //     arr2[size] = value;
        //     size++;

        //     // 4) change the pointers
        //     swap(arr, arr2);

        //     // 5) remove the useless data
        //     delete[] arr2;
        // }


        void expand_capacity()
        {
            // Double the actual array size;
            capacity *= 2;
            cout << "Expand capacity to "<< capacity <<"\n";

            int *arr2 = new int[capacity] {};

            for(int i = 0; i < size; ++i)
            {
                arr2[i] == arr[i]; //copy data
            }

            swap(arr, arr2);
            delete[] arr2;
        }


        void push_back(int value)
        {
            if (size == capacity)
            {
                expand_capacity();
            }
            arr[size++] = value;
        }


        void insert(int idx, int value)
        {
            assert(0 <= idx && idx < value);

            // we can't add any more
            if (size == capacity)
            {
                expand_capacity();
            }

            // shift all the data to right first
            for (int i = size - 1; i >= idx; --i)
            {
                arr[i + 1] =  arr[i];
            }

            arr[idx] = value;
            ++size;

            // common mistake to iterate from begin to end
            // the whole array right array will be arr[idx]
            // for (int i = idx; i < size + 1; ++i)
        }
};

int main()
{
    int n = 4;
    Vector v(n);

    for (int i = 0; i < n; ++i)
    {
        v.set(i, i);
    }

    v.push_back(15);
    v.push_back(17);
    v.push_back(19);

    v.print();

    for (int i = 0; i < 1000000; ++i)
    {
        v.push_back(i);
    } // takes tooo much time! WHY >> O(n^2)

    cout << v.find(5)<<" "<<v.find(55);

    return 0;
}