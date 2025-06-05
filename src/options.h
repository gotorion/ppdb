#pragma once
#include <filesystem>
namespace ppdb {

constexpr uint kB = 1;
constexpr uint kKB = 1024 * kB;
constexpr uint kMB = 1024 * kKB;
constexpr uint kGB = 1024 * kMB;

// Options for the persistent database
struct DbOptions {
  std::filesystem::path dirPath;
};

struct BatchOptions {
  bool sync{false};
  bool readOnly{false};
};

}  // namespace ppdb