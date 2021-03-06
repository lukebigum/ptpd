/* Copyright (c) 2015 Wojciech Owczarek,
 *
 * All Rights Reserved
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file   piservo.h
 * @date   Sat Jan 9 16:14:10 2015
 *
 * @brief  structure definitions for the (new) PI servo
 *
 */


#ifndef PTPD_PISERVO_H_
#define PTPD_PISERVO_H_

#define ZEROF 10E-12

#include "../ptp_primitives.h"
#include "../ptp_datatypes.h"
#include "clockdriver.h"

#include <stdint.h>


/**
 * \struct PIservo
 * \brief PI controller model structure
 */

typedef struct PIservo PIservo;

struct PIservo {

    struct ClockDriver *controller;

    double maxOutput;
    Integer32 input;
    double output;
    double integral;
    double kP, kI;
    Boolean runningMaxOutput;
    TimeInternal lastUpdate;
    int tauMethod;
    double tau;
    int maxTau;
    double delayFactor;

    Integer32 diff;
    double _lastOutput;
    Integer32 _lastInput;
    Boolean _updated;

    double (*feed) (PIservo*, Integer32, double);
    void (*prime) (PIservo *, double);
    void (*reset) (PIservo*);

};

void setupPIservo(PIservo*);


#endif /*PTPD_PISERVO_H*/
