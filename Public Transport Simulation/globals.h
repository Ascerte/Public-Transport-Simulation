#pragma once
#include<time.h>
#include<random>

extern std::mt19937 seed(static_cast<int>(time(NULL)));
