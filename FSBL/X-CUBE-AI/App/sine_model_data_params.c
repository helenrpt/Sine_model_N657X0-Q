/**
  ******************************************************************************
  * @file    sine_model_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2025-11-20T20:40:50+0100
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sine_model_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_model_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_model_weights_array_u64[161] = {
  0xbe0b3354beb3e0e2U, 0x3ebb71c83eddc1c1U, 0x3f1066d2bed0f85bU, 0xbde215acbed60d26U,
  0xbeeae4a0be90af53U, 0x3f122b313ea13af6U, 0xbde0fdb43e82399dU, 0xbe3bc368bf06d7c2U,
  0x0U, 0xbf05e0fbbcd019b3U, 0xbf28c02a00000000U, 0x0U,
  0x0U, 0x3f3943c3bed15a7fU, 0xbf2b092dU, 0x0U,
  0xbddae454beca2240U, 0x3d058bdc3e5dc613U, 0x3da5a14cbc833540U, 0xbd6fbc80bd94d824U,
  0x3ea54f5b3d50c4d0U, 0xbc3d0d9abf0e1627U, 0x3ed55001bf90097bU, 0x3caab0603e5e2e16U,
  0xbe290b28bdabc680U, 0xbe860f6cbf50a063U, 0xbe7d0a56bd253458U, 0x3ec07f6d3ec60d6dU,
  0xbea60b9cbea66cf2U, 0xbcdeb0f4bf2ba026U, 0x3e4fcd8ebe114406U, 0xbe348f14be621342U,
  0xbe22dba03c4aa6e0U, 0xbe9bf6873e80f9baU, 0xbce051df3d01b528U, 0xbe907e3ebe817825U,
  0x3ec3f647be605fe4U, 0xbcfd08e03e063a43U, 0xbdf95318bece6a0cU, 0xbe8a02d5bdea78ecU,
  0xbcb72ba0be10b8f8U, 0xbe36955e3e48f9deU, 0x3bda9a803eb89987U, 0x3ea87aebbe5d5d7bU,
  0xbcce1870beabdd64U, 0xbe640b2d3d7ae0e0U, 0x3ecdbe233eb16315U, 0xbed711893eb97f01U,
  0x3e597a56bd036a80U, 0x3e8ff9f3be9d1e3aU, 0xbedafedfbe106838U, 0x3d47b8d83b7dec00U,
  0x3dfb4ccc3c1879e0U, 0xbe59eff13ebb4ef4U, 0x3e5a39763e2f81b2U, 0xbdc4fb40bebba582U,
  0xbe9a53acbebeabaeU, 0x3dfeb0543e9ae463U, 0x3eca3f4e3ecb5099U, 0x3d6762183e76b656U,
  0xbeb482623e523f36U, 0xbedd04eb3c614a54U, 0xbed2e7843f228aa5U, 0x3d792a383d473728U,
  0x3def0fdc399ef800U, 0xbf2660f33d4c5128U, 0xbede0204be5bc866U, 0x3caa6c003e3f0e6eU,
  0x3e158f163edb342fU, 0x3ecdd6e8bdd43d33U, 0xbec6e71dbf32caebU, 0x3e537562be64b916U,
  0x3dc4e53c3e8af91bU, 0xbebc55683e9de355U, 0xbd8fa288becde205U, 0xbeb3f8283e8ac6efU,
  0x3ed4cb2d3d3195e8U, 0x3e6aab163e9e3279U, 0x3eb4a5673e4fae0aU, 0xbeb7c0443eafd4c7U,
  0xbe05fff83bb9f800U, 0xbe98d2b03eb29727U, 0x3eb0dd13be110e32U, 0x3d032e50be904c8eU,
  0x3ec3d8ff3d942f7cU, 0xbdfe933c3e0d87e1U, 0x3ebd06c73d5f3f5dU, 0x3ea61c373e381efaU,
  0xbeb32eac3e8f1581U, 0xbdd08004bd68be20U, 0x3e1293be3d99b17cU, 0x3e998f533edba321U,
  0xbece6fa83e1e7b4aU, 0xbea2ee493e81b329U, 0xbe849d70be1e73a0U, 0xbedc0be5bea91badU,
  0xbeb94db8bc496660U, 0xbde1fd3d3dd802edU, 0xbeb1bfa0be83c882U, 0xbdac62983ec8229bU,
  0xbe8169d03e5b1b5aU, 0x3dc459bc3e4ad58dU, 0x3ebf4d5b3c9d8a68U, 0x3ec35b89bc74e160U,
  0x3eacf1733e88095bU, 0xba68a5c33e8ee850U, 0xbdb53ae8be96dd5dU, 0x3e86fc7bbeb51d3aU,
  0xbd1e03103e80c701U, 0xbd412bd4be1256ebU, 0x3dac9c74bec95607U, 0x3c988d30beabe282U,
  0x3ead819dbd33d0f0U, 0xbf1b15babe7538afU, 0xbf39e29f3eb1ae39U, 0x3ca86c30be1f9e1cU,
  0xbe5c1f003ec8edadU, 0x3c20b22cbcb508aeU, 0x3de3298c3ebb0aa3U, 0xbec2deda3cb135b0U,
  0xbe7c3369be7386f3U, 0x3ec887d33e8053eeU, 0x3f08fcbc3d943dfcU, 0x3ec9e041bed5e962U,
  0x3def41a4bdb6e580U, 0xbe8751ea3d74c4c4U, 0x3ec05acfbea47e1eU, 0x3e80e1afbeb64294U,
  0x3e95f277bec163c3U, 0x3ebdca8b3e1e3e9eU, 0x3e72b75b3ebb6941U, 0x3b90bdc03d9d14ccU,
  0xbdfc29443db1be6cU, 0xbea770913d4c39cbU, 0xbe9c35553f49203aU, 0x3ebab815bc08f7a0U,
  0x3d2443283d9c17dcU, 0x3ed27bbb3bd4a12aU, 0x3efd314b3e96fee5U, 0x3ebbef91bea155ceU,
  0x3ea16971be04d546U, 0x3dfee6813e2885afU, 0xbecb6a9f3e260eceU, 0x3e760dde3ec669cfU,
  0x3ea548703e73cff2U, 0xbded9af5U, 0xbf1dd866bbb911b3U, 0xbd4f665d3ed0b212U,
  0xbe54e1e5U, 0xbd8b4d20bdd9dbcdU, 0xbdbfb06b3f08ce22U, 0xbe427af2bf0bb033U,
  0xbf9119353f5cd486U, 0xbd185930baeaba34U, 0x3ff061c1bee8e79bU, 0x3eb544663f55f8e0U,
  0xbe3a07d8bda44a8eU, 0xbb20ee89bc8b2783U, 0xbe024776bf3e96f5U, 0xbf2628b23fe49711U,
  0xbd1326f5U,
};


ai_handle g_sine_model_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_model_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

