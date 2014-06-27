#pragma once

#define SYNTH_HOST "localhost"
#define SYNTH_PORT 5678
#define BIRL_PORT 1234

#define KEYS_NUMBER 9
#define KEYS_MAX 1000
#define KEYS_DISCRETE_THRESHOLD 0.5

#define PRESSURE_NUMBER 2

#define EMBOUCHURE_NUMBER 20
#define EMBOUCHURE_MAX 4096

#define MAX_OUTPUT_PARAMETERS 8

#define TRAIN_GUI_X 200
#define TRAIN_GUI_Y 30
#define TRAIN_GUI_W 820
#define TRAIN_GUI_H 165

#define GUI_PARAMETERS_X 200
#define GUI_PARAMETERS_Y 200
#define GUI_PARAMETERS_W 820
#define GUI_PARAMETERS_H 594

#define PARAMETER_SELECT_H 146
#define PARAMETER_VIEW_H 132

#define BIRL_DRAW_X 12
#define BIRL_DRAW_Y 60
#define BIRL_DRAW_W 170
#define BIRL_DRAW_H 700

#define BIRL_DRAW_EMBOUCHURE_H 80
#define BIRL_DRAW_PRESSURE_H 40


enum Mode {
    PERFORMANCE,
    TRAINING_SELECT_OUTPUTS,
    TRAINING_RECORD,
    TRAINING_PLAY };
