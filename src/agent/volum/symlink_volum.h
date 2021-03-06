// Copyright (c) 2016, Baidu.com, Inc. All Rights Reserved
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#pragma once

#include "volum.h"

namespace baidu {
namespace galaxy {
namespace volum {

class SymlinkVolum : public Volum {
public:
    SymlinkVolum();
    ~SymlinkVolum();

    baidu::galaxy::util::ErrorCode Construct();
    baidu::galaxy::util::ErrorCode Destroy();
    baidu::galaxy::util::ErrorCode Gc();
    int64_t Used();
    std::string ToString();

};

}
}
}
