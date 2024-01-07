/*
 * File: switch0_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef SWITCH0_CA_H
#define SWITCH0_CA_H

/* preprocessor validation checks */
#include "switch0_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_switch0_HWRes;
extern CA_PWS_TestResults CA_switch0_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_switch0_ExpHW;
extern CA_HWImpl CA_switch0_ActHW;

/* entry point function to run tests */
void switch0_caRunTests(void);

#endif                                 /* SWITCH0_CA_H */
