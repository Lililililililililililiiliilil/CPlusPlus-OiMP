#include <vector>

template<typename T>
void Duplicate(std::vector<T> &v) {
    size_t original_size = v.size();
    for (size_t it = 0; it != original_size; ++it) {
        v.push_back(v[it]);
    }
}
