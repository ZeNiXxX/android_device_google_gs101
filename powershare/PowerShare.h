/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <vendor/lineage/powershare/1.0/IPowerShare.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>

namespace vendor::lineage::powershare::gs101 {

using ::android::hardware::hidl_array;
using ::android::hardware::hidl_memory;
using ::android::hardware::hidl_string;
using ::android::hardware::hidl_vec;
using ::android::hardware::Return;
using ::android::hardware::Void;
using ::android::sp;

struct PowerShare : public V1_0::IPowerShare {
    // Methods from ::vendor::lineage::powershare::V1_0::IPowerShare follow.
    Return<bool> isEnabled() override;
    Return<bool> setEnabled(bool enable) override;
    Return<uint32_t> getMinBattery() override;
    Return<uint32_t> setMinBattery(uint32_t minBattery) override;
};

}  // namespace vendor::lineage::powershare::gs101
