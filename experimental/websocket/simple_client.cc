#include "glog/logging.h"
#include <cstdio>

int main(int argc, char **argv) {
  LOG(INFO) << "Started.";
  return 0;
}
