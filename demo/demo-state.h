/*
 * Copyright 2012 Google, Inc. All Rights Reserved.
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
 *
 * Google Author(s): Behdad Esfahbod
 */

#ifndef DEMO_STATE_H
#define DEMO_STATE_H

#include "demo-common.h"
#include "demo-atlas.h"
#include "demo-shader.h"

#include <vector>


typedef struct {
  GLuint program;
  demo_atlas_t *atlas;

  /* Uniforms */
  double u_debug;
  double u_contrast;
  double u_gamma;

  /* Attributes */
  std::vector<glyph_vertex_t> *vertices;

} demo_state_t;

void
demo_state_init (demo_state_t *st);

void
demo_state_fini (demo_state_t *st);


void
demo_state_setup (demo_state_t *st);

void
demo_state_draw (demo_state_t *st);

extern demo_state_t st;


#endif /* DEMO_STATE_H */
