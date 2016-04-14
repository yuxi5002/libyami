/*
 * Copyright (C) 2016 Intel Corporation. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* orignal version of this file have been defined in VideoCommonDefs.h,
   but it will introduce compile error in gtest, so we define it here.
   it's reasonable since not all files need bind
 */

#ifndef Functional_h
#define Functional_h

#ifdef ANDROID
#include <functional>
#define Bind std::bind
#else
#include <tr1/functional>
#define Bind std::tr1::bind
#endif

#endif
