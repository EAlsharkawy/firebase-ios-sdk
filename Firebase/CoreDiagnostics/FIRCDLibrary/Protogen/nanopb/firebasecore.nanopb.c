/*
 * Copyright 2019 Google
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

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.4 */

#include "firebasecore.nanopb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t logs_proto_mobilesdk_ios_ICoreConfiguration_fields[22] = {
    PB_FIELD(  1, UENUM   , OPTIONAL, STATIC  , FIRST, logs_proto_mobilesdk_ios_ICoreConfiguration, configuration_type, configuration_type, 0),
    PB_FIELD(  7, UENUM   , REPEATED, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, sdk_service_installed, configuration_type, 0),
    PB_FIELD(  9, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, device_model, sdk_service_installed, 0),
    PB_FIELD( 10, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, app_id, device_model, 0),
    PB_FIELD( 12, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, bundle_id, app_id, 0),
    PB_FIELD( 16, UENUM   , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, pod_name, bundle_id, 0),
    PB_FIELD( 18, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, icore_version, pod_name, 0),
    PB_FIELD( 19, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, sdk_version, icore_version, 0),
    PB_FIELD( 20, UENUM   , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, sdk_name, sdk_version, 0),
    PB_FIELD( 21, INT32   , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, app_count, sdk_name, 0),
    PB_FIELD( 22, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, os_version, app_count, 0),
    PB_FIELD( 24, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, min_supported_ios_version, os_version, 0),
    PB_FIELD( 25, BOOL    , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, use_default_app, min_supported_ios_version, 0),
    PB_FIELD( 26, BOOL    , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, deployed_in_app_store, use_default_app, 0),
    PB_FIELD( 27, INT32   , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, dynamic_framework_count, deployed_in_app_store, 0),
    PB_FIELD( 28, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, apple_framework_version, dynamic_framework_count, 0),
    PB_FIELD( 29, BOOL    , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, using_zip_file, apple_framework_version, 0),
    PB_FIELD( 30, UENUM   , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, deployment_type, using_zip_file, 0),
    PB_FIELD( 31, BYTES   , OPTIONAL, POINTER , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, platform_info, deployment_type, 0),
    PB_FIELD( 33, BOOL    , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, swizzling_enabled, platform_info, 0),
    PB_FIELD( 36, BOOL    , OPTIONAL, STATIC  , OTHER, logs_proto_mobilesdk_ios_ICoreConfiguration, using_gdt, swizzling_enabled, 0),
    PB_LAST_FIELD
};







/* @@protoc_insertion_point(eof) */
