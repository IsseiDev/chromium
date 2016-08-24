// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE SCHEMA DEFINITION AND DESCRIPTION IN
//   fieldtrial_testing_config_schema.json
//   fieldtrial_testing_config_android.json
// DO NOT EDIT.

#ifndef FIELDTRIAL_TESTING_CONFIG_H_
#define FIELDTRIAL_TESTING_CONFIG_H_

#include <cstddef>


namespace chrome_variations {

struct FieldTrialGroupParams {
  const char* const key;
  const char* const value;
};

struct FieldTrialTestingGroup {
  const char* const study;
  const char* const group_name;
  const FieldTrialGroupParams * params;
  const size_t params_size;
  const char* const * enable_features;
  const size_t enable_features_size;
  const char* const * disable_features;
  const size_t disable_features_size;
};

struct FieldTrialTestingConfig {
  const FieldTrialTestingGroup * groups;
  const size_t groups_size;
};


extern const FieldTrialTestingConfig kFieldTrialConfig;

}  // namespace chrome_variations

#endif  // FIELDTRIAL_TESTING_CONFIG_H_
