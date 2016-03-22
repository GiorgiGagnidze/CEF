// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// vector_icons.cc.template is used to generate vector_icons.cc. Edit the former
// rather than the latter.

#include "ui/gfx/vector_icons.h"

#include "base/logging.h"
#include "ui/gfx/vector_icon_types.h"

#define ICON_TEMPLATE(icon_name, ...) \
    case VectorIconId::icon_name: {\
      static PathElement path[] = {__VA_ARGS__};\
      return path;\
    }

namespace gfx {

const PathElement* GetPathForVectorIcon(VectorIconId id) {
  switch (id) {
ICON_TEMPLATE(NAVIGATE_HOME, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 9, 14.46f,
LINE_TO, 16, 7.63f,
LINE_TO, 23, 14.46f,
LINE_TO, 23, 25.13f,
LINE_TO, 23, 25.13f,
LINE_TO, 23, 26,
LINE_TO, 22.13f, 26,
LINE_TO, 9.73f, 26,
LINE_TO, 9, 26,
LINE_TO, 9, 25.27f,
LINE_TO, 9, 14.46f,
LINE_TO, 9, 14.46f,
CLOSE,
MOVE_TO, 6, 17.39f,
LINE_TO, 5.86f, 17.52f,
CUBIC_TO, 5.21f, 18.16f, 4.15f, 18.16f, 3.49f, 17.52f,
CUBIC_TO, 2.84f, 16.88f, 2.84f, 15.85f, 3.49f, 15.21f,
LINE_TO, 13.63f, 5.31f,
LINE_TO, 16, 3,
LINE_TO, 18.37f, 5.31f,
LINE_TO, 28.51f, 15.21f,
CUBIC_TO, 29.16f, 15.85f, 29.16f, 16.88f, 28.51f, 17.52f,
CUBIC_TO, 27.85f, 18.16f, 26.79f, 18.16f, 26.14f, 17.52f,
LINE_TO, 26, 17.39f,
LINE_TO, 26, 27,
CUBIC_TO, 26, 28.1f, 25.1f, 29, 24, 29,
LINE_TO, 8, 29,
CUBIC_TO, 6.9f, 29, 6, 28.1f, 6, 27,
LINE_TO, 6, 17.39f,
LINE_TO, 6, 17.39f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_STAR_ACTIVE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 8, 0.5f,
LINE_TO, 5.89f, 5.56f,
LINE_TO, 0.5f, 6.03f,
LINE_TO, 4.59f, 9.64f,
LINE_TO, 3.37f, 15,
LINE_TO, 8, 12.16f,
LINE_TO, 12.64f, 15,
LINE_TO, 11.41f, 9.64f,
LINE_TO, 15.5f, 6.03f,
LINE_TO, 10.11f, 5.56f,
LINE_TO, 8, 0.5f,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_CALCULATOR, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 8, 12,
LINE_TO, 24, 12,
LINE_TO, 24, 15,
LINE_TO, 8, 15,
LINE_TO, 8, 12,
LINE_TO, 8, 12,
CLOSE,
MOVE_TO, 8, 18,
LINE_TO, 24, 18,
LINE_TO, 24, 21,
LINE_TO, 8, 21,
LINE_TO, 8, 18,
LINE_TO, 8, 18,
CLOSE,
END
)
ICON_TEMPLATE(EXTENSION_CRASHED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 37, 23,
LINE_TO, 40, 23,
CUBIC_TO, 42.76f, 23, 45, 25.24f, 45, 28,
CUBIC_TO, 45, 30.76f, 42.76f, 33, 40, 33,
LINE_TO, 37, 33,
LINE_TO, 37, 41,
CUBIC_TO, 37, 43.2f, 35.2f, 45, 33, 45,
LINE_TO, 25.4f, 45,
LINE_TO, 25.4f, 42,
CUBIC_TO, 25.4f, 39.02f, 22.98f, 36.6f, 20, 36.6f,
CUBIC_TO, 17.02f, 36.6f, 14.6f, 39.02f, 14.6f, 42,
LINE_TO, 14.6f, 45,
LINE_TO, 7, 45,
CUBIC_TO, 4.8f, 45, 3, 43.2f, 3, 41,
LINE_TO, 3, 33.4f,
LINE_TO, 6, 33.4f,
CUBIC_TO, 8.98f, 33.4f, 11.4f, 30.98f, 11.4f, 28,
CUBIC_TO, 11.4f, 25.02f, 8.98f, 22.6f, 6, 22.6f,
LINE_TO, 3.02f, 22.6f,
LINE_TO, 3.02f, 15,
CUBIC_TO, 3.02f, 12.8f, 4.8f, 11, 7, 11,
LINE_TO, 15, 11,
LINE_TO, 15, 8,
CUBIC_TO, 15, 5.24f, 17.24f, 3, 20, 3,
CUBIC_TO, 22.76f, 3, 25, 5.24f, 25, 8,
LINE_TO, 25, 11,
LINE_TO, 29.5f, 11,
LINE_TO, 16, 31.5f,
LINE_TO, 37, 17.5f,
LINE_TO, 37, 23,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_MAXIMIZE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 23, 1,
R_V_LINE_TO, 22,
H_LINE_TO, 1,
V_LINE_TO, 1,
R_H_LINE_TO, 22,
CLOSE,
R_MOVE_TO, -3, 19,
H_LINE_TO, 4,
V_LINE_TO, 4,
R_H_LINE_TO, 16,
R_V_LINE_TO, 16,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_RESTORE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 23, 16,
H_LINE_TO, 8,
V_LINE_TO, 1,
R_H_LINE_TO, 15,
R_V_LINE_TO, 15,
CLOSE,
R_MOVE_TO, -12, -3,
V_LINE_TO, 4,
R_H_LINE_TO, 9,
R_V_LINE_TO, 9,
R_H_LINE_TO, -9,
CLOSE,
MOVE_TO, 4, 8,
H_LINE_TO, 1,
R_V_LINE_TO, 15,
R_H_LINE_TO, 15,
R_V_LINE_TO, -3,
H_LINE_TO, 4,
V_LINE_TO, 8,
CLOSE,
END
)
ICON_TEMPLATE(OVERFLOW_CHEVRON, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 4.12f, 2.42f,
CUBIC_TO, 3.64f, 1.86f, 2.85f, 1.86f, 2.36f, 2.42f,
CUBIC_TO, 1.88f, 2.98f, 1.88f, 3.89f, 2.36f, 4.45f,
LINE_TO, 5, 7.5f,
LINE_TO, 2.36f, 10.55f,
CUBIC_TO, 1.88f, 11.11f, 1.88f, 12.02f, 2.36f, 12.58f,
CUBIC_TO, 2.85f, 13.14f, 3.64f, 13.14f, 4.12f, 12.58f,
LINE_TO, 7.64f, 8.52f,
CUBIC_TO, 8.12f, 7.95f, 8.12f, 7.05f, 7.64f, 6.48f,
LINE_TO, 4.12f, 2.42f,
CLOSE,
MOVE_TO, 10.12f, 2.42f,
CUBIC_TO, 9.64f, 1.86f, 8.85f, 1.86f, 8.36f, 2.42f,
CUBIC_TO, 7.88f, 2.98f, 7.88f, 3.89f, 8.36f, 4.45f,
LINE_TO, 11, 7.5f,
LINE_TO, 8.36f, 10.55f,
CUBIC_TO, 7.88f, 11.11f, 7.88f, 12.02f, 8.36f, 12.58f,
CUBIC_TO, 8.85f, 13.14f, 9.64f, 13.14f, 10.12f, 12.58f,
LINE_TO, 13.64f, 8.52f,
CUBIC_TO, 14.12f, 7.95f, 14.12f, 7.05f, 13.64f, 6.48f,
LINE_TO, 10.12f, 2.42f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID_IN_CHIP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 21, 25,
H_LINE_TO, 11,
R_CUBIC_TO, -1, 0, -2, -0.99f, -2, -1.99f,
R_V_LINE_TO, -7.95f,
R_CUBIC_TO, 0, -0.99f, 1, -2.09f, 2, -2.09f,
R_V_LINE_TO, -1.99f,
CUBIC_TO, 11, 9.49f, 12.5f, 7, 16, 7,
R_CUBIC_TO, 3.5f, 0, 5, 2.49f, 5, 3.98f,
R_V_LINE_TO, 1.99f,
R_CUBIC_TO, 1, 0, 2, 1.09f, 2, 2.09f,
R_V_LINE_TO, 7.96f,
R_CUBIC_TO, 0, 1, -1, 1.99f, -2, 1.99f,
CLOSE,
R_MOVE_TO, -5, -8.95f,
R_CUBIC_TO, -1.1f, 0, -2, 0.88f, -2, 1.96f,
R_CUBIC_TO, 0, 0.72f, 0.4f, 1.35f, 1, 1.68f,
R_V_LINE_TO, 2.23f,
R_H_LINE_TO, 2,
V_LINE_TO, 19.69f,
R_CUBIC_TO, 0.6f, -0.34f, 1, -0.96f, 1, -1.68f,
R_CUBIC_TO, 0, -1.08f, -0.89f, -1.96f, -2, -1.96f,
CLOSE,
R_MOVE_TO, -3, -4.14f,
R_V_LINE_TO, 1.06f,
R_H_LINE_TO, 6,
R_V_LINE_TO, -1.06f,
R_CUBIC_TO, -0.04f, -1.69f, -1.32f, -2.92f, -3, -2.92f,
R_CUBIC_TO, -1.71f, 0, -3, 1.15f, -3, 2.92f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_ON, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 24, 4,
R_CUBIC_TO, -7.73f, 0, -14, 6.27f, -14, 14,
R_CUBIC_TO, 0, 10.5f, 14, 26, 14, 26,
R_CUBIC_TO, 0, 0, 14, -15.5f, 14, -26,
R_CUBIC_TO, 0, -7.73f, -6.27f, -14, -14, -14,
CLOSE,
CIRCLE, 24, 18, 5,
END
)
ICON_TEMPLATE(IMAGE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 42, 38,
V_LINE_TO, 10,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
H_LINE_TO, 10,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 28,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 28,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
CLOSE,
MOVE_TO, 17, 27,
R_LINE_TO, 5, 6.01f,
LINE_TO, 29, 24,
R_LINE_TO, 9, 12,
H_LINE_TO, 10,
R_LINE_TO, 7, -9,
CLOSE,
END
)
ICON_TEMPLATE(LOCK, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 36, 16,
R_H_LINE_TO, -2,
R_V_LINE_TO, -4,
R_CUBIC_TO, 0, -5.52f, -4.48f, -10, -10, -10,
CUBIC_TO, 18.48f, 2, 14, 6.48f, 14, 12,
R_V_LINE_TO, 4,
R_H_LINE_TO, -2,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 20,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 24,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 20,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
CLOSE,
MOVE_TO, 24, 34,
R_CUBIC_TO, -2.21f, 0, -4, -1.79f, -4, -4,
R_CUBIC_TO, 0, -2.21f, 1.79f, -4, 4, -4,
R_CUBIC_TO, 2.21f, 0, 4, 1.79f, 4, 4,
R_CUBIC_TO, 0, 2.21f, -1.79f, 4, -4, 4,
CLOSE,
R_MOVE_TO, 6.2f, -18,
H_LINE_TO, 17.8f,
R_V_LINE_TO, -4,
R_CUBIC_TO, 0, -3.42f, 2.78f, -6.2f, 6.2f, -6.2f,
R_CUBIC_TO, 3.42f, 0, 6.2f, 2.78f, 6.2f, 6.2f,
R_V_LINE_TO, 4,
CLOSE,
END
)
ICON_TEMPLATE(ZOOM_PLUS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 32.84f, 31.09f,
LINE_TO, 32.15f, 30.43f,
CUBIC_TO, 34.57f, 27.62f, 36.02f, 23.98f, 36.02f, 20.01f,
CUBIC_TO, 36.02f, 11.17f, 28.85f, 4, 20.01f, 4,
CUBIC_TO, 11.17f, 4, 4, 11.17f, 4, 20.01f,
CUBIC_TO, 4, 28.85f, 11.17f, 36.02f, 20.01f, 36.02f,
CUBIC_TO, 23.98f, 36.02f, 27.62f, 34.57f, 30.43f, 32.15f,
LINE_TO, 31.09f, 32.84f,
LINE_TO, 31.09f, 34.79f,
LINE_TO, 40.33f, 44,
LINE_TO, 44, 40.33f,
LINE_TO, 34.79f, 31.09f,
LINE_TO, 32.84f, 31.09f,
LINE_TO, 32.84f, 31.09f,
CLOSE,
MOVE_TO, 20, 32,
CUBIC_TO, 13.36f, 32, 8, 26.64f, 8, 20,
CUBIC_TO, 8, 13.36f, 13.36f, 8, 20, 8,
CUBIC_TO, 26.64f, 8, 32, 13.36f, 32, 20,
CUBIC_TO, 32, 26.64f, 26.64f, 32, 20, 32,
LINE_TO, 20, 32,
CLOSE,
MOVE_TO, 27, 21.4f,
LINE_TO, 21.4f, 21.4f,
LINE_TO, 21.4f, 27,
LINE_TO, 18.6f, 27,
LINE_TO, 18.6f, 21.4f,
LINE_TO, 13, 21.4f,
LINE_TO, 13, 18.6f,
LINE_TO, 18.6f, 18.6f,
LINE_TO, 18.6f, 13,
LINE_TO, 21.4f, 13,
LINE_TO, 21.4f, 18.6f,
LINE_TO, 27, 18.6f,
LINE_TO, 27, 21.4f,
LINE_TO, 27, 21.4f,
CLOSE,
END
)
ICON_TEMPLATE(WEB, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 40, 8,
H_LINE_TO, 8,
R_CUBIC_TO, -2.21f, 0, -3.98f, 1.79f, -3.98f, 4,
LINE_TO, 4, 36,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 32,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 12,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
CLOSE,
MOVE_TO, 30, 36,
H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, 22,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 0, -10,
H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, 22,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 10, 10,
R_H_LINE_TO, -8,
V_LINE_TO, 18,
R_H_LINE_TO, 8,
R_V_LINE_TO, 18,
CLOSE,
END
)
ICON_TEMPLATE(SMARTPHONE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 34, 2.02f,
LINE_TO, 14, 2,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 36,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 20,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 6,
R_CUBIC_TO, 0, -2.21f, -1.79f, -3.98f, -4, -3.98f,
CLOSE,
MOVE_TO, 34, 38,
H_LINE_TO, 14,
V_LINE_TO, 10,
R_H_LINE_TO, 20,
R_V_LINE_TO, 28,
CLOSE,
END
)
ICON_TEMPLATE(HELP_OUTLINE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 22, 36,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4,
R_H_LINE_TO, -4,
R_V_LINE_TO, 4,
CLOSE,
CIRCLE, 24, 24, 20,
CIRCLE, 24, 24, 16,
MOVE_TO, 24, 12,
R_CUBIC_TO, -4.42f, 0, -8, 3.58f, -8, 8,
R_H_LINE_TO, 4,
R_CUBIC_TO, 0, -2.2f, 1.8f, -4, 4, -4,
R_CUBIC_TO, 2.2f, 0, 4, 1.8f, 4, 4,
R_CUBIC_TO, 0, 4, -6, 3.5f, -6, 10,
R_H_LINE_TO, 4,
R_CUBIC_TO, 0, -4.5f, 6, -5, 6, -10,
R_CUBIC_TO, 0, -4.42f, -3.58f, -8, -8, -8,
END
)
ICON_TEMPLATE(LAPTOP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 40, 36,
R_CUBIC_TO, 2.2f, 0, 4, -1.8f, 4, -4,
V_LINE_TO, 12,
R_CUBIC_TO, 0, -2.2f, -1.8f, -4, -4, -4,
H_LINE_TO, 8,
R_CUBIC_TO, -2.2f, 0, -4, 1.8f, -4, 4,
R_V_LINE_TO, 20,
R_CUBIC_TO, 0, 2.2f, 1.8f, 4, 4, 4,
H_LINE_TO, 0,
R_V_LINE_TO, 4,
R_H_LINE_TO, 48,
R_V_LINE_TO, -4,
R_H_LINE_TO, -8,
CLOSE,
MOVE_TO, 8, 12,
R_H_LINE_TO, 32,
R_V_LINE_TO, 20,
H_LINE_TO, 8,
V_LINE_TO, 12,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 8, 5,
LINE_TO, 8, 27,
LINE_TO, 24, 27,
LINE_TO, 24, 11,
LINE_TO, 18, 5,
CLOSE,
MOVE_TO, 18, 11,
LINE_TO, 18, 7.5f,
LINE_TO, 21.5f, 11,
CLOSE,
MOVE_TO, 10, 25,
LINE_TO, 10, 7,
LINE_TO, 16, 7,
LINE_TO, 16, 13,
LINE_TO, 22, 13,
LINE_TO, 22, 25,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_STAR, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 8, 4,
LINE_TO, 9.12f, 6.79f,
LINE_TO, 12, 7.05f,
LINE_TO, 9.82f, 9.04f,
LINE_TO, 10.47f, 12,
LINE_TO, 8, 10.43f,
LINE_TO, 5.53f, 12,
LINE_TO, 6.18f, 9.04f,
LINE_TO, 4, 7.05f,
LINE_TO, 6.88f, 6.79f,
LINE_TO, 8, 4,
MOVE_TO, 8, 0.5f,
LINE_TO, 5.89f, 5.56f,
LINE_TO, 0.5f, 6.03f,
LINE_TO, 4.59f, 9.64f,
LINE_TO, 3.37f, 15,
LINE_TO, 8, 12.16f,
LINE_TO, 12.64f, 15,
LINE_TO, 11.41f, 9.64f,
LINE_TO, 15.5f, 6.03f,
LINE_TO, 10.11f, 5.56f,
LINE_TO, 8, 0.5f,
CLOSE,
END
)
ICON_TEMPLATE(FOLDER_MANAGED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 4.8f, 5,
CUBIC_TO, 3.26f, 5, 2.01f, 6.29f, 2.01f, 7.88f,
LINE_TO, 2, 25.13f,
CUBIC_TO, 2, 26.71f, 3.26f, 28, 4.8f, 28,
LINE_TO, 27.2f, 28,
CUBIC_TO, 28.74f, 28, 30, 26.71f, 30, 25.13f,
LINE_TO, 30, 10.75f,
CUBIC_TO, 30, 9.17f, 28.54f, 8, 27, 8,
LINE_TO, 16, 8,
LINE_TO, 13.2f, 5,
LINE_TO, 4.8f, 5,
CLOSE,
MOVE_TO, 7, 11,
LINE_TO, 7, 25,
LINE_TO, 25, 25,
LINE_TO, 25, 15,
LINE_TO, 17, 15,
LINE_TO, 17, 11,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 11, 23,
LINE_TO, 9, 23,
LINE_TO, 9, 21,
LINE_TO, 11, 21,
LINE_TO, 11, 23,
CLOSE,
MOVE_TO, 11, 19,
LINE_TO, 9, 19,
LINE_TO, 9, 17,
LINE_TO, 11, 17,
LINE_TO, 11, 19,
CLOSE,
MOVE_TO, 11, 15,
LINE_TO, 9, 15,
LINE_TO, 9, 13,
LINE_TO, 11, 13,
LINE_TO, 11, 15,
CLOSE,
MOVE_TO, 15, 23,
LINE_TO, 13, 23,
LINE_TO, 13, 21,
LINE_TO, 15, 21,
LINE_TO, 15, 23,
CLOSE,
MOVE_TO, 15, 19,
LINE_TO, 13, 19,
LINE_TO, 13, 17,
LINE_TO, 15, 17,
LINE_TO, 15, 19,
CLOSE,
MOVE_TO, 15, 15,
LINE_TO, 13, 15,
LINE_TO, 13, 13,
LINE_TO, 15, 13,
LINE_TO, 15, 15,
CLOSE,
MOVE_TO, 23, 25,
LINE_TO, 23, 23,
LINE_TO, 17, 23,
LINE_TO, 17, 21,
LINE_TO, 19, 21,
LINE_TO, 19, 19,
LINE_TO, 17, 19,
LINE_TO, 17, 17,
LINE_TO, 23, 17,
LINE_TO, 23, 25,
LINE_TO, 17, 25,
LINE_TO, 23, 25,
CLOSE,
MOVE_TO, 21, 19,
LINE_TO, 21, 21,
LINE_TO, 23, 21,
LINE_TO, 23, 19,
LINE_TO, 21, 19,
CLOSE,
END
)
ICON_TEMPLATE(BLOCKED_BADGE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_MODE_CLEAR,
MOVE_TO, 32, 32,
LINE_TO, 16, 32,
LINE_TO, 16, 18,
CUBIC_TO, 16, 16.9f, 16.9f, 16, 18, 16,
LINE_TO, 32, 16,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xDB, 0x44, 0x37,
MOVE_TO, 30, 32,
LINE_TO, 20, 32,
CUBIC_TO, 18.9f, 32, 18, 31.1f, 18, 30,
LINE_TO, 18, 20,
CUBIC_TO, 18, 18.9f, 18.9f, 18, 20, 18,
LINE_TO, 30, 18,
CUBIC_TO, 31.1f, 18, 32, 18.9f, 32, 20,
LINE_TO, 32, 30,
CUBIC_TO, 32, 31.1f, 31.1f, 32, 30, 32,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 26.8f, 22,
LINE_TO, 25, 23.8f,
LINE_TO, 23.2f, 22,
CUBIC_TO, 22.87f, 21.66f, 22.33f, 21.66f, 22, 22,
CUBIC_TO, 21.66f, 22.33f, 21.66f, 22.87f, 22, 23.2f,
LINE_TO, 23.8f, 25,
LINE_TO, 22, 26.8f,
CUBIC_TO, 21.66f, 27.13f, 21.66f, 27.67f, 22, 28,
CUBIC_TO, 22.33f, 28.34f, 22.87f, 28.34f, 23.2f, 28,
LINE_TO, 25, 26.2f,
LINE_TO, 26.8f, 28,
CUBIC_TO, 27.13f, 28.34f, 27.67f, 28.34f, 28, 28,
CUBIC_TO, 28.34f, 27.67f, 28.34f, 27.13f, 28, 26.8f,
LINE_TO, 26.2f, 25,
LINE_TO, 28, 23.2f,
CUBIC_TO, 28.34f, 22.87f, 28.34f, 22.33f, 28, 22,
CUBIC_TO, 27.67f, 21.66f, 27.13f, 21.66f, 26.8f, 22,
CLOSE,
END
)
ICON_TEMPLATE(MODE_EDIT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 6, 34.5f,
V_LINE_TO, 42,
R_H_LINE_TO, 7.5f,
R_LINE_TO, 22.13f, -22.13f,
R_LINE_TO, -7.5f, -7.5f,
LINE_TO, 6, 34.5f,
CLOSE,
R_MOVE_TO, 35.41f, -20.41f,
R_CUBIC_TO, 0.78f, -0.78f, 0.78f, -2.05f, 0, -2.83f,
R_LINE_TO, -4.67f, -4.67f,
R_CUBIC_TO, -0.78f, -0.78f, -2.05f, -0.78f, -2.83f, 0,
R_LINE_TO, -3.66f, 3.66f,
R_LINE_TO, 7.5f, 7.5f,
R_LINE_TO, 3.66f, -3.66f,
CLOSE,
END
)
ICON_TEMPLATE(PROTOCOL_HANDLER, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 43.44f, 22.66f,
LINE_TO, 30.15f, 8.59f,
CUBIC_TO, 29.42f, 7.82f, 28.14f, 7.81f, 27.39f, 8.57f,
LINE_TO, 24.05f, 12.01f,
LINE_TO, 20.82f, 8.59f,
CUBIC_TO, 20.08f, 7.81f, 18.79f, 7.81f, 18.06f, 8.57f,
LINE_TO, 4.58f, 22.44f,
CUBIC_TO, 4.21f, 22.82f, 4, 23.33f, 4, 23.87f,
CUBIC_TO, 4, 24.42f, 4.2f, 24.93f, 4.56f, 25.32f,
LINE_TO, 17.85f, 39.39f,
CUBIC_TO, 18.22f, 39.78f, 18.71f, 40, 19.24f, 40,
CUBIC_TO, 19.75f, 40, 20.24f, 39.79f, 20.61f, 39.41f,
LINE_TO, 23.95f, 35.97f,
LINE_TO, 27.18f, 39.39f,
CUBIC_TO, 27.55f, 39.78f, 28.04f, 40, 28.57f, 40,
CUBIC_TO, 29.09f, 40, 29.58f, 39.79f, 29.94f, 39.41f,
LINE_TO, 43.42f, 25.54f,
CUBIC_TO, 44.18f, 24.76f, 44.19f, 23.46f, 43.44f, 22.66f,
LINE_TO, 43.44f, 22.66f,
LINE_TO, 43.44f, 22.66f,
CLOSE,
MOVE_TO, 13.89f, 24.93f,
LINE_TO, 21.21f, 32.5f,
LINE_TO, 19.26f, 34.46f,
LINE_TO, 8.71f, 23.54f,
LINE_TO, 19.41f, 12.79f,
LINE_TO, 21.27f, 14.71f,
LINE_TO, 13.92f, 22.11f,
CUBIC_TO, 13.54f, 22.49f, 13.34f, 22.98f, 13.33f, 23.52f,
CUBIC_TO, 13.33f, 24.05f, 13.53f, 24.55f, 13.89f, 24.93f,
LINE_TO, 13.89f, 24.93f,
LINE_TO, 13.89f, 24.93f,
CLOSE,
MOVE_TO, 28.59f, 34.46f,
LINE_TO, 26.73f, 32.54f,
LINE_TO, 34.09f, 25.14f,
CUBIC_TO, 34.85f, 24.37f, 34.86f, 23.1f, 34.11f, 22.32f,
LINE_TO, 26.79f, 14.75f,
LINE_TO, 28.74f, 12.79f,
LINE_TO, 39.29f, 23.71f,
LINE_TO, 28.59f, 34.46f,
LINE_TO, 28.59f, 34.46f,
CLOSE,
END
)
ICON_TEMPLATE(TAB_CLOSE_HOVERED_PRESSED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The close "X" for a tab when hovered/pressed.
CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
STROKE, 2.45f,
MOVE_TO, 10.25f, 10.25f,
R_LINE_TO, 11.5f, 11.5f,
MOVE_TO, 10.25f, 21.75f,
R_LINE_TO, 11.5f, -11.5f,
END)
ICON_TEMPLATE(TAB, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 42, 6,
H_LINE_TO, 6,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 28,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 36,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 10,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
CLOSE,
R_MOVE_TO, 0, 32,
H_LINE_TO, 6,
V_LINE_TO, 10,
R_H_LINE_TO, 20,
R_V_LINE_TO, 8,
R_H_LINE_TO, 16,
R_V_LINE_TO, 20,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_INVALID_INVERT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 2, 2, 28, 28, 4,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xC5, 0x39, 0x29,
MOVE_TO, 21, 25,
LINE_TO, 11, 25,
CUBIC_TO, 10, 25, 9, 24.01f, 9, 23.01f,
LINE_TO, 9, 15.06f,
CUBIC_TO, 9, 14.06f, 10, 12.97f, 11, 12.97f,
LINE_TO, 11, 10.98f,
CUBIC_TO, 11, 9.49f, 12.5f, 7, 16, 7,
CUBIC_TO, 19.5f, 7, 21, 9.49f, 21, 10.98f,
LINE_TO, 21, 12.97f,
CUBIC_TO, 22, 12.97f, 23, 14.06f, 23, 15.06f,
LINE_TO, 23, 23.01f,
CUBIC_TO, 23, 24.01f, 22, 25, 21, 25,
CLOSE,
MOVE_TO, 13, 11.91f,
LINE_TO, 13, 12.97f,
LINE_TO, 19, 12.97f,
CUBIC_TO, 19, 12.97f, 19, 11.95f, 19, 11.91f,
CUBIC_TO, 18.96f, 10.21f, 17.68f, 8.99f, 16, 8.99f,
CUBIC_TO, 14.29f, 8.99f, 13, 10.14f, 13, 11.91f,
CLOSE,
MOVE_TO, 18.05f, 15.95f,
LINE_TO, 16.01f, 17.98f,
LINE_TO, 13.97f, 15.95f,
LINE_TO, 13.02f, 16.89f,
LINE_TO, 15.07f, 18.92f,
LINE_TO, 13, 20.98f,
LINE_TO, 13.94f, 21.92f,
LINE_TO, 16.01f, 19.86f,
LINE_TO, 18.05f, 21.88f,
LINE_TO, 19, 20.94f,
LINE_TO, 16.96f, 18.92f,
LINE_TO, 19, 16.89f,
LINE_TO, 18.05f, 15.95f,
CLOSE,
END
)
ICON_TEMPLATE(CRASHED_TAB, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

STROKE, 3,
CAP_SQUARE,
MOVE_TO, 1.5, 8.5,
R_V_LINE_TO, 34,
R_H_LINE_TO, 45,
R_V_LINE_TO, -28,
R_MOVE_TO, -3, -3,
R_H_LINE_TO, -10,
R_V_LINE_TO, -3,
R_MOVE_TO, -3, -3,
R_H_LINE_TO, -10,
R_MOVE_TO, 15, 6,
R_H_LINE_TO, -18,
R_V_LINE_TO, -3,
R_MOVE_TO, -3, -3,
R_H_LINE_TO, -10,
NEW_PATH,
STROKE, 2,
CAP_SQUARE,
MOVE_TO, 12, 35,
R_H_LINE_TO, 2,
R_MOVE_TO, 2, -2,
R_H_LINE_TO, 12,
R_MOVE_TO, 2, 2,
R_H_LINE_TO, 3,
R_MOVE_TO, 2, 2,
R_H_LINE_TO, 3,
MOVE_TO, 11, 21,
R_LINE_TO, 0, 0,
R_MOVE_TO, 0, 4,
R_LINE_TO, 0, 0,
R_MOVE_TO, 4, 0,
R_LINE_TO, 0, 0,
R_MOVE_TO, 0, -4,
R_LINE_TO, 0, 0,
R_MOVE_TO, -2, 2,
R_LINE_TO, 0, 0,
MOVE_TO, 33, 21,
R_LINE_TO, 0, 0,
R_MOVE_TO, 0, 4,
R_LINE_TO, 0, 0,
R_MOVE_TO, 4, 0,
R_LINE_TO, 0, 0,
R_MOVE_TO, 0, -4,
R_LINE_TO, 0, 0,
R_MOVE_TO, -2, 2,
R_LINE_TO, 0, 0,
END
)
ICON_TEMPLATE(SUPERVISOR_ACCOUNT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 33, 19, 5,
CIRCLE, 18, 16, 6,
MOVE_TO, 33, 28,
R_CUBIC_TO, -3.67f, 0, -11, 1.84f, -11, 5.5f,
V_LINE_TO, 38,
R_H_LINE_TO, 22,
R_V_LINE_TO, -4.5f,
R_CUBIC_TO, 0, -3.66f, -7.33f, -5.5f, -11, -5.5f,
CLOSE,
R_MOVE_TO, -15, -2,
R_CUBIC_TO, -4.67f, 0, -14, 2.34f, -14, 7,
R_V_LINE_TO, 5,
R_H_LINE_TO, 14,
R_V_LINE_TO, -4.5f,
R_CUBIC_TO, 0, -1.7f, .67f, -4.67f, 4.74f, -6.94f,
CUBIC_TO, 21, 26.19f, 19.31f, 26, 18, 26,
END,
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID_INVERT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 2, 2, 28, 28, 4,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0x0B, 0x80, 0x43,
MOVE_TO, 21, 25,
LINE_TO, 11, 25,
CUBIC_TO, 10, 25, 9, 24.01f, 9, 23.01f,
LINE_TO, 9, 15.06f,
CUBIC_TO, 9, 14.06f, 10, 12.97f, 11, 12.97f,
LINE_TO, 11, 10.98f,
CUBIC_TO, 11, 9.49f, 12.5f, 7, 16, 7,
CUBIC_TO, 19.5f, 7, 21, 9.49f, 21, 10.98f,
LINE_TO, 21, 12.97f,
CUBIC_TO, 22, 12.97f, 23, 14.06f, 23, 15.06f,
LINE_TO, 23, 23.01f,
CUBIC_TO, 23, 24.01f, 22, 25, 21, 25,
CLOSE,
MOVE_TO, 16, 16.05f,
CUBIC_TO, 14.9f, 16.05f, 14, 16.93f, 14, 18.01f,
CUBIC_TO, 14, 18.73f, 14.4f, 19.35f, 15, 19.69f,
LINE_TO, 15, 21.92f,
LINE_TO, 17, 21.92f,
LINE_TO, 17, 19.69f,
CUBIC_TO, 17.6f, 19.35f, 18, 18.73f, 18, 18.01f,
CUBIC_TO, 18, 16.93f, 17.1f, 16.05f, 16, 16.05f,
CLOSE,
MOVE_TO, 13, 11.91f,
LINE_TO, 13, 12.97f,
LINE_TO, 19, 12.97f,
CUBIC_TO, 19, 12.97f, 19, 11.95f, 19, 11.91f,
CUBIC_TO, 18.96f, 10.21f, 17.68f, 8.99f, 16, 8.99f,
CUBIC_TO, 14.29f, 8.99f, 13, 10.14f, 13, 11.91f,
CLOSE,
END
)
ICON_TEMPLATE(FOLDER, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 4.8f, 5,
CUBIC_TO, 3.26f, 5, 2.01f, 6.29f, 2.01f, 7.88f,
LINE_TO, 2, 25.13f,
CUBIC_TO, 2, 26.71f, 3.26f, 28, 4.8f, 28,
LINE_TO, 27.2f, 28,
CUBIC_TO, 28.74f, 28, 30, 26.71f, 30, 25.13f,
LINE_TO, 30, 10.75f,
CUBIC_TO, 30, 9.17f, 28.54f, 8, 27, 8,
LINE_TO, 16, 8,
LINE_TO, 13.2f, 5,
LINE_TO, 4.8f, 5,
CLOSE,
END
)
ICON_TEMPLATE(SAD_TAB, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 38, 13,
LINE_TO, 21, 13,
LINE_TO, 17, 7,
LINE_TO, 10, 7,
CUBIC_TO, 7.7f, 7, 6.02f, 8.69f, 6, 11,
LINE_TO, 6, 37,
CUBIC_TO, 6, 39.31f, 7.7f, 41, 10, 41,
LINE_TO, 38, 41,
CUBIC_TO, 40.3f, 41, 42, 39.31f, 42, 37,
LINE_TO, 42, 17,
CUBIC_TO, 42, 14.36f, 40.3f, 12.67f, 38, 13,
LINE_TO, 38, 13,
LINE_TO, 38, 13,
CLOSE,
MOVE_TO, 16, 18,
LINE_TO, 20, 18,
LINE_TO, 20, 23,
LINE_TO, 16, 23,
LINE_TO, 16, 18,
LINE_TO, 16, 18,
CLOSE,
MOVE_TO, 33, 35,
LINE_TO, 29, 35,
LINE_TO, 29, 31,
LINE_TO, 20, 31,
LINE_TO, 20, 35,
LINE_TO, 16, 35,
LINE_TO, 16, 31,
LINE_TO, 20, 31,
LINE_TO, 20, 27,
LINE_TO, 29, 27,
LINE_TO, 29, 31,
LINE_TO, 33, 31,
LINE_TO, 33, 35,
LINE_TO, 33, 35,
CLOSE,
MOVE_TO, 28, 18,
LINE_TO, 32, 18,
LINE_TO, 32, 23,
LINE_TO, 28, 23,
LINE_TO, 28, 18,
LINE_TO, 28, 18,
CLOSE,
END
)
ICON_TEMPLATE(FILE_DOWNLOAD_SHELF, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A modified version of "file_download" with a wider bottom bar and taller
// arrow, and a white circle.
CANVAS_DIMENSIONS, 72,
PATH_COLOR_ARGB, 0xE6, 0xFF, 0xFF, 0xFF,
CIRCLE, 36, 36, 36,
NEW_PATH,
MOVE_TO, 32, 22,
R_H_LINE_TO, 8,
R_V_LINE_TO, 10,
R_H_LINE_TO, 6,
R_LINE_TO, -10, 10,
R_LINE_TO, -10, -10,
R_H_LINE_TO, 6,
R_V_LINE_TO, -10,
CLOSE,
MOVE_TO, 20, 56,
R_H_LINE_TO, 32,
R_V_LINE_TO, 4,
R_H_LINE_TO, -32,
CLOSE,
END
)
ICON_TEMPLATE(CODE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 18.8f, 33.2f,
LINE_TO, 9.7f, 24,
R_LINE_TO, 9.2f, -9.2f,
LINE_TO, 16, 12,
LINE_TO, 4, 24,
R_LINE_TO, 12, 12,
R_LINE_TO, 2.8f, -2.8f,
CLOSE,
R_MOVE_TO, 10.4f, 0,
R_LINE_TO, 9.2f, -9.2f,
R_LINE_TO, -9.2f, -9.2f,
LINE_TO, 32, 12,
R_LINE_TO, 12, 12,
R_LINE_TO, -12, 12,
R_LINE_TO, -2.8f, -2.8f,
CLOSE,
END
)
ICON_TEMPLATE(FIND_NEXT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_expand_more with rounded corners.
CANVAS_DIMENSIONS, 32,
STROKE, 3,
MOVE_TO, 8.5f, 12.5f,
R_LINE_TO, 7.5f, 8,
R_LINE_TO, 7.5f, -8,
// Hard clip at path points +- half the stroke.
CLIP, 7, 11, 18, 11,
END,
)
ICON_TEMPLATE(OMNIBOX_EXTENSION_APP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 24, 14,
LINE_TO, 24, 10,
CUBIC_TO, 24, 9, 23, 8, 22, 8,
LINE_TO, 18, 8,
LINE_TO, 18, 6,
CUBIC_TO, 17.57f, 4.28f, 16.5f, 3, 15, 3,
CUBIC_TO, 13.5f, 3, 11.86f, 4.28f, 12, 6,
LINE_TO, 12, 8,
LINE_TO, 7, 8,
CUBIC_TO, 6, 8, 5, 9, 5, 10,
LINE_TO, 5, 14,
LINE_TO, 7, 14,
CUBIC_TO, 8.42f, 14.2f, 9.8f, 15.58f, 10, 17,
CUBIC_TO, 9.8f, 18.99f, 8.42f, 20.37f, 7, 20,
LINE_TO, 5, 20,
LINE_TO, 5, 25,
CUBIC_TO, 5, 25.97f, 6.03f, 27, 7, 27,
LINE_TO, 12, 27,
LINE_TO, 12, 25,
CUBIC_TO, 11.63f, 23.58f, 13.01f, 22.2f, 15, 22,
CUBIC_TO, 16.42f, 22.2f, 17.8f, 23.58f, 18, 25,
LINE_TO, 18, 27,
LINE_TO, 22, 27,
CUBIC_TO, 23, 27, 24, 26, 24, 25,
LINE_TO, 24, 20,
LINE_TO, 26, 20,
CUBIC_TO, 27.72f, 20.14f, 29, 18.5f, 29, 17,
CUBIC_TO, 29, 15.5f, 27.72f, 14.43f, 26, 14,
LINE_TO, 24, 14,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_INVALID, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0xC5, 0x39, 0x29,
ROUND_RECT, 2, 2, 28, 28, 4,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 21, 25,
LINE_TO, 11, 25,
CUBIC_TO, 10, 25, 9, 24.01f, 9, 23.01f,
LINE_TO, 9, 15.06f,
CUBIC_TO, 9, 14.06f, 10, 12.97f, 11, 12.97f,
LINE_TO, 11, 10.98f,
CUBIC_TO, 11, 9.49f, 12.5f, 7, 16, 7,
CUBIC_TO, 19.5f, 7, 21, 9.49f, 21, 10.98f,
LINE_TO, 21, 12.97f,
CUBIC_TO, 22, 12.97f, 23, 14.06f, 23, 15.06f,
LINE_TO, 23, 23.01f,
CUBIC_TO, 23, 24.01f, 22, 25, 21, 25,
CLOSE,
MOVE_TO, 13, 11.91f,
LINE_TO, 13, 12.97f,
LINE_TO, 19, 12.97f,
CUBIC_TO, 19, 12.97f, 19, 11.95f, 19, 11.91f,
CUBIC_TO, 18.96f, 10.21f, 17.68f, 8.99f, 16, 8.99f,
CUBIC_TO, 14.29f, 8.99f, 13, 10.14f, 13, 11.91f,
CLOSE,
MOVE_TO, 18.05f, 15.95f,
LINE_TO, 16.01f, 17.98f,
LINE_TO, 13.97f, 15.95f,
LINE_TO, 13.02f, 16.89f,
LINE_TO, 15.07f, 18.92f,
LINE_TO, 13, 20.98f,
LINE_TO, 13.94f, 21.92f,
LINE_TO, 16.01f, 19.86f,
LINE_TO, 18.05f, 21.88f,
LINE_TO, 19, 20.94f,
LINE_TO, 16.96f, 18.92f,
LINE_TO, 19, 16.89f,
LINE_TO, 18.05f, 15.95f,
CLOSE,
END
)
ICON_TEMPLATE(AUTOFILL, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 6, 34.5f,
LINE_TO, 6, 42,
LINE_TO, 13.5f, 42,
LINE_TO, 35.63f, 19.87f,
LINE_TO, 28.13f, 12.37f,
LINE_TO, 6, 34.5f,
LINE_TO, 6, 34.5f,
CLOSE,
MOVE_TO, 41.41f, 14.09f,
CUBIC_TO, 42.2f, 13.3f, 42.2f, 12.04f, 41.41f, 11.26f,
LINE_TO, 36.74f, 6.59f,
CUBIC_TO, 35.96f, 5.8f, 34.7f, 5.8f, 33.91f, 6.59f,
LINE_TO, 30.25f, 10.25f,
LINE_TO, 37.75f, 17.75f,
LINE_TO, 41.41f, 14.09f,
LINE_TO, 41.41f, 14.09f,
CLOSE,
MOVE_TO, 24, 38,
LINE_TO, 20, 42,
LINE_TO, 42, 42,
LINE_TO, 42, 38,
LINE_TO, 24, 38,
LINE_TO, 24, 38,
CLOSE,
END
)
ICON_TEMPLATE(MENU_RADIO_SELECTED, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11,
CIRCLE, 16, 16, 7,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_CLOSE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 23, 3.22f,
LINE_TO, 20.78f, 1,
LINE_TO, 12, 9.78f,
LINE_TO, 3.22f, 1,
LINE_TO, 1, 3.22f,
LINE_TO, 9.78f, 12,
LINE_TO, 1, 20.78f,
LINE_TO, 3.22f, 23,
LINE_TO, 12, 14.22f,
LINE_TO, 20.78f, 23,
LINE_TO, 23, 20.78f,
LINE_TO, 14.22f, 12,
LINE_TO, 23, 3.22f,
CLOSE,
END
)
ICON_TEMPLATE(VIDEOCAM, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 34, 21,
R_V_LINE_TO, -7,
R_CUBIC_TO, 0, -1.1f, -0.9f, -2, -2, -2,
H_LINE_TO, 8,
R_CUBIC_TO, -1.1f, 0, -2, 0.9f, -2, 2,
R_V_LINE_TO, 20,
R_CUBIC_TO, 0, 1.1f, 0.9f, 2, 2, 2,
R_H_LINE_TO, 24,
R_CUBIC_TO, 1.1f, 0, 2, -0.9f, 2, -2,
R_V_LINE_TO, -7,
R_LINE_TO, 8, 8,
V_LINE_TO, 13,
R_LINE_TO, -8, 8,
CLOSE,
END
)
ICON_TEMPLATE(TAB_MEDIA_CAPTURING, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0x42, 0x85, 0xF4,
MOVE_TO, 0, 4,
R_H_LINE_TO, 32,
R_V_LINE_TO, 24,
H_LINE_TO, 0,
V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 2, 2,
R_H_LINE_TO, 28,
R_V_LINE_TO, 20,
H_LINE_TO, 2,
V_LINE_TO, 6,
CLOSE,
R_MOVE_TO, 2, 2,
R_H_LINE_TO, 24,
R_V_LINE_TO, 16,
H_LINE_TO, 4,
V_LINE_TO, 8,
CLOSE,
END
)
ICON_TEMPLATE(AUTOLOGIN, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 15.6f, 23,
CUBIC_TO, 13.56f, 23, 12, 20.76f, 12, 18.75f,
LINE_TO, 12, 9.64f,
CUBIC_TO, 12, 7.63f, 13.65f, 6, 15.69f, 6,
LINE_TO, 32.31f, 6,
CUBIC_TO, 34.35f, 6, 36, 7.63f, 36, 9.64f,
LINE_TO, 36, 18.75f,
CUBIC_TO, 36, 20.76f, 34.44f, 23, 32.4f, 23,
LINE_TO, 28, 23,
LINE_TO, 28, 37.11f,
LINE_TO, 25.87f, 42,
LINE_TO, 23.01f, 42,
LINE_TO, 20, 40.78f,
LINE_TO, 20, 23,
LINE_TO, 15.6f, 23,
CLOSE,
MOVE_TO, 24, 25,
LINE_TO, 24, 37,
LINE_TO, 22, 37,
LINE_TO, 22, 25,
LINE_TO, 24, 25,
CLOSE,
MOVE_TO, 18, 9,
LINE_TO, 30, 9,
LINE_TO, 30, 13,
LINE_TO, 18, 13,
LINE_TO, 18, 9,
LINE_TO, 18, 9,
CLOSE,
END
)
ICON_TEMPLATE(COOKIE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 31, 15,
LINE_TO, 31, 14,
CUBIC_TO, 31, 12.04f, 30, 11, 28, 11,
LINE_TO, 27, 11,
CUBIC_TO, 26.45f, 11, 26, 10.55f, 26, 10,
LINE_TO, 26, 6,
CUBIC_TO, 26, 4.04f, 24, 4, 24, 4,
CUBIC_TO, 12.6f, 4, 3.42f, 13.54f, 4.03f, 25.08f,
CUBIC_TO, 4.56f, 35.17f, 12.83f, 43.44f, 22.92f, 43.97f,
CUBIC_TO, 34.46f, 44.58f, 44, 35.4f, 44, 24,
LINE_TO, 44, 22,
CUBIC_TO, 44, 20.9f, 43.11f, 20, 42, 20,
LINE_TO, 38, 20,
CUBIC_TO, 37.45f, 20, 37, 19.55f, 37, 19,
LINE_TO, 37, 18,
CUBIC_TO, 37, 16.13f, 36.04f, 15.04f, 34, 15,
LINE_TO, 31, 15,
LINE_TO, 31, 15,
CLOSE,
MOVE_TO, 11.59f, 24.94f,
CUBIC_TO, 9.47f, 25.35f, 7.66f, 23.53f, 8.06f, 21.41f,
CUBIC_TO, 8.28f, 20.24f, 9.24f, 19.28f, 10.41f, 19.06f,
CUBIC_TO, 12.53f, 18.66f, 14.35f, 20.47f, 13.94f, 22.59f,
CUBIC_TO, 13.72f, 23.76f, 12.76f, 24.72f, 11.59f, 24.94f,
LINE_TO, 11.59f, 24.94f,
CLOSE,
MOVE_TO, 15.06f, 14.59f,
CUBIC_TO, 14.66f, 12.47f, 16.47f, 10.66f, 18.59f, 11.06f,
CUBIC_TO, 19.76f, 11.28f, 20.72f, 12.24f, 20.94f, 13.41f,
CUBIC_TO, 21.35f, 15.53f, 19.53f, 17.35f, 17.41f, 16.94f,
CUBIC_TO, 16.24f, 16.72f, 15.28f, 15.76f, 15.06f, 14.59f,
LINE_TO, 15.06f, 14.59f,
CLOSE,
MOVE_TO, 22.59f, 38.94f,
CUBIC_TO, 20.47f, 39.35f, 18.66f, 37.53f, 19.06f, 35.41f,
CUBIC_TO, 19.28f, 34.24f, 20.24f, 33.28f, 21.41f, 33.06f,
CUBIC_TO, 23.53f, 32.66f, 25.35f, 34.47f, 24.94f, 36.59f,
CUBIC_TO, 24.72f, 37.76f, 23.76f, 38.72f, 22.59f, 38.94f,
LINE_TO, 22.59f, 38.94f,
CLOSE,
MOVE_TO, 23, 28,
CUBIC_TO, 21.34f, 28, 20, 26.66f, 20, 25,
CUBIC_TO, 20, 23.34f, 21.34f, 22, 23, 22,
CUBIC_TO, 24.66f, 22, 26, 23.34f, 26, 25,
CUBIC_TO, 26, 26.66f, 24.66f, 28, 23, 28,
LINE_TO, 23, 28,
CLOSE,
MOVE_TO, 33, 32,
CUBIC_TO, 31.34f, 32, 30, 30.66f, 30, 29,
CUBIC_TO, 30, 27.34f, 31.34f, 26, 33, 26,
CUBIC_TO, 34.66f, 26, 36, 27.34f, 36, 29,
CUBIC_TO, 36, 30.66f, 34.66f, 32, 33, 32,
LINE_TO, 33, 32,
CLOSE,
END
)
ICON_TEMPLATE(FILE_DOWNLOAD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 38, 18,
R_H_LINE_TO, -8,
V_LINE_TO, 6,
H_LINE_TO, 18,
R_V_LINE_TO, 12,
R_H_LINE_TO, -8,
R_LINE_TO, 14, 14,
R_LINE_TO, 14, -14,
CLOSE,
MOVE_TO, 10, 36,
R_V_LINE_TO, 4,
R_H_LINE_TO, 28,
R_V_LINE_TO, -4,
H_LINE_TO, 10,
CLOSE,
END
)
ICON_TEMPLATE(ACCOUNT_CHILD_INVERT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 24, 10, 6,
CIRCLE, 24, 26, 4,
MOVE_TO, 24, 18,
R_CUBIC_TO, -6.16f, 0, -13, 3.12f, -13, 7.23f,
R_V_LINE_TO, 11.54f,
R_CUBIC_TO, 0, 2.32f, 2.19f, 4.33f, 5.2f, 5.63f,
R_CUBIC_TO, 2.32f, 1, 5.12f, 1.59f, 7.8f, 1.59f,
R_CUBIC_TO, .66f, 0, 1.33f, -.06f, 2, -.14f,
R_V_LINE_TO, -5.2f,
R_CUBIC_TO, -.67f, .08f, -1.34f, .14f, -2, .14f,
R_CUBIC_TO, -2.63f, 0, -5.39f, -.57f, -7.68f, -1.55f,
R_CUBIC_TO, .67f, -2.12f, 4.34f, -3.65f, 7.68f, -3.65f,
R_CUBIC_TO, .86f, 0, 1.75f, .11f, 2.6f, .29f,
R_CUBIC_TO, 2.79f, .62f, 5.2f, 2.15f, 5.2f, 4.04f,
R_V_LINE_TO, 4.47f,
R_CUBIC_TO, 3.01f, -1.31f, 5.2f, -3.31f, 5.2f, -5.63f,
V_LINE_TO, 25.23f,
CUBIC_TO, 37, 21.12f, 30.16f, 18, 24, 18,
CLOSE,
END,
)
ICON_TEMPLATE(REMOVE_BOX, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 19, 3,
H_LINE_TO, 5,
R_CUBIC_TO, -1.1f, 0, -2, 0.9f, -2, 2,
R_V_LINE_TO, 14,
R_CUBIC_TO, 0, 1.1f, 0.9f, 2, 2, 2,
R_H_LINE_TO, 14,
R_CUBIC_TO, 1.1f, 0, 2, -0.9f, 2, -2,
V_LINE_TO, 5,
R_CUBIC_TO, 0, -1.1f, -0.9f, -2, -2, -2,
CLOSE,
R_MOVE_TO, -2, 10,
H_LINE_TO, 7,
R_V_LINE_TO, -2,
R_H_LINE_TO, 10,
R_V_LINE_TO, 2,
CLOSE,
END
)
ICON_TEMPLATE(TRANSLATE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 7.7f, 3.8f,
H_LINE_TO, 6.7f,
CUBIC_TO, 6.3f, 5.3f, 6, 5.6f, 5.5f, 6.3f,
R_CUBIC_TO, 0.6f, 0.4f, 1.4f, 0.9f, 2.1f, 1.2f,
LINE_TO, 7.2f, 8.1f,
CUBIC_TO, 6.3f, 7.8f, 5.8f, 7.3f, 5, 6.8f,
R_CUBIC_TO, -0.8f, 0.5f, -1.3f, 1, -2.2f, 1.3f,
LINE_TO, 2.3f, 7.5f,
R_CUBIC_TO, 0.8f, -0.3f, 1.6f, -0.8f, 2.1f, -1.2f,
CUBIC_TO, 4, 5.6f, 3.7f, 5.2f, 3.4f, 4.5f,
R_H_LINE_TO, 0.7f,
CUBIC_TO, 4.4f, 5, 4.7f, 5.5f, 5, 5.9f,
R_CUBIC_TO, 0.5f, -0.6f, 0.9f, -1.1f, 1, -2.2f,
R_LINE_TO, -3.7f, 0,
V_LINE_TO, 3.1f,
R_H_LINE_TO, 2.3f,
V_LINE_TO, 2.3f,
R_H_LINE_TO, 0.7f,
R_V_LINE_TO, 0.7f,
R_H_LINE_TO, 2.3f,
V_LINE_TO, 3.8f,
CLOSE,
MOVE_TO, 7.7f, 1,
H_LINE_TO, 2.3f,
CUBIC_TO, 1.7f, 1, 1, 1.7f, 1, 2.3f,
R_V_LINE_TO, 5.3f,
CUBIC_TO, 1, 8.2f, 1.8f, 9, 2.3f, 9,
R_H_LINE_TO, 5.3f,
CUBIC_TO, 8.2f, 9, 9, 8.2f, 9, 7.7f,
V_LINE_TO, 2.3f,
CUBIC_TO, 9, 1.7f, 8.3f, 1, 7.7f, 1,
CLOSE,
NEW_PATH,
MOVE_TO, 13.7f, 7,
H_LINE_TO, 9,
H_LINE_TO, 8,
R_V_LINE_TO, 1,
R_V_LINE_TO, 0.5f,
H_LINE_TO, 7,
V_LINE_TO, 9,
R_V_LINE_TO, 1,
R_V_LINE_TO, 3.7f,
CUBIC_TO, 7, 14.3f, 7.7f, 15, 8.3f, 15,
R_H_LINE_TO, 5.6f,
R_CUBIC_TO, 0.6f, 0, 1.1f, -0.6f, 1.1f, -1.1f,
V_LINE_TO, 8.3f,
CUBIC_TO, 15, 7.7f, 14.3f, 7, 13.7f, 7,
CLOSE,
MOVE_TO, 12.4f, 13.2f,
R_LINE_TO, -0.4f, -1,
H_LINE_TO, 10,
R_LINE_TO, -0.4f, 1,
H_LINE_TO, 8.8f,
R_LINE_TO, 1.7f, -4.4f,
R_H_LINE_TO, 1,
R_LINE_TO, 1.7f, 4.4f,
H_LINE_TO, 12.4f,
CLOSE,
MOVE_TO, 10.1f, 11.4f,
LINE_TO, 11.9f, 11.4f,
LINE_TO, 11, 9.2f,
CLOSE,
END
)
ICON_TEMPLATE(KEYWORD_SEARCH, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 19.72f, 18.95f,
LINE_TO, 19.42f, 18.65f,
CUBIC_TO, 20.48f, 17.42f, 21.12f, 15.81f, 21.12f, 14.06f,
CUBIC_TO, 21.12f, 10.16f, 17.96f, 7, 14.06f, 7,
CUBIC_TO, 10.16f, 7, 7, 10.16f, 7, 14.06f,
CUBIC_TO, 7, 17.96f, 10.16f, 21.12f, 14.06f, 21.12f,
CUBIC_TO, 15.82f, 21.12f, 17.42f, 20.48f, 18.65f, 19.42f,
LINE_TO, 18.95f, 19.72f,
LINE_TO, 18.95f, 20.58f,
LINE_TO, 24.38f, 26,
LINE_TO, 26, 24.38f,
LINE_TO, 20.58f, 18.95f,
LINE_TO, 19.72f, 18.95f,
CLOSE,
MOVE_TO, 14, 19,
CUBIC_TO, 11.24f, 19, 9, 16.76f, 9, 14,
CUBIC_TO, 9, 11.24f, 11.24f, 9, 14, 9,
CUBIC_TO, 16.76f, 9, 19, 11.24f, 19, 14,
CUBIC_TO, 19, 16.76f, 16.76f, 19, 14, 19,
LINE_TO, 14, 19,
CLOSE,
END
)
ICON_TEMPLATE(REMOVE_CIRCLE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 24, 24, 20,
MOVE_TO, 34, 26,
H_LINE_TO, 14,
R_V_LINE_TO, -4,
R_H_LINE_TO, 20,
R_V_LINE_TO, 4,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_RIGHT_SNAPPED, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 9, 2.05f,
R_LINE_TO, 9.71f, 9.46f,
LINE_TO, 9, 20.96f,
LINE_TO, 11.14f, 23,
R_LINE_TO, 7.93f, -7.75f,
LINE_TO, 23, 11.5f,
R_LINE_TO, -5, -4.77f,
LINE_TO, 11.14f, 0,
LINE_TO, 9, 2.05f,
CLOSE,
END
)
ICON_TEMPLATE(BAR_CLOSE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_close with rounded corners.
CANVAS_DIMENSIONS, 32,
STROKE, 3.5f,
MOVE_TO, 8.75f, 8.75f,
R_LINE_TO, 14.5f, 14.5f,
MOVE_TO, 8.75f, 23.25f,
R_LINE_TO, 14.5f, -14.5f,
END
)
ICON_TEMPLATE(NAVIGATE_RELOAD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 25.1f, 20.15f,
LINE_TO, 25.08f, 20.14f,
CUBIC_TO, 23.51f, 23.59f, 20.04f, 26, 16, 26,
CUBIC_TO, 10.48f, 26, 6, 21.52f, 6, 16,
CUBIC_TO, 6, 10.48f, 10.48f, 6, 16, 6,
CUBIC_TO, 19.02f, 6, 21.72f, 7.34f, 23.55f, 9.45f,
LINE_TO, 23.55f, 9.45f,
LINE_TO, 19, 14,
LINE_TO, 25.8f, 14,
LINE_TO, 28.83f, 14,
LINE_TO, 30, 14,
LINE_TO, 30, 3,
LINE_TO, 25.67f, 7.33f,
CUBIC_TO, 23.3f, 4.67f, 19.85f, 3, 16, 3,
CUBIC_TO, 8.82f, 3, 3, 8.82f, 3, 16,
CUBIC_TO, 3, 23.18f, 8.82f, 29, 16, 29,
CUBIC_TO, 21.27f, 29, 25.8f, 25.86f, 27.84f, 21.34f,
CUBIC_TO, 27.96f, 21.13f, 28.03f, 20.88f, 28.03f, 20.61f,
CUBIC_TO, 28.03f, 19.78f, 27.36f, 19.11f, 26.53f, 19.11f,
CUBIC_TO, 25.87f, 19.11f, 25.3f, 19.55f, 25.1f, 20.15f,
CLOSE,
END
)
ICON_TEMPLATE(MIXED_CONTENT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 26, 4,
LINE_TO, 10, 11.27f,
LINE_TO, 10, 22.18f,
CUBIC_TO, 10, 32.27f, 16.83f, 41.71f, 26, 44,
CUBIC_TO, 35.17f, 41.71f, 42, 32.27f, 42, 22.18f,
LINE_TO, 42, 11.27f,
LINE_TO, 26, 4,
LINE_TO, 26, 4,
CLOSE,
MOVE_TO, 26, 8,
LINE_TO, 39, 14,
LINE_TO, 39, 22.11f,
CUBIC_TO, 39, 29.93f, 33.34f, 38.22f, 26, 40,
LINE_TO, 26, 8,
CLOSE,
END
)
ICON_TEMPLATE(MENU_CHECK, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 5, 18.78f,
R_LINE_TO, 2.53f, -2.57f,
R_LINE_TO, 4.48f, 4.63f,
LINE_TO, 25.48f, 7,
LINE_TO, 28, 9.59f,
LINE_TO, 12.02f, 26,
LINE_TO, 5, 18.78f,
CLOSE,
END
)
ICON_TEMPLATE(WARNING, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 2, 42,
R_H_LINE_TO, 44,
LINE_TO, 24, 4,
LINE_TO, 2, 42,
CLOSE,
// Divergence from ic_warning: white fill on the ! portion.
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 26, 36,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
R_H_LINE_TO, -4,
R_V_LINE_TO, -8,
R_H_LINE_TO, 4,
R_V_LINE_TO, 8,
CLOSE,
END
)
ICON_TEMPLATE(MENU_RADIO_EMPTY, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
CIRCLE, 16, 16, 14,
CIRCLE, 16, 16, 11,
END
)
ICON_TEMPLATE(MY_LOCATION, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 24, 16,
R_CUBIC_TO, -4.42f, 0, -8, 3.58f, -8, 8,
R_CUBIC_TO, 0, 4.42f, 3.58f, 8, 8, 8,
R_CUBIC_TO, 4.42f, 0, 8, -3.58f, 8, -8,
R_CUBIC_TO, 0, -4.42f, -3.58f, -8, -8, -8,
CLOSE,
R_MOVE_TO, 17.88f, 6,
CUBIC_TO, 40.96f, 13.66f, 34.34f, 7.04f, 26, 6.12f,
V_LINE_TO, 2,
R_H_LINE_TO, -4,
R_V_LINE_TO, 4.12f,
CUBIC_TO, 13.66f, 7.04f, 7.04f, 13.66f, 6.12f, 22,
H_LINE_TO, 2,
R_V_LINE_TO, 4,
R_H_LINE_TO, 4.12f,
R_CUBIC_TO, 0.92f, 8.34f, 7.54f, 14.96f, 15.88f, 15.88f,
V_LINE_TO, 46,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4.12f,
R_CUBIC_TO, 8.34f, -0.92f, 14.96f, -7.54f, 15.88f, -15.88f,
H_LINE_TO, 46,
R_V_LINE_TO, -4,
R_H_LINE_TO, -4.12f,
CLOSE,
MOVE_TO, 24, 38,
R_CUBIC_TO, -7.73f, 0, -14, -6.27f, -14, -14,
R_CUBIC_TO, 0, -7.73f, 6.27f, -14, 14, -14,
R_CUBIC_TO, 7.73f, 0, 14, 6.27f, 14, 14,
R_CUBIC_TO, 0, 7.73f, -6.27f, 14, -14, 14,
CLOSE,
END
)
ICON_TEMPLATE(ZOOM_MINUS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 32.15f, 30.43f,
CUBIC_TO, 34.57f, 27.62f, 36.02f, 23.98f, 36.02f, 20.01f,
CUBIC_TO, 36.02f, 11.17f, 28.85f, 4, 20.01f, 4,
CUBIC_TO, 11.17f, 4, 4, 11.17f, 4, 20.01f,
CUBIC_TO, 4, 28.85f, 11.17f, 36.02f, 20.01f, 36.02f,
CUBIC_TO, 23.98f, 36.02f, 27.62f, 34.57f, 30.43f, 32.15f,
LINE_TO, 31.09f, 32.84f,
LINE_TO, 31.09f, 34.79f,
LINE_TO, 40.33f, 44,
LINE_TO, 44, 40.33f,
LINE_TO, 34.79f, 31.09f,
LINE_TO, 32.84f, 31.09f,
LINE_TO, 32.15f, 30.43f,
CLOSE,
MOVE_TO, 20, 32,
CUBIC_TO, 13.36f, 32, 8, 26.64f, 8, 20,
CUBIC_TO, 8, 13.36f, 13.36f, 8, 20, 8,
CUBIC_TO, 26.64f, 8, 32, 13.36f, 32, 20,
CUBIC_TO, 32, 26.64f, 26.64f, 32, 20, 32,
LINE_TO, 20, 32,
CLOSE,
MOVE_TO, 13, 21.4f,
LINE_TO, 13, 18.6f,
LINE_TO, 27, 18.6f,
LINE_TO, 27, 21.4f,
LINE_TO, 13, 21.4f,
CLOSE,
END
)
ICON_TEMPLATE(FOLDER_SUPERVISED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 4.8f, 5,
CUBIC_TO, 3.26f, 5, 2.01f, 6.29f, 2.01f, 7.88f,
LINE_TO, 2, 25.13f,
CUBIC_TO, 2, 26.71f, 3.26f, 28, 4.8f, 28,
LINE_TO, 27.2f, 28,
CUBIC_TO, 28.74f, 28, 30, 26.71f, 30, 25.13f,
LINE_TO, 30, 10.75f,
CUBIC_TO, 30, 9.17f, 28.54f, 8, 27, 8,
LINE_TO, 16, 8,
LINE_TO, 13.2f, 5,
LINE_TO, 4.8f, 5,
CLOSE,
MOVE_TO, 16, 15,
CUBIC_TO, 17.38f, 15, 18.5f, 13.88f, 18.5f, 12.5f,
CUBIC_TO, 18.5f, 11.12f, 17.38f, 10, 16, 10,
CUBIC_TO, 14.62f, 10, 13.5f, 11.12f, 13.5f, 12.5f,
CUBIC_TO, 13.5f, 13.88f, 14.62f, 15, 16, 15,
CLOSE,
MOVE_TO, 17, 22.11f,
CUBIC_TO, 18.07f, 22.35f, 19, 22.94f, 19, 23.66f,
LINE_TO, 19, 25.38f,
CUBIC_TO, 20.16f, 24.88f, 21, 24.11f, 21, 23.21f,
LINE_TO, 21, 18.77f,
CUBIC_TO, 21, 17.2f, 18.37f, 16, 16, 16,
CUBIC_TO, 13.63f, 16, 11, 17.2f, 11, 18.78f,
LINE_TO, 11, 23.22f,
CUBIC_TO, 11, 24.11f, 11.84f, 24.88f, 13, 25.39f,
CUBIC_TO, 13.89f, 25.77f, 14.97f, 26, 16, 26,
CUBIC_TO, 16.33f, 26, 16.67f, 25.97f, 17, 25.92f,
LINE_TO, 17, 23.92f,
CUBIC_TO, 16.67f, 23.97f, 16.33f, 24, 16, 24,
CUBIC_TO, 14.99f, 24, 13.93f, 23.78f, 13.05f, 23.4f,
CUBIC_TO, 13.3f, 22.59f, 14.71f, 22, 16, 22,
CUBIC_TO, 16.33f, 22, 16.67f, 22.04f, 17, 22.11f,
CLOSE,
MOVE_TO, 16, 21,
CUBIC_TO, 16.83f, 21, 17.5f, 20.33f, 17.5f, 19.5f,
CUBIC_TO, 17.5f, 18.67f, 16.83f, 18, 16, 18,
CUBIC_TO, 15.17f, 18, 14.5f, 18.67f, 14.5f, 19.5f,
CUBIC_TO, 14.5f, 20.33f, 15.17f, 21, 16, 21,
CLOSE,
END
)
ICON_TEMPLATE(PHOTO_CAMERA, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 24, 24, 6.4f,
MOVE_TO, 18, 4,
R_LINE_TO, -3.66f, 4,
H_LINE_TO, 8,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 24,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 32,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 12,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
R_H_LINE_TO, -6.34f,
LINE_TO, 30, 4,
H_LINE_TO, 18,
CLOSE,
CIRCLE, 24, 24, 10,
END
)
ICON_TEMPLATE(TAB_AUDIO_MUTING, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 6.5, 5.5,
R_LINE_TO, 19, 19,
R_LINE_TO, -1, 1,
R_LINE_TO, -7.5, -7.5,
R_V_LINE_TO, 7,
R_LINE_TO, -6, -6,
R_H_LINE_TO, -4,
R_V_LINE_TO, -6,
R_H_LINE_TO, 5,
R_LINE_TO, -6.5, -6.5,
CLOSE,
MOVE_TO, 14.5, 9.5,
R_LINE_TO, 2.5, 2.5,
R_V_LINE_TO, -5,
CLOSE,
MOVE_TO, 19, 14,
R_LINE_TO, 2, 2,
R_V_LINE_TO, -3,
R_H_LINE_TO, -2,
CLOSE,
MOVE_TO, 23, 12,
R_V_LINE_TO, 6,
R_LINE_TO, 2, 2,
R_V_LINE_TO, -9,
R_H_LINE_TO, -2,
CLOSE,
END
)
ICON_TEMPLATE(FIND_PREV, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_expand_less with rounded corners.
CANVAS_DIMENSIONS, 32,
// Hard clip at path points +- half the stroke.
CLIP, 7, 10, 18, 11,
STROKE, 3,
MOVE_TO, 8.5f, 19.5f,
R_LINE_TO, 7.5f, -8,
R_LINE_TO, 7.5f, 8,
END,
)
ICON_TEMPLATE(OMNIBOX_KEYWORD_SEARCH, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 21.5f, 14.94f,
R_CUBIC_TO, 0.31f, 0.27f, 0.5f, 0.65f, 0.5f, 1.06f,
R_CUBIC_TO, 0, 0.41f, -0.19f, 0.79f, -0.5f, 1.06f,
R_LINE_TO, -8.57f, 7.5f,
R_CUBIC_TO, -0.31f, 0.27f, -0.74f, 0.44f, -1.21f, 0.44f,
R_CUBIC_TO, -0.95f, 0, -1.71f, -0.67f, -1.71f, -1.5f,
R_CUBIC_TO, 0, -0.41f, 0.19f, -0.79f, 0.5f, -1.06f,
R_LINE_TO, 7.36f, -6.44f,
R_LINE_TO, -7.36f, -6.44f,
CUBIC_TO, 10.19f, 9.29f, 10, 8.91f, 10, 8.5f,
R_CUBIC_TO, 0, -0.83f, 0.77f, -1.5f, 1.71f, -1.5f,
R_CUBIC_TO, 0.47f, 0, 0.9f, 0.17f, 1.21f, 0.44f,
R_LINE_TO, 8.57f, 7.5f,
CLOSE,
END
)
ICON_TEMPLATE(FULLSCREEN, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 14, 28,
R_H_LINE_TO, -4,
R_V_LINE_TO, 10,
R_H_LINE_TO, 10,
R_V_LINE_TO, -4,
R_H_LINE_TO, -6,
R_V_LINE_TO, -6,
CLOSE,
R_MOVE_TO, -4, -8,
R_H_LINE_TO, 4,
R_V_LINE_TO, -6,
R_H_LINE_TO, 6,
R_V_LINE_TO, -4,
H_LINE_TO, 10,
R_V_LINE_TO, 10,
CLOSE,
R_MOVE_TO, 24, 14,
R_H_LINE_TO, -6,
R_V_LINE_TO, 4,
R_H_LINE_TO, 10,
V_LINE_TO, 28,
R_H_LINE_TO, -4,
R_V_LINE_TO, 6,
CLOSE,
R_MOVE_TO, -6, -24,
R_V_LINE_TO, 4,
R_H_LINE_TO, 6,
R_V_LINE_TO, 6,
R_H_LINE_TO, 4,
V_LINE_TO, 10,
H_LINE_TO, 28,
CLOSE,
END
)
ICON_TEMPLATE(ACCOUNT_BOX, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 6, 10,
R_V_LINE_TO, 28,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 28,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
V_LINE_TO, 10,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
H_LINE_TO, 10,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
CLOSE,
R_MOVE_TO, 24, 8,
R_CUBIC_TO, 0, 3.32f, -2.69f, 6, -6, 6,
R_CUBIC_TO, -3.31f, 0, -6, -2.68f, -6, -6,
R_CUBIC_TO, 0, -3.31f, 2.69f, -6, 6, -6,
R_CUBIC_TO, 3.31f, 0, 6, 2.69f, 6, 6,
CLOSE,
MOVE_TO, 12, 34,
R_CUBIC_TO, 0, -4, 8, -6.2f, 12, -6.2f,
CUBIC_TO, 28, 27.8f, 36, 30, 36, 34,
R_V_LINE_TO, 2,
H_LINE_TO, 12,
R_V_LINE_TO, -2,
CLOSE,
END
)
ICON_TEMPLATE(GLOBE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 24, 4,
CUBIC_TO, 12.95f, 4, 4, 12.95f, 4, 24,
CUBIC_TO, 4, 35.05f, 12.95f, 44, 24, 44,
CUBIC_TO, 35.05f, 44, 44, 35.05f, 44, 24,
CUBIC_TO, 44, 12.95f, 35.05f, 4, 24, 4,
LINE_TO, 24, 4,
CLOSE,
MOVE_TO, 32.51f, 36.76f,
LINE_TO, 32.51f, 32.89f,
CUBIC_TO, 32.51f, 31.8f, 31.4f, 30.67f, 30.32f, 30.67f,
CUBIC_TO, 30.32f, 29.58f, 29.21f, 28.44f, 28.14f, 28.44f,
LINE_TO, 23.76f, 28.44f,
CUBIC_TO, 23.22f, 28.44f, 22.68f, 28.73f, 22.26f, 29.15f,
LINE_TO, 19.38f, 26.22f,
LINE_TO, 19.38f, 25.11f,
CUBIC_TO, 19.38f, 24.5f, 19.87f, 24, 20.48f, 24,
LINE_TO, 21.57f, 24,
CUBIC_TO, 22.78f, 24, 23.76f, 23, 23.76f, 21.78f,
LINE_TO, 23.76f, 15.11f,
CUBIC_TO, 24.97f, 15.11f, 25.95f, 14.12f, 25.95f, 12.89f,
CUBIC_TO, 25.95f, 11.66f, 24.97f, 10.67f, 23.76f, 10.67f,
CUBIC_TO, 16.51f, 10.67f, 10.63f, 16.64f, 10.63f, 24,
CUBIC_TO, 10.63f, 25.23f, 11.61f, 26.22f, 12.82f, 26.22f,
LINE_TO, 15.01f, 26.22f,
LINE_TO, 21.57f, 32.89f,
LINE_TO, 21.57f, 36.22f,
CUBIC_TO, 21.57f, 36.84f, 22.06f, 37.33f, 22.67f, 37.33f,
LINE_TO, 23.76f, 37.33f,
LINE_TO, 23.76f, 39.56f,
CUBIC_TO, 15.3f, 39.56f, 8.44f, 32.59f, 8.44f, 24,
CUBIC_TO, 8.44f, 15.41f, 15.3f, 8.44f, 23.76f, 8.44f,
CUBIC_TO, 28.96f, 8.44f, 33.55f, 11.08f, 36.32f, 15.11f,
LINE_TO, 34.7f, 15.11f,
CUBIC_TO, 33.49f, 15.11f, 32.51f, 16.11f, 32.51f, 17.33f,
LINE_TO, 32.51f, 19.56f,
CUBIC_TO, 32.51f, 20.78f, 33.49f, 21.78f, 34.7f, 21.78f,
LINE_TO, 34.82f, 21.78f,
CUBIC_TO, 34.75f, 22.02f, 34.7f, 22.26f, 34.7f, 22.52f,
LINE_TO, 34.7f, 25.48f,
CUBIC_TO, 34.7f, 27.12f, 36.17f, 28.44f, 37.98f, 28.44f,
CUBIC_TO, 38.14f, 28.44f, 38.29f, 28.42f, 38.44f, 28.4f,
CUBIC_TO, 37.45f, 31.83f, 35.33f, 34.76f, 32.51f, 36.76f,
LINE_TO, 32.51f, 36.76f,
CLOSE,
END
)
ICON_TEMPLATE(CHECK_CIRCLE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 24, 24, 20,
MOVE_TO, 20, 34,
LINE_TO, 10, 24,
R_LINE_TO, 2.83f, -2.83f,
LINE_TO, 20, 28.34f,
R_LINE_TO, 15.17f, -15.17f,
LINE_TO, 38, 16,
LINE_TO, 20, 34,
END
)
ICON_TEMPLATE(OMNIBOX_STAR, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 13.27f, 12.67f,
LINE_TO, 5, 13.39f,
LINE_TO, 11.27f, 18.86f,
LINE_TO, 9.39f, 27,
LINE_TO, 16.5f, 22.68f,
LINE_TO, 23.61f, 27,
LINE_TO, 21.73f, 18.86f,
LINE_TO, 28, 13.39f,
LINE_TO, 19.73f, 12.67f,
LINE_TO, 16.5f, 5,
LINE_TO, 13.27f, 12.67f,
CLOSE,
END
)
ICON_TEMPLATE(TABLET, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 42, 8,
H_LINE_TO, 6,
R_CUBIC_TO, -2.21f, 0, -4, 1.79f, -4, 4,
R_V_LINE_TO, 24,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 36,
R_CUBIC_TO, 2.21f, 0, 3.98f, -1.79f, 3.98f, -4,
LINE_TO, 46, 12,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
CLOSE,
R_MOVE_TO, -4, 28,
H_LINE_TO, 10,
V_LINE_TO, 12,
R_H_LINE_TO, 28,
R_V_LINE_TO, 24,
CLOSE,
END
)
ICON_TEMPLATE(BROWSER_TOOLS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 16, 9,
CUBIC_TO, 17.66f, 9, 19, 7.66f, 19, 6,
CUBIC_TO, 19, 4.34f, 17.66f, 3, 16, 3,
CUBIC_TO, 14.34f, 3, 13, 4.34f, 13, 6,
CUBIC_TO, 13, 7.66f, 14.34f, 9, 16, 9,
CLOSE,
MOVE_TO, 16, 19,
CUBIC_TO, 17.66f, 19, 19, 17.66f, 19, 16,
CUBIC_TO, 19, 14.34f, 17.66f, 13, 16, 13,
CUBIC_TO, 14.34f, 13, 13, 14.34f, 13, 16,
CUBIC_TO, 13, 17.66f, 14.34f, 19, 16, 19,
CLOSE,
MOVE_TO, 16, 29,
CUBIC_TO, 17.66f, 29, 19, 27.66f, 19, 26,
CUBIC_TO, 19, 24.34f, 17.66f, 23, 16, 23,
CUBIC_TO, 14.34f, 23, 13, 24.34f, 13, 26,
CUBIC_TO, 13, 27.66f, 14.34f, 29, 16, 29,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_MINIMIZE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 1, 20,
R_H_LINE_TO, 22,
R_V_LINE_TO, 3,
H_LINE_TO, 1,
CLOSE,
END
)
ICON_TEMPLATE(TAB_CLOSE_NORMAL, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The close "X" for a tab when not hovered/pressed.
CANVAS_DIMENSIONS, 32,
STROKE, 2.45f,
MOVE_TO, 10.25f, 10.25f,
R_LINE_TO, 11.5f, 11.5f,
MOVE_TO, 10.25f, 21.75f,
R_LINE_TO, 11.5f, -11.5f,
END)
ICON_TEMPLATE(INCOGNITO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 22.15f, 33.23f,
R_CUBIC_TO, 0, 3.06f, -2.48f, 5.54f, -5.54f, 5.54f,
R_CUBIC_TO, -3.06f, 0, -5.54f, -2.48f, -5.54f, -5.54f,
R_CUBIC_TO, 0, -3.06f, 2.48f, -5.54f, 5.54f, -5.54f,
R_CUBIC_TO, 3.06f, 0, 5.54f, 2.48f, 5.54f, 5.54f,
CLOSE,
R_MOVE_TO, -5.54f, 3.69f,
R_CUBIC_TO, 2.04f, 0, 3.69f, -1.65f, 3.69f, -3.69f,
R_CUBIC_TO, 0, -2.04f, -1.65f, -3.69f, -3.69f, -3.69f,
R_CUBIC_TO, -2.04f, 0, -3.69f, 1.65f, -3.69f, 3.69f,
R_CUBIC_TO, 0, 2.04f, 1.65f, 3.69f, 3.69f, 3.69f,
CLOSE,
MOVE_TO, 36.92f, 33.23f,
R_CUBIC_TO, 0, 3.06f, -2.48f, 5.54f, -5.54f, 5.54f,
R_CUBIC_TO, -3.06f, 0, -5.54f, -2.48f, -5.54f, -5.54f,
R_CUBIC_TO, 0, -3.06f, 2.48f, -5.54f, 5.54f, -5.54f,
R_CUBIC_TO, 3.06f, 0, 5.54f, 2.48f, 5.54f, 5.54f,
CLOSE,
R_MOVE_TO, -5.54f, -3.69f,
R_CUBIC_TO, -2.04f, 0, -3.69f, 1.66f, -3.69f, 3.69f,
R_CUBIC_TO, 0, 2.04f, 1.66f, 3.69f, 3.69f, 3.69f,
R_CUBIC_TO, 2.04f, 0, 3.69f, -1.66f, 3.69f, -3.69f,
R_CUBIC_TO, 0, -2.04f, -1.66f, -3.69f, -3.69f, -3.69f,
CLOSE,
NEW_PATH,
MOVE_TO, 24, 33.23f,
R_CUBIC_TO, 1.72f, 0, 3.15f, 1.18f, 3.56f, 2.77f,
R_CUBIC_TO, 0.08f, -0.3f, 0.13f, -0.6f, 0.13f, -0.92f,
R_CUBIC_TO, 0, -2.04f, -1.65f, -3.69f, -3.69f, -3.69f,
R_CUBIC_TO, -2.04f, 0, -3.69f, 1.65f, -3.69f, 3.69f,
R_CUBIC_TO, 0, 0.32f, 0.05f, 0.63f, 0.13f, 0.92f,
R_CUBIC_TO, 0.41f, -1.59f, 1.84f, -2.77f, 3.56f, -2.77f,
NEW_PATH,
MOVE_TO, 33.29f, 20,
R_LINE_TO, 0.06f, 0.18f,
LINE_TO, 40.62f, 24,
H_LINE_TO, 7.39f,
R_LINE_TO, 7.51f, -3.82f,
R_LINE_TO, 0.06f, -0.18f,
R_H_LINE_TO, 18.34f,
CLOSE,
R_MOVE_TO, -1.39f, -4,
R_LINE_TO, -2.36f, -6.77f,
LINE_TO, 24, 11.08f,
LINE_TO, 18.46f, 9.23f,
LINE_TO, 16.26f, 16,
R_H_LINE_TO, 15.64f,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_BACK, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 6.83f, 10,
H_LINE_TO, 23,
R_V_LINE_TO, 3,
H_LINE_TO, 6.83f,
LINE_TO, 15, 20.96f,
LINE_TO, 12.86f, 23,
LINE_TO, 4.93f, 15.25f,
LINE_TO, 1, 11.5f,
R_LINE_TO, 5, -4.77f,
LINE_TO, 12.86f, 0,
LINE_TO, 15, 2.05f,
LINE_TO, 6.83f, 10,
CLOSE,
END
)
ICON_TEMPLATE(BUSINESS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 24, 14,
V_LINE_TO, 6,
H_LINE_TO, 4,
R_V_LINE_TO, 36,
R_H_LINE_TO, 40,
V_LINE_TO, 14,
H_LINE_TO, 24,
CLOSE,
MOVE_TO, 12, 38,
H_LINE_TO, 8,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
H_LINE_TO, 8,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
H_LINE_TO, 8,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
H_LINE_TO, 8,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 8, 24,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 20, 24,
H_LINE_TO, 24,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 16,
R_V_LINE_TO, 20,
CLOSE,
R_MOVE_TO, -4, -16,
R_H_LINE_TO, -4,
R_V_LINE_TO, 4,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4,
CLOSE,
R_MOVE_TO, 0, 8,
R_H_LINE_TO, -4,
R_V_LINE_TO, 4,
R_H_LINE_TO, 4,
R_V_LINE_TO, -4,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_BACK, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 4.22f, 14.03f,
CUBIC_TO, 3.53f, 14.15f, 3, 14.77f, 3, 15.5f,
CUBIC_TO, 3, 16.25f, 3.53f, 16.86f, 4.24f, 16.98f,
LINE_TO, 4.02f, 17.19f,
LINE_TO, 14.36f, 27.51f,
CUBIC_TO, 14.65f, 27.81f, 15.05f, 28, 15.5f, 28,
CUBIC_TO, 16.33f, 28, 17, 27.33f, 17, 26.5f,
CUBIC_TO, 17, 26.05f, 16.8f, 25.65f, 16.49f, 25.38f,
LINE_TO, 16.55f, 25.32f,
LINE_TO, 8.22f, 17,
LINE_TO, 27.51f, 17,
CUBIC_TO, 28.33f, 17, 29, 16.33f, 29, 15.5f,
CUBIC_TO, 29, 14.67f, 28.33f, 14, 27.51f, 14,
LINE_TO, 8.2f, 14,
LINE_TO, 16.55f, 5.66f,
CUBIC_TO, 16.81f, 5.34f, 17, 4.94f, 17, 4.5f,
CUBIC_TO, 17, 3.68f, 16.33f, 3, 15.5f, 3,
CUBIC_TO, 15.06f, 3, 14.66f, 3.2f, 14.39f, 3.5f,
LINE_TO, 14.36f, 3.47f,
LINE_TO, 4, 13.81f,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_STOP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 16, 18.37f,
LINE_TO, 6.86f, 27.51f,
CUBIC_TO, 6.21f, 28.16f, 5.15f, 28.16f, 4.49f, 27.51f,
CUBIC_TO, 3.84f, 26.85f, 3.84f, 25.79f, 4.49f, 25.14f,
LINE_TO, 13.63f, 16,
LINE_TO, 4.49f, 6.86f,
CUBIC_TO, 3.84f, 6.21f, 3.84f, 5.15f, 4.49f, 4.49f,
CUBIC_TO, 5.15f, 3.84f, 6.21f, 3.84f, 6.86f, 4.49f,
LINE_TO, 16, 13.63f,
LINE_TO, 25.14f, 4.49f,
CUBIC_TO, 25.79f, 3.84f, 26.85f, 3.84f, 27.51f, 4.49f,
CUBIC_TO, 28.16f, 5.15f, 28.16f, 6.21f, 27.51f, 6.86f,
LINE_TO, 18.37f, 16,
LINE_TO, 27.51f, 25.14f,
CUBIC_TO, 28.16f, 25.79f, 28.16f, 26.85f, 27.51f, 27.51f,
CUBIC_TO, 26.85f, 28.16f, 25.79f, 28.16f, 25.14f, 27.51f,
CLOSE,
END
)
ICON_TEMPLATE(CREDIT_CARD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 27, 5,
H_LINE_TO, 5,
CUBIC_TO, 3.25f, 5, 2.01f, 6.22f, 2, 8,
R_V_LINE_TO, 16,
R_CUBIC_TO, 0, 1.78f, 1.25f, 3, 3, 3,
R_H_LINE_TO, 22,
R_CUBIC_TO, 1.75f, 0, 3, -1.22f, 3, -3,
V_LINE_TO, 8,
R_CUBIC_TO, 0, -1.78f, -1.25f, -3, -3, -3,
CLOSE,
R_MOVE_TO, 0, 19,
H_LINE_TO, 5,
R_V_LINE_TO, -8,
R_H_LINE_TO, 22,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 0, -13,
H_LINE_TO, 5,
V_LINE_TO, 8,
R_H_LINE_TO, 22,
R_V_LINE_TO, 3,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_HTTP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 4, 2,
LINE_TO, 4, 14,
LINE_TO, 12, 14,
LINE_TO, 12, 5,
LINE_TO, 9, 2,
LINE_TO, 4, 2,
CLOSE,
MOVE_TO, 9, 5,
LINE_TO, 9, 3.25f,
LINE_TO, 10.75f, 5,
LINE_TO, 9, 5,
CLOSE,
MOVE_TO, 5, 13,
LINE_TO, 5, 3,
LINE_TO, 8, 3,
LINE_TO, 8, 6,
LINE_TO, 11, 6,
LINE_TO, 11, 13,
LINE_TO, 5, 13,
CLOSE,
END
)
ICON_TEMPLATE(MIDI, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 33, 31,
LINE_TO, 33, 41,
LINE_TO, 29, 41,
LINE_TO, 29, 31,
CUBIC_TO, 27.9f, 31, 27, 30.1f, 27, 29,
LINE_TO, 27, 7,
LINE_TO, 35, 7,
LINE_TO, 35, 29,
CUBIC_TO, 35, 30.1f, 34.1f, 31, 33, 31,
CLOSE,
MOVE_TO, 19, 31,
LINE_TO, 19, 41,
LINE_TO, 15, 41,
LINE_TO, 15, 31,
CUBIC_TO, 13.9f, 31, 13, 30.1f, 13, 29,
LINE_TO, 13, 7,
LINE_TO, 21, 7,
LINE_TO, 21, 29,
CUBIC_TO, 21, 30.1f, 20.1f, 31, 19, 31,
CLOSE,
MOVE_TO, 40, 4,
LINE_TO, 8, 4,
CUBIC_TO, 5.8f, 4, 4, 5.8f, 4, 8,
LINE_TO, 4, 40,
CUBIC_TO, 4, 42.2f, 5.8f, 44, 8, 44,
LINE_TO, 40, 44,
CUBIC_TO, 42.2f, 44, 44, 42.2f, 44, 40,
LINE_TO, 44, 8,
CUBIC_TO, 44, 5.8f, 42.2f, 4, 40, 4,
CLOSE,
MOVE_TO, 7, 7,
LINE_TO, 41, 7,
LINE_TO, 41, 41,
LINE_TO, 7, 41,
LINE_TO, 7, 7,
CLOSE,
END
)
ICON_TEMPLATE(ERROR_CIRCLE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CIRCLE, 24, 24, 20,
MOVE_TO, 26, 34,
R_H_LINE_TO, -4,
R_V_LINE_TO, -4,
R_H_LINE_TO, 4,
R_V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 0, -8,
R_H_LINE_TO, -4,
V_LINE_TO, 14,
R_H_LINE_TO, 4,
R_V_LINE_TO, 12,
CLOSE,
END
)
ICON_TEMPLATE(WARNING_BADGE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_MODE_CLEAR,
MOVE_TO, 32, 32,
LINE_TO, 16, 32,
LINE_TO, 16, 18,
CUBIC_TO, 16, 16.9f, 16.9f, 16, 18, 16,
LINE_TO, 32, 16,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xDB, 0x44, 0x37,
MOVE_TO, 30, 32,
LINE_TO, 20, 32,
CUBIC_TO, 18.9f, 32, 18, 31.1f, 18, 30,
LINE_TO, 18, 20,
CUBIC_TO, 18, 18.9f, 18.9f, 18, 20, 18,
LINE_TO, 30, 18,
CUBIC_TO, 31.1f, 18, 32, 18.9f, 32, 20,
LINE_TO, 32, 30,
CUBIC_TO, 32, 31.1f, 31.1f, 32, 30, 32,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 24, 21,
LINE_TO, 26, 21,
LINE_TO, 26, 26,
LINE_TO, 24, 26,
CLOSE,
MOVE_TO, 24, 27,
LINE_TO, 26, 27,
LINE_TO, 26, 29,
LINE_TO, 24, 29,
CLOSE,
END
)
ICON_TEMPLATE(FILE_DOWNLOAD_INCOGNITO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 80,
MOVE_TO, 64, 30,
LINE_TO, 51, 30,
LINE_TO, 51, 10,
LINE_TO, 30, 10,
LINE_TO, 30, 30,
LINE_TO, 17, 30,
LINE_TO, 41, 54,
CLOSE,
MOVE_TO, 51, 67,
LINE_TO, 17, 67,
LINE_TO, 17, 60,
LINE_TO, 51, 60,
CLOSE,
ROUND_RECT, 54, 54, 26, 26, 2,
MOVE_TO, 66, 72,
CUBIC_TO, 66, 73.66f, 64.66f, 75, 63, 75,
CUBIC_TO, 61.34f, 75, 60, 73.66f, 60, 72,
CUBIC_TO, 60, 70.34f, 61.34f, 69, 63, 69,
CUBIC_TO, 64.66f, 69, 66, 70.34f, 66, 72,
CLOSE,
MOVE_TO, 63, 74,
CUBIC_TO, 64.1f, 74, 65, 73.1f, 65, 72,
CUBIC_TO, 65, 70.9f, 64.1f, 70, 63, 70,
CUBIC_TO, 61.9f, 70, 61, 70.9f, 61, 72,
CUBIC_TO, 61, 73.1f, 61.9f, 74, 63, 74,
CLOSE,
MOVE_TO, 74, 72,
CUBIC_TO, 74, 73.66f, 72.66f, 75, 71, 75,
CUBIC_TO, 69.34f, 75, 68, 73.66f, 68, 72,
CUBIC_TO, 68, 70.34f, 69.34f, 69, 71, 69,
CUBIC_TO, 72.66f, 69, 74, 70.34f, 74, 72,
CLOSE,
MOVE_TO, 71, 70,
CUBIC_TO, 69.9f, 70, 69, 70.89f, 69, 72,
CUBIC_TO, 69, 73.1f, 69.89f, 74, 71, 74,
CUBIC_TO, 72.1f, 74, 73, 73.11f, 73, 72,
CUBIC_TO, 73, 70.9f, 72.11f, 70, 71, 70,
CLOSE,
MOVE_TO, 67, 72,
CUBIC_TO, 67.93f, 72, 68.71f, 72.64f, 69, 73.5f,
CUBIC_TO, 68.97f, 73.34f, 69, 73.17f, 69, 73,
CUBIC_TO, 69, 71.9f, 68.1f, 71, 67, 71,
CUBIC_TO, 65.9f, 71, 65, 71.9f, 65, 73,
CUBIC_TO, 65, 73.17f, 65.03f, 73.34f, 65, 73.5f,
CUBIC_TO, 65.29f, 72.64f, 66.07f, 72, 67, 72,
CLOSE,
MOVE_TO, 71.33f, 63,
LINE_TO, 70, 59,
LINE_TO, 67, 60,
LINE_TO, 64, 59,
LINE_TO, 62.67f, 63,
LINE_TO, 71.33f, 63,
CLOSE,
MOVE_TO, 62, 65,
LINE_TO, 58, 67,
LINE_TO, 76, 67,
LINE_TO, 72, 65,
CLOSE,
END
)
ICON_TEMPLATE(TAB_MEDIA_RECORDING, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0xC5, 0x39, 0x29,
MOVE_TO, 16, 28,
R_CUBIC_TO, 6.63f, 0, 12, -5.37f, 12, -12,
CUBIC_TO, 28, 9.37f, 22.63f, 4, 16, 4,
CUBIC_TO, 9.37f, 4, 4, 9.37f, 4, 16,
R_CUBIC_TO, 0, 6.63f, 5.37f, 12, 12, 12,
CLOSE,
R_MOVE_TO, 0, -2,
R_CUBIC_TO, 5.52f, 0, 10, -4.48f, 10, -10,
CUBIC_TO, 26, 10.48f, 21.52f, 6, 16, 6,
CUBIC_TO, 10.48f, 6, 6, 10.48f, 6, 16,
R_CUBIC_TO, 0, 5.52f, 4.48f, 10, 10, 10,
CLOSE,
R_MOVE_TO, 0, -2,
R_CUBIC_TO, 4.42f, 0, 8, -3.58f, 8, -8,
R_CUBIC_TO, 0, -4.42f, -3.58f, -8, -8, -8,
R_CUBIC_TO, -4.42f, 0, -8, 3.58f, -8, 8,
R_CUBIC_TO, 0, 4.42f, 3.58f, 8, 8, 8,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_LEFT_SNAPPED, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 15, 2.05f,
LINE_TO, 5.29f, 11.5f,
LINE_TO, 15, 20.96f,
LINE_TO, 12.86f, 23,
LINE_TO, 4.93f, 15.25f,
LINE_TO, 1, 11.5f,
R_LINE_TO, 5, -4.77f,
LINE_TO, 12.86f, 0,
LINE_TO, 15, 2.05f,
CLOSE,
END
)
ICON_TEMPLATE(SUBMENU_ARROW, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
FLIPS_IN_RTL,
MOVE_TO, 3, 16,
R_LINE_TO, 11, -8,
LINE_TO, 3, 0,
R_V_LINE_TO, 16,
CLOSE,
END
)
ICON_TEMPLATE(PAINTBRUSH, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 19.08f, 26.09f,
LINE_TO, 27.77f, 34.8f,
LINE_TO, 30.66f, 31.9f,
CUBIC_TO, 31.46f, 31.09f, 30.66f, 28.99f, 30.66f, 28.99f,
LINE_TO, 29.22f, 24.63f,
CUBIC_TO, 28.85f, 23.54f, 28.78f, 22.17f, 29.22f, 21.73f,
CUBIC_TO, 33.56f, 17.37f, 39.35f, 14.47f, 40.8f, 13.01f,
CUBIC_TO, 42.4f, 11.41f, 42.4f, 8.81f, 40.8f, 7.2f,
CUBIC_TO, 39.2f, 5.6f, 36.61f, 5.6f, 35.01f, 7.2f,
CUBIC_TO, 33.56f, 8.66f, 30.66f, 14.47f, 26.32f, 18.82f,
CUBIC_TO, 25.89f, 19.26f, 24.51f, 19.19f, 23.42f, 18.82f,
LINE_TO, 19.08f, 17.37f,
CUBIC_TO, 19.08f, 17.37f, 16.98f, 16.57f, 16.19f, 17.37f,
LINE_TO, 13.29f, 20.28f,
LINE_TO, 19.08f, 26.09f,
LINE_TO, 19.08f, 26.09f,
CLOSE,
MOVE_TO, 39.35f, 8.66f,
CUBIC_TO, 40.15f, 9.46f, 40.15f, 10.77f, 39.35f, 11.57f,
CUBIC_TO, 38.55f, 12.37f, 37.25f, 12.37f, 36.45f, 11.57f,
CUBIC_TO, 35.65f, 10.77f, 35.65f, 9.46f, 36.45f, 8.66f,
CUBIC_TO, 37.25f, 7.86f, 38.55f, 7.86f, 39.35f, 8.66f,
LINE_TO, 39.35f, 8.66f,
CLOSE,
MOVE_TO, 13.8f, 35.83f,
LINE_TO, 17.9f, 35.83f,
LINE_TO, 17.9f, 39.94f,
LINE_TO, 19.95f, 42,
LINE_TO, 26.11f, 35.83f,
LINE_TO, 11.75f, 21.43f,
LINE_TO, 5.6f, 27.6f,
LINE_TO, 13.8f, 35.83f,
LINE_TO, 13.8f, 35.83f,
CLOSE,
END
)
ICON_TEMPLATE(CHROME_PRODUCT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 12, 7.5f,
R_H_LINE_TO, 8.9f,
CUBIC_TO, 19.3f, 4.2f, 15.9f, 2, 12, 2,
CUBIC_TO, 8.9f, 2, 6.1f, 3.4f, 4.3f, 5.6f,
R_LINE_TO, 3.3f, 5.7f,
R_CUBIC_TO, 0.3f, -2.1f, 2.2f, -3.8f, 4.4f, -3.8f,
CLOSE,
R_MOVE_TO, 0, 9,
R_CUBIC_TO, -1.7f, 0, -3.1f, -0.9f, -3.9f, -2.3f,
LINE_TO, 3.6f, 6.5f,
CUBIC_TO, 2.6f, 8.1f, 2, 10, 2, 12,
R_CUBIC_TO, 0, 5, 3.6f, 9.1f, 8.4f, 9.9f,
R_LINE_TO, 3.3f, -5.7f,
R_CUBIC_TO, -0.6f, 0.2f, -1.1f, 0.3f, -1.7f, 0.3f,
CLOSE,
R_MOVE_TO, 4.5f, -4.5f,
R_CUBIC_TO, 0, 0.8f, -0.2f, 1.6f, -0.6f, 2.2f,
LINE_TO, 11.4f, 22,
R_H_LINE_TO, 0.6f,
R_CUBIC_TO, 5.5f, 0, 10, -4.5f, 10, -10,
R_CUBIC_TO, 0, -1.2f, -0.2f, -2.4f, -0.6f, -3.5f,
R_H_LINE_TO, -6.6f,
R_CUBIC_TO, 1, 0.8f, 1.7f, 2.1f, 1.7f, 3.5f,
CLOSE,
CIRCLE, 12, 12, 3.5,
END
)
ICON_TEMPLATE(NOTIFICATIONS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 24, 44,
R_CUBIC_TO, 2.21f, 0, 4, -1.49f, 4, -4,
R_H_LINE_TO, -8,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
CLOSE,
R_MOVE_TO, 12, -12,
V_LINE_TO, 22,
R_CUBIC_TO, 0, -6.15f, -3.27f, -11.28f, -9, -12.64f,
V_LINE_TO, 8,
R_CUBIC_TO, 0, -1.66f, -1.34f, -3, -3, -3,
R_CUBIC_TO, -1.66f, 0, -3, 1.34f, -3, 3,
R_V_LINE_TO, 1.36f,
R_CUBIC_TO, -5.73f, 1.36f, -9, 6.49f, -9, 12.64f,
R_V_LINE_TO, 10,
R_LINE_TO, -4, 4,
R_V_LINE_TO, 2,
R_H_LINE_TO, 32,
R_V_LINE_TO, -2,
R_LINE_TO, -4, -4,
END
)
ICON_TEMPLATE(TAB_AUDIO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 17, 7,
R_V_LINE_TO, 18,
R_LINE_TO, -6, -6,
R_H_LINE_TO, -4,
R_V_LINE_TO, -6,
R_H_LINE_TO, 4,
CLOSE,
MOVE_TO, 19, 13,
R_V_LINE_TO, 6,
R_H_LINE_TO, 2,
R_V_LINE_TO, -6,
CLOSE,
MOVE_TO, 23, 11,
R_V_LINE_TO, 10,
R_H_LINE_TO, 2,
R_V_LINE_TO, -10,
CLOSE,
END
)
ICON_TEMPLATE(APPS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 8, 16,
R_H_LINE_TO, 8,
V_LINE_TO, 8,
H_LINE_TO, 8,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 12, 24,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, -8,
R_V_LINE_TO, 8,
CLOSE,
MOVE_TO, 8, 40,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
H_LINE_TO, 8,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 0, -12,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
H_LINE_TO, 8,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 12, 0,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, -8,
R_V_LINE_TO, 8,
CLOSE,
MOVE_TO, 32, 8,
R_V_LINE_TO, 8,
R_H_LINE_TO, 8,
V_LINE_TO, 8,
R_H_LINE_TO, -8,
CLOSE,
R_MOVE_TO, -12, 8,
R_H_LINE_TO, 8,
V_LINE_TO, 8,
R_H_LINE_TO, -8,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 12, 12,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, -8,
R_V_LINE_TO, 8,
CLOSE,
R_MOVE_TO, 0, 12,
R_H_LINE_TO, 8,
R_V_LINE_TO, -8,
R_H_LINE_TO, -8,
R_V_LINE_TO, 8,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_SEARCH, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 20.29f, 19.45f,
LINE_TO, 19.93f, 19.09f,
CUBIC_TO, 21.23f, 17.59f, 22.13f, 15.52f, 22.13f, 12.96f,
CUBIC_TO, 22.13f, 8.23f, 17.85f, 4, 13.07f, 4,
CUBIC_TO, 8.28f, 4, 4, 8.23f, 4, 12.96f,
CUBIC_TO, 4, 17.69f, 9.18f, 21.92f, 13.26f, 21.92f,
CUBIC_TO, 15.66f, 21.92f, 17.51f, 21.26f, 18.98f, 20.02f,
LINE_TO, 19.35f, 20.38f,
LINE_TO, 19.35f, 21.42f,
LINE_TO, 26.01f, 28,
LINE_TO, 28, 26.04f,
LINE_TO, 21.35f, 19.45f,
LINE_TO, 20.29f, 19.45f,
CLOSE,
MOVE_TO, 13.07f, 19.36f,
CUBIC_TO, 9.49f, 19.36f, 6.59f, 16.5f, 6.59f, 12.96f,
CUBIC_TO, 6.59f, 9.43f, 9.49f, 6.56f, 13.07f, 6.56f,
CUBIC_TO, 16.64f, 6.56f, 19.54f, 9.43f, 19.54f, 12.96f,
CUBIC_TO, 19.54f, 16.5f, 16.64f, 19.36f, 13.07f, 19.36f,
LINE_TO, 13.07f, 19.36f,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_FORWARD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
MOVE_TO, 27.78f, 14.03f,
CUBIC_TO, 28.47f, 14.15f, 29, 14.77f, 29, 15.5f,
CUBIC_TO, 29, 16.25f, 28.47f, 16.86f, 27.76f, 16.98f,
LINE_TO, 27.98f, 17.19f,
LINE_TO, 17.64f, 27.51f,
CUBIC_TO, 17.35f, 27.81f, 16.95f, 28, 16.5f, 28,
CUBIC_TO, 15.67f, 28, 15, 27.33f, 15, 26.5f,
CUBIC_TO, 15, 26.05f, 15.2f, 25.65f, 15.51f, 25.38f,
LINE_TO, 15.45f, 25.32f,
LINE_TO, 23.78f, 17,
LINE_TO, 4.49f, 17,
CUBIC_TO, 3.67f, 17, 3, 16.33f, 3, 15.5f,
CUBIC_TO, 3, 14.67f, 3.67f, 14, 4.49f, 14,
LINE_TO, 23.8f, 14,
LINE_TO, 15.45f, 5.66f,
CUBIC_TO, 15.19f, 5.34f, 15, 4.94f, 15, 4.5f,
CUBIC_TO, 15, 3.68f, 15.67f, 3, 16.5f, 3,
CUBIC_TO, 16.94f, 3, 17.34f, 3.2f, 17.61f, 3.5f,
LINE_TO, 17.64f, 3.47f,
LINE_TO, 28, 13.81f,
CLOSE,
END
)
ICON_TEMPLATE(EXTENSION, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

MOVE_TO, 41, 22,
R_H_LINE_TO, -3,
R_V_LINE_TO, -8,
R_CUBIC_TO, 0, -2.21f, -1.79f, -4, -4, -4,
R_H_LINE_TO, -8,
V_LINE_TO, 7,
R_CUBIC_TO, 0, -2.76f, -2.24f, -5, -5, -5,
R_CUBIC_TO, -2.76f, 0, -5, 2.24f, -5, 5,
R_V_LINE_TO, 3,
H_LINE_TO, 8,
R_CUBIC_TO, -2.21f, 0, -3.98f, 1.79f, -3.98f, 4,
R_LINE_TO, -0.01f, 7.6f,
H_LINE_TO, 7,
R_CUBIC_TO, 2.98f, 0, 5.4f, 2.42f, 5.4f, 5.4f,
R_CUBIC_TO, 0, 2.98f, -2.42f, 5.4f, -5.4f, 5.4f,
H_LINE_TO, 4.01f,
LINE_TO, 4, 40,
R_CUBIC_TO, 0, 2.21f, 1.79f, 4, 4, 4,
R_H_LINE_TO, 7.6f,
R_V_LINE_TO, -3,
R_CUBIC_TO, 0, -2.98f, 2.42f, -5.4f, 5.4f, -5.4f,
R_CUBIC_TO, 2.98f, 0, 5.4f, 2.42f, 5.4f, 5.4f,
R_V_LINE_TO, 3,
H_LINE_TO, 34,
R_CUBIC_TO, 2.21f, 0, 4, -1.79f, 4, -4,
R_V_LINE_TO, -8,
R_H_LINE_TO, 3,
R_CUBIC_TO, 2.76f, 0, 5, -2.24f, 5, -5,
R_CUBIC_TO, 0, -2.76f, -2.24f, -5, -5, -5,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 32,
PATH_COLOR_ARGB, 0xFF, 0x0B, 0x80, 0x43,
ROUND_RECT, 2, 2, 28, 28, 4,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 21, 25,
LINE_TO, 11, 25,
CUBIC_TO, 10, 25, 9, 24.01f, 9, 23.01f,
LINE_TO, 9, 15.06f,
CUBIC_TO, 9, 14.06f, 10, 12.97f, 11, 12.97f,
LINE_TO, 11, 10.98f,
CUBIC_TO, 11, 9.49f, 12.5f, 7, 16, 7,
CUBIC_TO, 19.5f, 7, 21, 9.49f, 21, 10.98f,
LINE_TO, 21, 12.97f,
CUBIC_TO, 22, 12.97f, 23, 14.06f, 23, 15.06f,
LINE_TO, 23, 23.01f,
CUBIC_TO, 23, 24.01f, 22, 25, 21, 25,
CLOSE,
MOVE_TO, 16, 16.05f,
CUBIC_TO, 14.9f, 16.05f, 14, 16.93f, 14, 18.01f,
CUBIC_TO, 14, 18.73f, 14.4f, 19.35f, 15, 19.69f,
LINE_TO, 15, 21.92f,
LINE_TO, 17, 21.92f,
LINE_TO, 17, 19.69f,
CUBIC_TO, 17.6f, 19.35f, 18, 18.73f, 18, 18.01f,
CUBIC_TO, 18, 16.93f, 17.1f, 16.05f, 16, 16.05f,
CLOSE,
MOVE_TO, 13, 11.91f,
LINE_TO, 13, 12.97f,
LINE_TO, 19, 12.97f,
CUBIC_TO, 19, 12.97f, 19, 11.95f, 19, 11.91f,
CUBIC_TO, 18.96f, 10.21f, 17.68f, 8.99f, 16, 8.99f,
CUBIC_TO, 14.29f, 8.99f, 13, 10.14f, 13, 11.91f,
CLOSE,
END
)

    case VectorIconId::VECTOR_ICON_NONE:
      NOTREACHED();
      return nullptr;
  }

  NOTREACHED();
  return nullptr;
}

const PathElement* GetPathForVectorIconAt1xScale(VectorIconId id) {
  switch (id) {
ICON_TEMPLATE(TAB_CLOSE_NORMAL, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The close "X" for a tab when not hovered/pressed, optimized for 1x scale
// factor devices.
CANVAS_DIMENSIONS, 16,
STROKE, 1.415f,
MOVE_TO, 4.75f, 4.75f,
R_LINE_TO, 6.5f, 6.5f,
MOVE_TO, 4.75f, 11.25f,
R_LINE_TO, 6.5f, -6.5f,
END)
ICON_TEMPLATE(BAR_CLOSE, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_close with rounded corners and optimized for 1x scale factor
// devices.
CANVAS_DIMENSIONS, 16,
STROKE, 1.85f,
MOVE_TO, 4, 4,
R_LINE_TO, 8, 8,
MOVE_TO, 4, 12,
R_LINE_TO, 8, -8,
END
)
ICON_TEMPLATE(OVERFLOW_CHEVRON, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 8,
MOVE_TO, 1.41f, 1.23f,
CUBIC_TO, 1.09f, 0.92f, 0.57f, 0.92f, 0.24f, 1.23f,
CUBIC_TO, -0.08f, 1.54f, -0.08f, 2.03f, 0.24f, 2.34f,
LINE_TO, 2, 4,
LINE_TO, 0.24f, 5.66f,
CUBIC_TO, -0.08f, 5.97f, -0.08f, 6.46f, 0.24f, 6.77f,
CUBIC_TO, 0.57f, 7.08f, 1.09f, 7.08f, 1.41f, 6.77f,
LINE_TO, 3.76f, 4.55f,
CUBIC_TO, 4.08f, 4.25f, 4.08f, 3.75f, 3.76f, 3.45f,
LINE_TO, 1.41f, 1.23f,
CLOSE,
MOVE_TO, 5.41f, 1.23f,
CUBIC_TO, 5.09f, 0.92f, 4.57f, 0.92f, 4.24f, 1.23f,
CUBIC_TO, 3.92f, 1.54f, 3.92f, 2.03f, 4.24f, 2.34f,
LINE_TO, 6, 4,
LINE_TO, 4.24f, 5.66f,
CUBIC_TO, 3.92f, 5.97f, 3.92f, 6.46f, 4.24f, 6.77f,
CUBIC_TO, 4.57f, 7.08f, 5.09f, 7.08f, 5.41f, 6.77f,
LINE_TO, 7.76f, 4.55f,
CUBIC_TO, 8.08f, 4.25f, 8.08f, 3.75f, 7.76f, 3.45f,
LINE_TO, 5.41f, 1.23f,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_RIGHT_SNAPPED, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 11, 6,
R_LINE_TO, -5.6f, 5,
LINE_TO, 4, 9.75f,
LINE_TO, 8.2f, 6,
LINE_TO, 4, 2.25f,
LINE_TO, 5.4f, 1,
R_LINE_TO, 4.9f, 4.38f,
LINE_TO, 11, 6,
CLOSE,
END
)
ICON_TEMPLATE(FILE_DOWNLOAD_INCOGNITO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 40,
MOVE_TO, 33, 15,
LINE_TO, 26, 15,
LINE_TO, 26, 5,
LINE_TO, 16, 5,
LINE_TO, 16, 15,
LINE_TO, 9, 15,
LINE_TO, 21, 27,
CLOSE,
MOVE_TO, 9, 30,
LINE_TO, 9, 34,
LINE_TO, 27, 34,
LINE_TO, 27, 30,
CLOSE,
ROUND_RECT, 27, 27, 13, 13, 1,
MOVE_TO, 31.5f, 38,
CUBIC_TO, 32.33f, 38, 33, 37.33f, 33, 36.5f,
CUBIC_TO, 33, 35.67f, 32.33f, 35, 31.5f, 35,
CUBIC_TO, 30.67f, 35, 30, 35.67f, 30, 36.5f,
CUBIC_TO, 30, 37.33f, 30.67f, 38, 31.5f, 38,
CLOSE,
MOVE_TO, 35.5f, 38,
CUBIC_TO, 36.33f, 38, 37, 37.33f, 37, 36.5f,
CUBIC_TO, 37, 35.67f, 36.33f, 35, 35.5f, 35,
CUBIC_TO, 34.67f, 35, 34, 35.67f, 34, 36.5f,
CUBIC_TO, 34, 37.33f, 34.67f, 38, 35.5f, 38,
CLOSE,
MOVE_TO, 34, 36,
CUBIC_TO, 34.47f, 36.4f, 34.85f, 36.66f, 35, 37,
CUBIC_TO, 34.99f, 36.94f, 35, 36.87f, 35, 37,
CUBIC_TO, 35, 36.36f, 34.55f, 36, 34, 36,
CUBIC_TO, 33.45f, 36, 33, 36.36f, 33, 37,
CUBIC_TO, 33, 36.87f, 33.01f, 36.94f, 33, 37,
CUBIC_TO, 33.15f, 36.66f, 33.53f, 36.4f, 34, 36,
CLOSE,
MOVE_TO, 35.67f, 32,
LINE_TO, 35, 30,
LINE_TO, 34, 31,
LINE_TO, 32, 30,
LINE_TO, 31.33f, 32,
CLOSE,
MOVE_TO, 31, 33,
LINE_TO, 29, 34,
LINE_TO, 38, 34,
LINE_TO, 36, 33,
CLOSE,
// Pupils.
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0x97, 0x97, 0x97,
ROUND_RECT, 31, 36, 1, 1, 0,
ROUND_RECT, 35, 36, 1, 1, 0,
END
)
ICON_TEMPLATE(TAB_AUDIO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
DISABLE_AA,
MOVE_TO, 9, 2,
R_V_LINE_TO, 11,
R_LINE_TO, -4, -4,
R_H_LINE_TO, -1,
R_V_LINE_TO, -3,
R_H_LINE_TO, 1,
CLOSE,
NEW_PATH,
STROKE, 1,
MOVE_TO, 10.5f, 6,
R_V_LINE_TO, 3,
MOVE_TO, 12.5f, 5,
R_V_LINE_TO, 5,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_CLOSE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 6, 4.59f,
LINE_TO, 2.46f, 1.05f,
LINE_TO, 1.05f, 2.46f,
LINE_TO, 4.59f, 6,
LINE_TO, 1.05f, 9.54f,
R_LINE_TO, 1.41f, 1.41f,
LINE_TO, 6, 7.41f,
R_LINE_TO, 3.54f, 3.54f,
R_LINE_TO, 1.41f, -1.41f,
LINE_TO, 7.41f, 6,
R_LINE_TO, 3.54f, -3.54f,
LINE_TO, 9.54f, 1.05f,
LINE_TO, 6, 4.59f,
CLOSE,
END
)
ICON_TEMPLATE(FOLDER_MANAGED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 2.5f, 2,
CUBIC_TO, 1.73f, 2, 1.01f, 3.15f, 1.01f, 3.94f,
LINE_TO, 1, 12.56f,
CUBIC_TO, 1, 13.35f, 1.63f, 14, 2.4f, 14,
LINE_TO, 13.6f, 14,
CUBIC_TO, 14.37f, 14, 15, 13.35f, 15, 12.56f,
LINE_TO, 15, 5.38f,
CUBIC_TO, 15, 4.58f, 14.27f, 4, 13.5f, 4,
LINE_TO, 9, 4,
LINE_TO, 7, 2,
LINE_TO, 2.5f, 2,
CLOSE,
MOVE_TO, 3, 5,
LINE_TO, 3, 12,
LINE_TO, 13, 12,
LINE_TO, 13, 7,
LINE_TO, 8, 7,
LINE_TO, 8, 5,
LINE_TO, 3, 5,
CLOSE,
MOVE_TO, 5, 11,
LINE_TO, 4, 11,
LINE_TO, 4, 10,
LINE_TO, 5, 10,
LINE_TO, 5, 11,
CLOSE,
MOVE_TO, 5, 9,
LINE_TO, 4, 9,
LINE_TO, 4, 8,
LINE_TO, 5, 8,
LINE_TO, 5, 9,
CLOSE,
MOVE_TO, 5, 7,
LINE_TO, 4, 7,
LINE_TO, 4, 6,
LINE_TO, 5, 6,
LINE_TO, 5, 7,
CLOSE,
MOVE_TO, 7, 11,
LINE_TO, 6, 11,
LINE_TO, 6, 10,
LINE_TO, 7, 10,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 7, 9,
LINE_TO, 6, 9,
LINE_TO, 6, 8,
LINE_TO, 7, 8,
LINE_TO, 7, 9,
CLOSE,
MOVE_TO, 7, 7,
LINE_TO, 6, 7,
LINE_TO, 6, 6,
LINE_TO, 7, 6,
LINE_TO, 7, 7,
CLOSE,
MOVE_TO, 12, 11,
LINE_TO, 8, 11,
LINE_TO, 8, 10,
LINE_TO, 9, 10,
LINE_TO, 9, 9,
LINE_TO, 8, 9,
LINE_TO, 8, 8,
LINE_TO, 12, 8,
LINE_TO, 12, 11,
CLOSE,
MOVE_TO, 10, 9,
LINE_TO, 10, 10,
LINE_TO, 11, 10,
LINE_TO, 11, 9,
LINE_TO, 10, 9,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_STAR, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 6.31f, 6.19f,
LINE_TO, 2, 6.58f,
LINE_TO, 5.27f, 9.56f,
LINE_TO, 4.29f, 14,
LINE_TO, 8, 11.65f,
LINE_TO, 11.71f, 14,
LINE_TO, 10.73f, 9.56f,
LINE_TO, 14, 6.58f,
LINE_TO, 9.69f, 6.19f,
LINE_TO, 8, 2,
LINE_TO, 6.31f, 6.19f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 4, 2,
LINE_TO, 4, 13,
LINE_TO, 12, 13,
LINE_TO, 12, 5,
LINE_TO, 9, 2,
CLOSE,
MOVE_TO, 9, 5,
LINE_TO, 9, 3.25f,
LINE_TO, 10.75f, 5,
CLOSE,
MOVE_TO, 5, 12,
LINE_TO, 5, 3,
LINE_TO, 8, 3,
LINE_TO, 8, 6,
LINE_TO, 11, 6,
LINE_TO, 11, 12,
CLOSE,
END
)
ICON_TEMPLATE(FIND_NEXT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_expand_more with rounded corners and optimized for 1x
// scale factor devices.
CANVAS_DIMENSIONS, 16,
STROKE, 1.765f,
MOVE_TO, 4, 6,
R_LINE_TO, 4, 4,
R_LINE_TO, 4, -4,
END,
)
ICON_TEMPLATE(FIND_PREV, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// A variant of ic_expand_less with rounded corners and optimized for 1x
// scale factor devices.
CANVAS_DIMENSIONS, 16,
STROKE, 1.765f,
MOVE_TO, 4, 10,
R_LINE_TO, 4, -4,
R_LINE_TO, 4, 4,
END,
)
ICON_TEMPLATE(MENU_CHECK, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 2, 9.22f,
R_LINE_TO, 1.36f, -1.38f,
R_LINE_TO, 2.4f, 2.48f,
R_LINE_TO, 7.2f, -7.4f,
R_LINE_TO, 1.35f, 1.39f,
R_LINE_TO, -8.55f, 8.78f,
LINE_TO, 2, 9.22f,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_BACK, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 9, 13.51f,
LINE_TO, 4.49f, 9,
LINE_TO, 14, 9,
CUBIC_TO, 14.55f, 9, 15, 8.55f, 15, 8,
CUBIC_TO, 15, 7.45f, 14.55f, 7, 14, 7,
LINE_TO, 4.49f, 7,
LINE_TO, 9, 2.49f,
CUBIC_TO, 8.97f, 2.28f, 9, 2.14f, 9, 2,
CUBIC_TO, 9, 1.45f, 8.55f, 1, 8, 1,
CUBIC_TO, 7.86f, 1, 7.72f, 1.03f, 7.59f, 1.09f,
LINE_TO, 7.51f, 1,
LINE_TO, 1, 7.51f,
CUBIC_TO, 1.03f, 7.72f, 1, 7.85f, 1, 8,
CUBIC_TO, 1, 8.15f, 1.03f, 8.28f, 1.09f, 8.41f,
LINE_TO, 1, 8.49f,
LINE_TO, 7.51f, 15,
CUBIC_TO, 7.72f, 14.97f, 7.86f, 15, 8, 15,
CUBIC_TO, 8.55f, 15, 9, 14.55f, 9, 14,
CUBIC_TO, 9, 13.86f, 8.97f, 13.72f, 8.91f, 13.59f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_INVALID, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
PATH_COLOR_ARGB, 0xFF, 0xC5, 0x39, 0x29,
ROUND_RECT, 1, 1, 14, 14, 2,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 4, 7.99f,
CUBIC_TO, 4, 7.44f, 4.45f, 7, 5, 7,
LINE_TO, 11, 7,
CUBIC_TO, 11.55f, 7, 12, 7.45f, 12, 7.99f,
LINE_TO, 12, 12.01f,
CUBIC_TO, 12, 12.56f, 11.55f, 13, 11, 13,
LINE_TO, 5, 13,
CUBIC_TO, 4.45f, 13, 4, 12.55f, 4, 12.01f,
LINE_TO, 4, 7.99f,
CLOSE,
MOVE_TO, 7, 9,
LINE_TO, 9, 9,
LINE_TO, 9, 11,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 6, 8,
LINE_TO, 7, 8,
LINE_TO, 7, 9,
LINE_TO, 6, 9,
CLOSE,
MOVE_TO, 9, 8,
LINE_TO, 10, 8,
LINE_TO, 10, 9,
LINE_TO, 9, 9,
CLOSE,
MOVE_TO, 9, 11,
LINE_TO, 10, 11,
LINE_TO, 10, 12,
LINE_TO, 9, 12,
CLOSE,
MOVE_TO, 6, 11,
LINE_TO, 7, 11,
LINE_TO, 7, 12,
LINE_TO, 6, 12,
CLOSE,
MOVE_TO, 5, 4,
LINE_TO, 6, 4,
LINE_TO, 6, 7,
LINE_TO, 5, 7,
CLOSE,
MOVE_TO, 10, 4,
LINE_TO, 11, 4,
LINE_TO, 11, 7,
LINE_TO, 10, 7,
CLOSE,
MOVE_TO, 6, 3,
LINE_TO, 10, 3,
LINE_TO, 10, 4,
LINE_TO, 6, 4,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0x66, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 5, 3, 1, 1, 0,
ROUND_RECT, 10, 3, 1, 1, 0,
NEW_PATH,
PATH_COLOR_ARGB, 0x7F, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 9, 4, 1, 1, 0,
ROUND_RECT, 6, 4, 1, 1, 0,
END
)
ICON_TEMPLATE(INCOGNITO, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 24,
MOVE_TO, 11, 17,
R_CUBIC_TO, 0, 1.66f, -1.34f, 3, -3, 3,
R_CUBIC_TO, -1.66f, 0, -3, -1.34f, -3, -3,
R_CUBIC_TO, 0, -1.66f, 1.34f, -3, 3, -3,
R_CUBIC_TO, 1.66f, 0, 3, 1.34f, 3, 3,
CLOSE,
R_MOVE_TO, -3, 2,
R_CUBIC_TO, 1.11f, 0, 2, -0.89f, 2, -2,
R_CUBIC_TO, 0, -1.11f, -0.89f, -2, -2, -2,
R_CUBIC_TO, -1.11f, 0, -2, 0.9f, -2, 2,
R_CUBIC_TO, 0, 1.1f, 0.9f, 2, 2, 2,
CLOSE,
MOVE_TO, 19, 17,
R_CUBIC_TO, 0, 1.66f, -1.34f, 3, -3, 3,
R_CUBIC_TO, -1.66f, 0, -3, -1.34f, -3, -3,
R_CUBIC_TO, 0, -1.66f, 1.34f, -3, 3, -3,
R_CUBIC_TO, 1.66f, 0, 3, 1.34f, 3, 3,
CLOSE,
R_MOVE_TO, -3, -2,
R_CUBIC_TO, -1.1f, 0, -2, 0.89f, -2, 2,
R_CUBIC_TO, 0, 1.11f, 0.89f, 2, 2, 2,
R_CUBIC_TO, 1.11f, 0, 2, -0.89f, 2, -2,
R_CUBIC_TO, 0, -1.1f, -0.89f, -2, -2, -2,
CLOSE,
NEW_PATH,
MOVE_TO, 12, 17,
R_CUBIC_TO, 0.93f, 0, 1.71f, 0.64f, 1.93f, 1.5f,
R_CUBIC_TO, 0.04f, -0.16f, 0.07f, -0.33f, 0.07f, -0.5f,
R_CUBIC_TO, 0, -1.1f, -0.9f, -2, -2, -2,
R_CUBIC_TO, -1.1f, 0, -2, 0.9f, -2, 2,
R_CUBIC_TO, 0, 0.17f, 0.03f, 0.34f, 0.07f, 0.5f,
R_CUBIC_TO, 0.22f, -0.86f, 1, -1.5f, 1.93f, -1.5f,
NEW_PATH,
MOVE_TO, 16.39f, 8,
LINE_TO, 15, 4,
R_LINE_TO, -3, 1,
R_LINE_TO, -3, -1,
R_LINE_TO, -1.3f, 4,
R_H_LINE_TO, 8.7f,
CLOSE,
R_MOVE_TO, -9.46f, 2,
LINE_TO, 3, 12,
R_H_LINE_TO, 18,
R_LINE_TO, -3.8f, -2,
H_LINE_TO, 6.93f,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_CALCULATOR, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 4, 5,
LINE_TO, 12, 5,
LINE_TO, 12, 7,
LINE_TO, 4, 7,
LINE_TO, 4, 5,
LINE_TO, 4, 5,
CLOSE,
MOVE_TO, 4, 9,
LINE_TO, 12, 9,
LINE_TO, 12, 11,
LINE_TO, 4, 11,
LINE_TO, 4, 9,
LINE_TO, 4, 9,
CLOSE,
END
)
ICON_TEMPLATE(OMNIBOX_EXTENSION_APP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 12.71f, 6.71f,
LINE_TO, 12.71f, 4.43f,
CUBIC_TO, 12.71f, 3.8f, 12.2f, 3.29f, 11.57f, 3.29f,
LINE_TO, 9.29f, 3.29f,
LINE_TO, 9.29f, 2.43f,
CUBIC_TO, 9.29f, 1.64f, 8.65f, 1, 7.86f, 1,
CUBIC_TO, 7.07f, 1, 6.43f, 1.64f, 6.43f, 2.43f,
LINE_TO, 6.43f, 3.29f,
LINE_TO, 4.14f, 3.29f,
CUBIC_TO, 3.51f, 3.29f, 3.01f, 3.8f, 3.01f, 4.43f,
LINE_TO, 3.01f, 6.6f,
LINE_TO, 3.86f, 6.6f,
CUBIC_TO, 4.71f, 6.6f, 5.4f, 7.29f, 5.4f, 8.14f,
CUBIC_TO, 5.4f, 8.99f, 4.71f, 9.69f, 3.86f, 9.69f,
LINE_TO, 3, 9.69f,
LINE_TO, 3, 11.86f,
CUBIC_TO, 3, 12.49f, 3.51f, 13, 4.14f, 13,
LINE_TO, 6.31f, 13,
LINE_TO, 6.31f, 12.14f,
CUBIC_TO, 6.31f, 11.29f, 7.01f, 10.6f, 7.86f, 10.6f,
CUBIC_TO, 8.71f, 10.6f, 9.4f, 11.29f, 9.4f, 12.14f,
LINE_TO, 9.4f, 13,
LINE_TO, 11.57f, 13,
CUBIC_TO, 12.2f, 13, 12.71f, 12.49f, 12.71f, 11.86f,
LINE_TO, 12.71f, 9.57f,
LINE_TO, 13.57f, 9.57f,
CUBIC_TO, 14.36f, 9.57f, 15, 8.93f, 15, 8.14f,
CUBIC_TO, 15, 7.35f, 14.36f, 6.71f, 13.57f, 6.71f,
LINE_TO, 12.71f, 6.71f,
CLOSE,
END
)
ICON_TEMPLATE(TAB_CLOSE_HOVERED_PRESSED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// The close "X" for a tab when hovered/pressed, optimized for 1x scale factor
// devices.
CANVAS_DIMENSIONS, 16,
CIRCLE, 8, 8, 7.05f,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
STROKE, 1.415f,
MOVE_TO, 4.75f, 4.75f,
R_LINE_TO, 6.5f, 6.5f,
MOVE_TO, 4.75f, 11.25f,
R_LINE_TO, 6.5f, -6.5f,
END)
ICON_TEMPLATE(FOLDER, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 2.5f, 2,
CUBIC_TO, 1.73f, 2, 1.01f, 3.15f, 1.01f, 3.94f,
LINE_TO, 1, 12.56f,
CUBIC_TO, 1, 13.35f, 1.63f, 14, 2.4f, 14,
LINE_TO, 13.6f, 14,
CUBIC_TO, 14.37f, 14, 15, 13.35f, 15, 12.56f,
LINE_TO, 15, 5.38f,
CUBIC_TO, 15, 4.58f, 14.27f, 4, 13.5f, 4,
LINE_TO, 9, 4,
LINE_TO, 7, 2,
LINE_TO, 2.5f, 2,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_FORWARD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 7, 13.51f,
LINE_TO, 11.51f, 9,
LINE_TO, 2, 9,
CUBIC_TO, 1.45f, 9, 1, 8.55f, 1, 8,
CUBIC_TO, 1, 7.45f, 1.45f, 7, 2, 7,
LINE_TO, 11.51f, 7,
LINE_TO, 7, 2.49f,
CUBIC_TO, 7.03f, 2.28f, 7, 2.14f, 7, 2,
CUBIC_TO, 7, 1.45f, 7.45f, 1, 8, 1,
CUBIC_TO, 8.14f, 1, 8.28f, 1.03f, 8.41f, 1.09f,
LINE_TO, 8.49f, 1,
LINE_TO, 15, 7.51f,
LINE_TO, 14.91f, 7.59f,
CUBIC_TO, 14.97f, 7.72f, 15, 7.85f, 15, 8,
CUBIC_TO, 15, 8.15f, 14.97f, 8.28f, 14.91f, 8.41f,
LINE_TO, 15, 8.49f,
LINE_TO, 8.49f, 15,
CUBIC_TO, 8.28f, 14.97f, 8.14f, 15, 8, 15,
CUBIC_TO, 7.45f, 15, 7, 14.55f, 7, 14,
CUBIC_TO, 7, 13.86f, 7.03f, 13.72f, 7.09f, 13.59f,
CLOSE,
END
)
ICON_TEMPLATE(SUBMENU_ARROW, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 8,
FLIPS_IN_RTL,
MOVE_TO, 2, 8,
R_LINE_TO, 5, -4,
R_LINE_TO, -5, -4,
R_V_LINE_TO, 8,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_RELOAD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 15, 1,
LINE_TO, 15, 7,
LINE_TO, 9, 7,
LINE_TO, 11.62f, 4.37f,
CUBIC_TO, 10.67f, 3.43f, 9.44f, 3, 8, 3,
CUBIC_TO, 5.09f, 3, 3, 5.1f, 3, 8,
CUBIC_TO, 3, 10.9f, 5.09f, 13, 8, 13,
CUBIC_TO, 10.3f, 13, 12.08f, 11.81f, 12.75f, 9.83f,
LINE_TO, 12.77f, 9.79f,
CUBIC_TO, 12.93f, 9.44f, 13.47f, 9.18f, 13.76f, 9.18f,
CUBIC_TO, 14.15f, 9.18f, 14.79f, 9.41f, 14.79f, 10.01f,
CUBIC_TO, 14.79f, 10.14f, 14.71f, 10.46f, 14.66f, 10.57f,
CUBIC_TO, 13.66f, 13.13f, 10.98f, 15, 8.03f, 15,
CUBIC_TO, 4.15f, 15, 1, 11.87f, 1, 8,
CUBIC_TO, 1, 4.13f, 4.15f, 1, 8.03f, 1,
CUBIC_TO, 9.96f, 1, 11.7f, 1.77f, 12.97f, 3.03f,
CLOSE,
END
)
ICON_TEMPLATE(TAB_AUDIO_MUTING, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
DISABLE_AA,
MOVE_TO, 3, 2,
R_LINE_TO, 10, 10,
R_V_LINE_TO, 2,
R_LINE_TO, -4, -4,
R_V_LINE_TO, 3,
R_LINE_TO, -4, -4,
R_H_LINE_TO, -1,
R_V_LINE_TO, -3,
R_H_LINE_TO, 1,
R_LINE_TO, -3, -3,
CLOSE,
NEW_PATH,
STROKE, 1,
MOVE_TO, 8.5f, 3,
R_V_LINE_TO, 2.5f,
MOVE_TO, 10.5f, 6,
R_V_LINE_TO, 1.5f,
MOVE_TO, 12.5f, 5,
R_V_LINE_TO, 4.5f,
END
)
ICON_TEMPLATE(BROWSER_TOOLS, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 7, 3.5f,
CUBIC_TO, 7, 2.67f, 7.67f, 2, 8.5f, 2,
CUBIC_TO, 9.33f, 2, 10, 2.67f, 10, 3.5f,
CUBIC_TO, 10, 4.33f, 9.33f, 5, 8.5f, 5,
CUBIC_TO, 7.67f, 5, 7, 4.33f, 7, 3.5f,
CLOSE,
MOVE_TO, 7, 8.5f,
CUBIC_TO, 7, 7.67f, 7.67f, 7, 8.5f, 7,
CUBIC_TO, 9.33f, 7, 10, 7.67f, 10, 8.5f,
CUBIC_TO, 10, 9.33f, 9.33f, 10, 8.5f, 10,
CUBIC_TO, 7.67f, 10, 7, 9.33f, 7, 8.5f,
CLOSE,
MOVE_TO, 7, 13.5f,
CUBIC_TO, 7, 12.67f, 7.67f, 12, 8.5f, 12,
CUBIC_TO, 9.33f, 12, 10, 12.67f, 10, 13.5f,
CUBIC_TO, 10, 14.33f, 9.33f, 15, 8.5f, 15,
CUBIC_TO, 7.67f, 15, 7, 14.33f, 7, 13.5f,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_RESTORE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 11, 8,
H_LINE_TO, 4,
V_LINE_TO, 1,
R_H_LINE_TO, 7,
R_V_LINE_TO, 7,
CLOSE,
MOVE_TO, 6, 6,
V_LINE_TO, 3,
R_H_LINE_TO, 3,
R_V_LINE_TO, 3,
H_LINE_TO, 6,
CLOSE,
MOVE_TO, 3, 3,
H_LINE_TO, 1,
R_V_LINE_TO, 8,
R_H_LINE_TO, 8,
V_LINE_TO, 9,
H_LINE_TO, 3,
V_LINE_TO, 3,
CLOSE,
END
)
ICON_TEMPLATE(CREDIT_CARD, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 13, 7,
V_LINE_TO, 5,
H_LINE_TO, 3,
R_V_LINE_TO, 2,
R_H_LINE_TO, 10,
CLOSE,
R_MOVE_TO, 0, 2,
R_V_LINE_TO, 3,
H_LINE_TO, 3,
V_LINE_TO, 9,
R_H_LINE_TO, 10,
CLOSE,
MOVE_TO, 1, 4.99f,
CUBIC_TO, 1, 3.89f, 1.9f, 3, 3.01f, 3,
R_H_LINE_TO, 9.99f,
CUBIC_TO, 14.1f, 3, 15, 3.9f, 15, 4.99f,
R_V_LINE_TO, 7.02f,
R_CUBIC_TO, 0, 1.1f, -0.9f, 1.99f, -2.01f, 1.99f,
H_LINE_TO, 3.01f,
CUBIC_TO, 1.9f, 14, 1, 13.1f, 1, 12.01f,
V_LINE_TO, 4.99f,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID_INVERT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 1, 1, 14, 14, 2,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0x0B, 0x80, 0x43,
MOVE_TO, 4, 7.99f,
CUBIC_TO, 4, 7.44f, 4.45f, 7, 5, 7,
LINE_TO, 11, 7,
CUBIC_TO, 11.55f, 7, 12, 7.45f, 12, 7.99f,
LINE_TO, 12, 12.01f,
CUBIC_TO, 12, 12.56f, 11.55f, 13, 11, 13,
LINE_TO, 5, 13,
CUBIC_TO, 4.45f, 13, 4, 12.55f, 4, 12.01f,
CLOSE,
MOVE_TO, 7, 9,
LINE_TO, 9, 9,
LINE_TO, 9, 11,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 5, 4,
LINE_TO, 6, 4,
LINE_TO, 6, 7,
LINE_TO, 5, 7,
CLOSE,
MOVE_TO, 10, 4,
LINE_TO, 11, 4,
LINE_TO, 11, 7,
LINE_TO, 10, 7,
CLOSE,
MOVE_TO, 6, 3,
LINE_TO, 10, 3,
LINE_TO, 10, 4,
LINE_TO, 6, 4,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0x66, 0x0B, 0x80, 0x43,
ROUND_RECT, 5, 3, 1, 1, 0,
ROUND_RECT, 10, 3, 1, 1, 0,
NEW_PATH,
PATH_COLOR_ARGB, 0x7F, 0x0B, 0x80, 0x43,
ROUND_RECT, 9, 4, 1, 1, 0,
ROUND_RECT, 6, 4, 1, 1, 0,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID_IN_CHIP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 4, 7.99f,
R_CUBIC_TO, 0, -0.55f, 0.45f, -0.99f, 1, -0.99f,
R_H_LINE_TO, 6.01f,
R_CUBIC_TO, 0.55f, 0, 1, 0.45f, 1, 0.99f,
R_V_LINE_TO, 4.02f,
R_CUBIC_TO, 0, 0.55f, -0.45f, 0.99f, -1, 0.99f,
H_LINE_TO, 5,
R_CUBIC_TO, -0.55f, 0, -1, -0.45f, -1, -0.99f,
V_LINE_TO, 7.99f,
CLOSE,
MOVE_TO, 7, 9,
R_H_LINE_TO, 2,
R_V_LINE_TO, 2,
H_LINE_TO, 7,
V_LINE_TO, 9,
CLOSE,
MOVE_TO, 5, 4,
R_H_LINE_TO, 1,
R_V_LINE_TO, 3,
H_LINE_TO, 5,
V_LINE_TO, 4,
CLOSE,
R_MOVE_TO, 5, 0,
R_H_LINE_TO, 1,
R_V_LINE_TO, 3,
R_H_LINE_TO, -1,
V_LINE_TO, 4,
CLOSE,
MOVE_TO, 6, 3,
R_H_LINE_TO, 4,
R_V_LINE_TO, 1,
H_LINE_TO, 6,
V_LINE_TO, 3,
CLOSE,
MOVE_TO, 5, 3,
R_H_LINE_TO, 1,
R_V_LINE_TO, 1,
H_LINE_TO, 5,
CLOSE,
MOVE_TO, 10, 3,
R_H_LINE_TO, 1,
R_V_LINE_TO, 1,
R_H_LINE_TO, -1,
CLOSE,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_VALID, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
PATH_COLOR_ARGB, 0xFF, 0x0B, 0x80, 0x43,
ROUND_RECT, 1, 1, 14, 14, 2,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
MOVE_TO, 4, 7.99f,
CUBIC_TO, 4, 7.44f, 4.45f, 7, 5, 7,
LINE_TO, 11, 7,
CUBIC_TO, 11.55f, 7, 12, 7.45f, 12, 7.99f,
LINE_TO, 12, 12.01f,
CUBIC_TO, 12, 12.56f, 11.55f, 13, 11, 13,
LINE_TO, 5, 13,
CUBIC_TO, 4.45f, 13, 4, 12.55f, 4, 12.01f,
CLOSE,
MOVE_TO, 7, 9,
LINE_TO, 9, 9,
LINE_TO, 9, 11,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 5, 4,
LINE_TO, 6, 4,
LINE_TO, 6, 7,
LINE_TO, 5, 7,
CLOSE,
MOVE_TO, 10, 4,
LINE_TO, 11, 4,
LINE_TO, 11, 7,
LINE_TO, 10, 7,
CLOSE,
MOVE_TO, 6, 3,
LINE_TO, 10, 3,
LINE_TO, 10, 4,
LINE_TO, 6, 4,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0x66, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 5, 3, 1, 1, 0,
ROUND_RECT, 10, 3, 1, 1, 0,
NEW_PATH,
PATH_COLOR_ARGB, 0x7F, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 9, 4, 1, 1, 0,
ROUND_RECT, 6, 4, 1, 1, 0,
END
)
ICON_TEMPLATE(LOCATION_BAR_HTTPS_INVALID_INVERT, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
PATH_COLOR_ARGB, 0xFF, 0xFF, 0xFF, 0xFF,
ROUND_RECT, 1, 1, 14, 14, 2,
NEW_PATH,
PATH_COLOR_ARGB, 0xFF, 0xC5, 0x39, 0x29,
MOVE_TO, 4, 7.99f,
CUBIC_TO, 4, 7.44f, 4.45f, 7, 5, 7,
LINE_TO, 11, 7,
CUBIC_TO, 11.55f, 7, 12, 7.45f, 12, 7.99f,
LINE_TO, 12, 12.01f,
CUBIC_TO, 12, 12.56f, 11.55f, 13, 11, 13,
LINE_TO, 5, 13,
CUBIC_TO, 4.45f, 13, 4, 12.55f, 4, 12.01f,
LINE_TO, 4, 7.99f,
CLOSE,
MOVE_TO, 7, 9,
LINE_TO, 9, 9,
LINE_TO, 9, 11,
LINE_TO, 7, 11,
CLOSE,
MOVE_TO, 6, 8,
LINE_TO, 7, 8,
LINE_TO, 7, 9,
LINE_TO, 6, 9,
CLOSE,
MOVE_TO, 9, 8,
LINE_TO, 10, 8,
LINE_TO, 10, 9,
LINE_TO, 9, 9,
CLOSE,
MOVE_TO, 9, 11,
LINE_TO, 10, 11,
LINE_TO, 10, 12,
LINE_TO, 9, 12,
CLOSE,
MOVE_TO, 6, 11,
LINE_TO, 7, 11,
LINE_TO, 7, 12,
LINE_TO, 6, 12,
CLOSE,
MOVE_TO, 5, 4,
LINE_TO, 6, 4,
LINE_TO, 6, 7,
LINE_TO, 5, 7,
CLOSE,
MOVE_TO, 10, 4,
LINE_TO, 11, 4,
LINE_TO, 11, 7,
LINE_TO, 10, 7,
CLOSE,
MOVE_TO, 6, 3,
LINE_TO, 10, 3,
LINE_TO, 10, 4,
LINE_TO, 6, 4,
CLOSE,
NEW_PATH,
PATH_COLOR_ARGB, 0x66, 0xC5, 0x39, 0x29,
ROUND_RECT, 5, 3, 1, 1, 0,
ROUND_RECT, 10, 3, 1, 1, 0,
NEW_PATH,
PATH_COLOR_ARGB, 0x7F, 0xC5, 0x39, 0x29,
ROUND_RECT, 9, 4, 1, 1, 0,
ROUND_RECT, 6, 4, 1, 1, 0,
END
)
ICON_TEMPLATE(NAVIGATE_HOME, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 3.35f, 7,
LINE_TO, 8, 2.5f,
LINE_TO, 12.65f, 7,
LINE_TO, 12, 7,
LINE_TO, 12, 14,
LINE_TO, 4, 14,
LINE_TO, 4, 7,
LINE_TO, 3.35f, 7,
LINE_TO, 3.35f, 7,
CLOSE,
MOVE_TO, 2, 8.3f,
LINE_TO, 1.54f, 8.74f,
CUBIC_TO, 1.19f, 9.09f, 0.62f, 9.09f, 0.26f, 8.74f,
CUBIC_TO, -0.09f, 8.4f, -0.09f, 7.85f, 0.26f, 7.51f,
LINE_TO, 8, 0,
LINE_TO, 15.74f, 7.51f,
CUBIC_TO, 16.09f, 7.85f, 16.09f, 8.4f, 15.74f, 8.74f,
CUBIC_TO, 15.38f, 9.09f, 14.81f, 9.09f, 14.46f, 8.74f,
LINE_TO, 14, 8.3f,
LINE_TO, 14, 14.5f,
CUBIC_TO, 14, 15.5f, 13.5f, 16, 12.5f, 16,
LINE_TO, 3.5f, 16,
CUBIC_TO, 2.5f, 16, 2, 15.5f, 2, 14.5f,
LINE_TO, 2, 8.3f,
LINE_TO, 2, 8.3f,
CLOSE,
END
)
ICON_TEMPLATE(FOLDER_SUPERVISED, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 2.5f, 2,
CUBIC_TO, 1.73f, 2, 1.01f, 3.15f, 1.01f, 3.94f,
LINE_TO, 1, 12.56f,
CUBIC_TO, 1, 13.35f, 1.63f, 14, 2.4f, 14,
LINE_TO, 13.6f, 14,
CUBIC_TO, 14.37f, 14, 15, 13.35f, 15, 12.56f,
LINE_TO, 15, 5.38f,
CUBIC_TO, 15, 4.58f, 14.27f, 4, 13.5f, 4,
LINE_TO, 9, 4,
LINE_TO, 7, 2,
LINE_TO, 2.5f, 2,
CLOSE,
MOVE_TO, 8, 11.06f,
CUBIC_TO, 8.54f, 11.18f, 9, 11.47f, 9, 11.83f,
LINE_TO, 9, 12.69f,
CUBIC_TO, 9.58f, 12.44f, 10, 12.06f, 10, 11.61f,
LINE_TO, 10, 9.39f,
CUBIC_TO, 10, 8.6f, 8.68f, 8, 7.5f, 8,
CUBIC_TO, 6.32f, 8, 5, 8.6f, 5, 9.39f,
LINE_TO, 5, 11.61f,
CUBIC_TO, 5, 12.06f, 5.42f, 12.44f, 6, 12.7f,
CUBIC_TO, 6.45f, 12.89f, 6.99f, 13, 7.5f, 13,
CUBIC_TO, 7.67f, 13, 7.84f, 12.99f, 8, 12.96f,
LINE_TO, 8, 11.96f,
CUBIC_TO, 7.84f, 11.99f, 7.67f, 12, 7.5f, 12,
CUBIC_TO, 7, 12, 6.47f, 11.89f, 6.03f, 11.7f,
CUBIC_TO, 6.15f, 11.3f, 6.86f, 11, 7.5f, 11,
CUBIC_TO, 7.67f, 11, 7.84f, 11.02f, 8, 11.06f,
CLOSE,
MOVE_TO, 7.5f, 10.5f,
CUBIC_TO, 7.91f, 10.5f, 8.25f, 10.16f, 8.25f, 9.75f,
CUBIC_TO, 8.25f, 9.34f, 7.91f, 9, 7.5f, 9,
CUBIC_TO, 7.09f, 9, 6.75f, 9.34f, 6.75f, 9.75f,
CUBIC_TO, 6.75f, 10.16f, 7.09f, 10.5f, 7.5f, 10.5f,
CLOSE,
MOVE_TO, 7.5f, 7.5f,
CUBIC_TO, 8.19f, 7.5f, 8.75f, 6.94f, 8.75f, 6.25f,
CUBIC_TO, 8.75f, 5.56f, 8.19f, 5, 7.5f, 5,
CUBIC_TO, 6.81f, 5, 6.25f, 5.56f, 6.25f, 6.25f,
CUBIC_TO, 6.25f, 6.94f, 6.81f, 7.5f, 7.5f, 7.5f,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_MAXIMIZE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 11, 1,
R_V_LINE_TO, 10,
H_LINE_TO, 1,
V_LINE_TO, 1,
R_H_LINE_TO, 10,
CLOSE,
MOVE_TO, 9, 9,
H_LINE_TO, 3,
V_LINE_TO, 3,
R_H_LINE_TO, 6,
R_V_LINE_TO, 6,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_LEFT_SNAPPED, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 1, 6,
R_LINE_TO, 5.6f, 5,
LINE_TO, 8, 9.75f,
LINE_TO, 3.8f, 6,
LINE_TO, 8, 2.25f,
LINE_TO, 6.6f, 1,
LINE_TO, 1.7f, 5.38f,
LINE_TO, 1, 6,
CLOSE,
END
)
ICON_TEMPLATE(NAVIGATE_STOP, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 8, 9.19f,
LINE_TO, 3.43f, 13.75f,
CUBIC_TO, 3.1f, 14.08f, 2.57f, 14.08f, 2.25f, 13.75f,
CUBIC_TO, 1.92f, 13.43f, 1.92f, 12.9f, 2.25f, 12.57f,
LINE_TO, 6.81f, 8,
LINE_TO, 2.25f, 3.43f,
CUBIC_TO, 1.92f, 3.1f, 1.92f, 2.57f, 2.25f, 2.25f,
CUBIC_TO, 2.57f, 1.92f, 3.1f, 1.92f, 3.43f, 2.25f,
LINE_TO, 8, 6.81f,
LINE_TO, 12.57f, 2.25f,
CUBIC_TO, 12.9f, 1.92f, 13.43f, 1.92f, 13.75f, 2.25f,
CUBIC_TO, 14.08f, 2.57f, 14.08f, 3.1f, 13.75f, 3.43f,
LINE_TO, 9.19f, 8,
LINE_TO, 13.75f, 12.57f,
CUBIC_TO, 14.08f, 12.9f, 14.08f, 13.43f, 13.75f, 13.75f,
CUBIC_TO, 13.43f, 14.08f, 12.9f, 14.08f, 12.57f, 13.75f,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_BACK, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 4.92f, 5,
H_LINE_TO, 11,
R_V_LINE_TO, 2,
H_LINE_TO, 4.92f,
LINE_TO, 8, 9.75f,
LINE_TO, 6.6f, 11,
LINE_TO, 1, 6,
R_LINE_TO, 0.7f, -0.62f,
LINE_TO, 6.6f, 1,
LINE_TO, 8, 2.25f,
LINE_TO, 4.92f, 5,
CLOSE,
END
)
ICON_TEMPLATE(WINDOW_CONTROL_MINIMIZE, // Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 12,
MOVE_TO, 1, 9,
R_H_LINE_TO, 10,
R_V_LINE_TO, 2,
H_LINE_TO, 1,
CLOSE,
END
)
ICON_TEMPLATE(KEYWORD_SEARCH, // Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

CANVAS_DIMENSIONS, 16,
MOVE_TO, 9.29f, 9.03f,
LINE_TO, 9.15f, 8.89f,
CUBIC_TO, 9.65f, 8.31f, 10, 7.5f, 10, 6.5f,
CUBIC_TO, 10, 4.65f, 8.35f, 3, 6.5f, 3,
CUBIC_TO, 4.65f, 3, 3, 4.65f, 3, 6.5f,
CUBIC_TO, 3, 8.35f, 5, 10, 6.58f, 10,
CUBIC_TO, 7.5f, 10, 8.22f, 9.74f, 8.78f, 9.26f,
LINE_TO, 8.93f, 9.4f,
LINE_TO, 8.93f, 9.8f,
LINE_TO, 11.5f, 12.37f,
LINE_TO, 12.27f, 11.61f,
LINE_TO, 9.7f, 9.03f,
LINE_TO, 9.29f, 9.03f,
CLOSE,
MOVE_TO, 6.5f, 9,
CUBIC_TO, 5.12f, 9, 4, 7.88f, 4, 6.5f,
CUBIC_TO, 4, 5.12f, 5.12f, 4, 6.5f, 4,
CUBIC_TO, 7.88f, 4, 9, 5.12f, 9, 6.5f,
CUBIC_TO, 9, 7.88f, 7.88f, 9, 6.5f, 9,
LINE_TO, 6.5f, 9,
CLOSE,
END
)

    default:
      return GetPathForVectorIcon(id);
  }
}

}  // namespace gfx
