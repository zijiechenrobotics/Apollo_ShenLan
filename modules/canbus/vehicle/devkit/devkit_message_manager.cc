/******************************************************************************
 * Copyright 2020 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#include "modules/canbus/vehicle/devkit/devkit_message_manager.h"

#include "modules/canbus/vehicle/devkit/protocol/brake_command_101.h"
#include "modules/canbus/vehicle/devkit/protocol/gear_command_103.h"
#include "modules/canbus/vehicle/devkit/protocol/park_command_104.h"
#include "modules/canbus/vehicle/devkit/protocol/steering_command_102.h"
#include "modules/canbus/vehicle/devkit/protocol/throttle_command_100.h"
#include "modules/canbus/vehicle/devkit/protocol/vehicle_mode_command_105.h"

#include "modules/canbus/vehicle/devkit/protocol/bms_report_512.h"
#include "modules/canbus/vehicle/devkit/protocol/brake_report_501.h"
// #include "modules/canbus/vehicle/devkit/protocol/chassiserrorcode_1_201.h"
// #include "modules/canbus/vehicle/devkit/protocol/chassiserrorcode_200.h"
// #include "modules/canbus/vehicle/devkit/protocol/chassiserrorcode_2_202.h"
#include "modules/canbus/vehicle/devkit/protocol/gear_report_503.h"
#include "modules/canbus/vehicle/devkit/protocol/park_report_504.h"
#include "modules/canbus/vehicle/devkit/protocol/steering_report_502.h"
#include "modules/canbus/vehicle/devkit/protocol/throttle_report_500.h"
#include "modules/canbus/vehicle/devkit/protocol/ultr_sensor_1_507.h"
#include "modules/canbus/vehicle/devkit/protocol/ultr_sensor_2_508.h"
#include "modules/canbus/vehicle/devkit/protocol/ultr_sensor_3_509.h"
#include "modules/canbus/vehicle/devkit/protocol/ultr_sensor_4_510.h"
#include "modules/canbus/vehicle/devkit/protocol/ultr_sensor_5_511.h"
#include "modules/canbus/vehicle/devkit/protocol/vcu_report_505.h"
#include "modules/canbus/vehicle/devkit/protocol/vin_resp1_514.h"
#include "modules/canbus/vehicle/devkit/protocol/vin_resp2_515.h"
#include "modules/canbus/vehicle/devkit/protocol/vin_resp3_516.h"
#include "modules/canbus/vehicle/devkit/protocol/wheelspeed_report_506.h"

namespace apollo {
namespace canbus {
namespace devkit {

DevkitMessageManager::DevkitMessageManager() {
  // Control Messages
  AddSendProtocolData<Brakecommand101, false>();
  AddSendProtocolData<Gearcommand103, false>();
  AddSendProtocolData<Parkcommand104, false>();
  AddSendProtocolData<Steeringcommand102, false>();
  AddSendProtocolData<Throttlecommand100, false>();
  AddSendProtocolData<Vehiclemodecommand105, false>();

  // Report Messages
  AddRecvProtocolData<Bmsreport512, true>();
  AddRecvProtocolData<Brakereport501, true>();
  // AddRecvProtocolData<Chassiserrorcode1201, true>();
  // AddRecvProtocolData<Chassiserrorcode200, true>();
  // AddRecvProtocolData<Chassiserrorcode2202, true>();
  AddRecvProtocolData<Gearreport503, true>();
  AddRecvProtocolData<Parkreport504, true>();
  AddRecvProtocolData<Steeringreport502, true>();
  AddRecvProtocolData<Throttlereport500, true>();
  AddRecvProtocolData<Ultrsensor1507, true>();
  AddRecvProtocolData<Ultrsensor2508, true>();
  AddRecvProtocolData<Ultrsensor3509, true>();
  AddRecvProtocolData<Ultrsensor4510, true>();
  AddRecvProtocolData<Ultrsensor5511, true>();
  AddRecvProtocolData<Vcureport505, true>();
  AddRecvProtocolData<Vinresp1514, true>();
  AddRecvProtocolData<Vinresp2515, true>();
  AddRecvProtocolData<Vinresp3516, true>();
  AddRecvProtocolData<Wheelspeedreport506, true>();
}

DevkitMessageManager::~DevkitMessageManager() {}

}  // namespace devkit
}  // namespace canbus
}  // namespace apollo
