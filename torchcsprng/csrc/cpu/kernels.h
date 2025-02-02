/*
 * Copyright (c) Meta Platforms, Inc. and its affiliates. All Rights Reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <ATen/Generator.h>
#include <ATen/Tensor.h>

namespace torch {
namespace csprng {
namespace cpu {

#include "../kernels_decls.inc"

}}}
