#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <utility>

using namespace std;

int sum(vector <int> arr);
int counter(list<int> lista);
int max_element(list<int> roll, int compare_max);
pair<int, string> binary_sort(vector<pair<int, string>> array, int expected_item, int low_index, int high_index);