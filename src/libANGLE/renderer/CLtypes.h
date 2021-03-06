//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// CLtypes.h: Defines common types for the OpenCL support in ANGLE.

#ifndef LIBANGLE_RENDERER_CLTYPES_H_
#define LIBANGLE_RENDERER_CLTYPES_H_

#include "libANGLE/CLtypes.h"

#include "common/angleutils.h"

namespace rx
{

class CLContextImpl;
class CLDeviceImpl;
class CLPlatformImpl;

using NameVersionVector = std::vector<cl_name_version>;

}  // namespace rx

#endif  // LIBANGLE_RENDERER_CLTYPES_H_
