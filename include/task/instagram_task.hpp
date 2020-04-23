﻿#ifndef __INSTAGRAM_TASK_HPP__
#define __INSTAGRAM_TASK_HPP__

#include <include/task/task.hpp>

namespace Task {

class InstagramTask : public Task {
 public:
  bool isReady() override { return false; }
  ~InstagramTask() override {}
};
}  // namespace Task

#endif  // __INSTAGRAM_TASK_HPP