// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_2_1_autogen.cpp:
//   Defines the GL 2.1 entry points.

#include "libGL/entry_points_gl_2_1_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/gl_enum_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationES32.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL21_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
void GL_APIENTRY UniformMatrix2x3fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix2x3fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix2x3fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix2x3fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix2x3fv, isCallValid, context, location, count, transpose, value);
    }
}

void GL_APIENTRY UniformMatrix2x4fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix2x4fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix2x4fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix2x4fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix2x4fv, isCallValid, context, location, count, transpose, value);
    }
}

void GL_APIENTRY UniformMatrix3x2fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix3x2fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix3x2fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix3x2fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix3x2fv, isCallValid, context, location, count, transpose, value);
    }
}

void GL_APIENTRY UniformMatrix3x4fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix3x4fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix3x4fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix3x4fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix3x4fv, isCallValid, context, location, count, transpose, value);
    }
}

void GL_APIENTRY UniformMatrix4x2fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix4x2fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix4x2fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix4x2fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix4x2fv, isCallValid, context, location, count, transpose, value);
    }
}

void GL_APIENTRY UniformMatrix4x3fv(GLint location,
                                    GLsizei count,
                                    GLboolean transpose,
                                    const GLfloat *value)
{
    Context *context = GetValidGlobalContext();
    EVENT("glUniformMatrix4x3fv",
          "context = %d, GLint location = %d, GLsizei count = %d, GLboolean transpose = %s, const "
          "GLfloat *value = 0x%016" PRIxPTR "",
          CID(context), location, count, GLbooleanToString(transpose), (uintptr_t)value);

    if (context)
    {
        std::unique_lock<std::mutex> shareContextLock = GetShareGroupLock(context);
        bool isCallValid                              = (context->skipValidation() ||
                            ValidateUniformMatrix4x3fv(context, location, count, transpose, value));
        if (isCallValid)
        {
            context->uniformMatrix4x3fv(location, count, transpose, value);
        }
        ANGLE_CAPTURE(UniformMatrix4x3fv, isCallValid, context, location, count, transpose, value);
    }
}
}  // namespace gl
