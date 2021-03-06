//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// CLContextImpl.h: Defines the abstract rx::CLContextImpl class.

#ifndef LIBANGLE_RENDERER_CLCONTEXTIMPL_H_
#define LIBANGLE_RENDERER_CLCONTEXTIMPL_H_

#include "libANGLE/renderer/CLDeviceImpl.h"

namespace rx
{

class CLContextImpl : angle::NonCopyable
{
  public:
    using Ptr = std::unique_ptr<CLContextImpl>;

    CLContextImpl(const cl::Context &context);
    virtual ~CLContextImpl();

    virtual cl::DeviceRefList getDevices() const = 0;

  protected:
    const cl::Context &mContext;
};

}  // namespace rx

#endif  // LIBANGLE_RENDERER_CLCONTEXTIMPL_H_
