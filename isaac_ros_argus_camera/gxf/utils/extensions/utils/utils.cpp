// SPDX-FileCopyrightText: NVIDIA CORPORATION & AFFILIATES
// Copyright (c) 2021-2023 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0
#include "extensions/utils/stereo_camera_synchronizer.hpp"
#include "gxf/std/extension_factory_helper.hpp"

GXF_EXT_FACTORY_BEGIN()

GXF_EXT_FACTORY_SET_INFO(0xa722f33021690730, 0x8efa17986d37641d, "NvIsaacUtilsExtension",
                         "Extension containing miscellaneous utility components", "Isaac SDK",
                         "2.0.0", "LICENSE");

GXF_EXT_FACTORY_ADD(0x8760c3e2306c1ff6, 0xb9f0fb97cef0110f,
                    nvidia::isaac::StereoCameraSynchronizer, nvidia::gxf::Codelet,
                    "Copies timestamp from left input msg to right input msg");

GXF_EXT_FACTORY_END()
