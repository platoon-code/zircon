// Copyright 2017 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <magenta/syscalls.h>

#include "private.h"

uint64_t _mx_system_get_physmem(void) {
    return DATA_CONSTANTS.physmem;
}

__typeof(mx_system_get_physmem) mx_system_get_physmem
    __attribute__((weak, alias("_mx_system_get_physmem")));
