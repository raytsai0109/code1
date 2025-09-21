// cpp-playground/bits/stdc++.h
#pragma once

// C headers
#include <cassert>
#include <cctype>
#include <cerrno>
#include <climits>
#include <cmath>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

// C++ headers (常用到的都丟進來)
#include <algorithm>
#include <array>
#include <bitset>
#include <chrono>
#include <complex>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <optional>    // C++17
#include <ostream>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <tuple>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

#if __has_include(<filesystem>)
#include <filesystem>  // C++17（若你的 libc++ 支援）
#endif

// C++20/23 的新標頭用 __has_include 保守引入，避免舊版編譯器報錯
#if __has_include(<span>)
#include <span>
#endif
#if __has_include(<ranges>)
#include <ranges>
#endif
#if __has_include(<bit>)
#include <bit>
#endif
#if __has_include(<compare>)
#include <compare>
#endif
