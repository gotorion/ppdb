#pragma once
#include <shared_mutex>

#include "absl/status/status.h"
#include "options.h"
namespace ppdb {

using absl::Status;

class Database {
 public:
  Database(Database&&) = delete;

  Status Open(DbOptions const& options);
  Status Get(std::string const& key, std::string& value);
  Status Put(std::string const& key, std::string const& value);
  Status Delete(std::string const& key);
  bool Exist(std::string const& key);
  Status Close();

 private:
  Status CheckOptions();

 private:
  DbOptions options_;
  std::atomic<bool> closed_{false};
  std::shared_mutex mutex_;
};
}  // namespace ppdb