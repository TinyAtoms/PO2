#include "./hashmap_test.h"

#include <unordered_map>

#include "./../hashmap_implementations/LPmap3.h"

/*
 * hashmap test suite targets.
 * Just add your header, and add the lines below for your test
 */

int main()
{
    //    cout << "------------- unordered map";
    //    hashmap_test_suite(std::unordered_map<int, int>{});
    cout << "--------Sagar's LP3 map\n";
    hashmap_test_suite(LP3<int, int>{});
}