#include <iostream>
#include <vector>

using namespace std;

using byte = unsigned char;
#typedef bitset<8> byte;

using predicate = std::function<bool    (const void *)>;
using equal     = std::function<bool (*)(const void *, const void *)>;

void reverse(void*       , void*       , size_t);
void * clone(const void *, const void *, size_t);
const void * find_if(const void *, const void *, size_t, predicate);
const void *    find(const void *, const void *, size_t, const void *, equal);

bool  all_of (const void *, const void *, predicate);
bool  any_of (const void *, const void *, predicate);
bool none_of (const void *, const void *, predicate);

void sort(void *, void *. equal);

int main(){
    
    vector<int> vect;
    
    for (auto i(0); i< 6; ++i)
        vect.push_back(i);
    
    vector<int>::const_iterator it;
    
    it = vect.begin();
    
    while (it != vect.end()){
        cout << *it << " ";
        ++it;
    }
    
    cout << endl << " Fim " << endl;
}

#using predicate = std::function<bool    (const void *)>;
#using equal     = std::function<bool (*)(const void *, const void *)>;

void reverse(void* first, void* last, size_t size){
    
}

void * clone(const void *, const void *, size_t);
const void * find_if(const void *, const void *, size_t, predicate);
const void *    find(const void *, const void *, size_t, const void *, equal);

bool  all_of (const void *, const void *, predicate);
bool  any_of (const void *, const void *, predicate);
bool none_of (const void *, const void *, predicate);

void sort(void *, void *. equal);
