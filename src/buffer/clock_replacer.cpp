//===----------------------------------------------------------------------===//
//
//                         BusTub
//
// clock_replacer.cpp
//
// Identification: src/buffer/clock_replacer.cpp
//
// Copyright (c) 2015-2019, Carnegie Mellon University Database Group
//
//===----------------------------------------------------------------------===//

#include "buffer/clock_replacer.h"

namespace bustub {

ClockReplacer::ClockReplacer(size_t num_pages) : cbuf(num_pages) {
  this->hand = 0;
}

ClockReplacer::~ClockReplacer() = default;

/**
 * Starting from the current position of clock hand, find the first frame that is both 
 * in the `ClockReplacer` and with its ref flag set to false. 
 * If a frame is in the `ClockReplacer`, but its ref flag is set to true, change it to false instead. 
 * This should be the only method that updates the clock hand.
 */
bool ClockReplacer::Victim(frame_id_t *frame_id) { return false; }

void ClockReplacer::Pin(frame_id_t frame_id) {}

void ClockReplacer::Unpin(frame_id_t frame_id) {}

/**
 * @return the number of elements in the replacer that can be victimized
 * This method returns the number of frames that are currently in the ClockReplacer.
 * Thus, it returns the number of frames that are unpinned.
 */
size_t ClockReplacer::Size() { return 0; }

}  // namespace bustub
