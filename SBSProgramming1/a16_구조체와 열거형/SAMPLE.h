#pragma once

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

#ifndef JOB_H

#define JOB_H

typedef enum
{
	전사,
	궁수,
	도적,
	정의되지않음 = 100
}JOB;

#endif

void Selectjob();
