#pragma once

/**
 * Define specific things for the agrio system
 */

extern "C" {
   void agrio_assert(unsigned int, const char*);
   void __cxa_pure_virtual() { agrio_assert(false, "pure virtual method called"); }
}
