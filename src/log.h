#pragma once
#include "spdlog/logger.h"
namespace ppdb {
class Logger {
 public:
  spdlog::logger& GetLogger() {
    static spdlog::logger logger("ppdb_logger");
    return logger;
  }

 private:
};

}  // namespace ppdb