#include "db.h"

#include "absl/status/status.h"
namespace ppdb {
Status Database::Open(DbOptions const& options) {
  this->options_ = options;
  if (auto st = CheckOptions(); !st.ok()) {
    return st;
  }
  return absl::OkStatus();
}

Status Database::CheckOptions() {
  // TODO:(LiJunhui) check db options
  return absl::OkStatus();
}

}  // namespace ppdb