#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>
#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

/* VCS error reporting routine */
extern void vcsMsgReport1(const char *, const char *, int, void *, void*, const char *);

#ifndef _VC_TYPES_
#define _VC_TYPES_
/* common definitions shared with DirectC.h */

typedef unsigned int U;
typedef unsigned char UB;
typedef unsigned char scalar;
typedef struct { U c; U d;} vec32;

#define scalar_0 0
#define scalar_1 1
#define scalar_z 2
#define scalar_x 3

extern long long int ConvUP2LLI(U* a);
extern void ConvLLI2UP(long long int a1, U* a2);
extern long long int GetLLIresult();
extern void StoreLLIresult(const unsigned int* data);
typedef struct VeriC_Descriptor *vc_handle;

#ifndef SV_3_COMPATIBILITY
#define SV_STRING const char*
#else
#define SV_STRING char*
#endif

#endif /* _VC_TYPES_ */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_create_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_create_params
__attribute__((weak)) long long XMODEL_create_params(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, double A_3, double A_4, int A_5)) dlsym(RTLD_NEXT, "XMODEL_create_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_create_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_create_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_insert_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_insert_params
__attribute__((weak)) long long XMODEL_insert_params(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, int A_6)) dlsym(RTLD_NEXT, "XMODEL_insert_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_insert_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_insert_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_display_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_display_params
__attribute__((weak)) void XMODEL_display_params(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_display_params");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_display_params");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_display_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_count_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_count_params
__attribute__((weak)) int XMODEL_count_params(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_count_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_count_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_count_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_delete_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_delete_params
__attribute__((weak)) void XMODEL_delete_params(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_delete_params");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_delete_params");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_delete_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_copy_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_copy_params
__attribute__((weak)) long long XMODEL_copy_params(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_copy_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_copy_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_copy_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_scale_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_scale_params
__attribute__((weak)) long long XMODEL_scale_params(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "XMODEL_scale_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_scale_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_scale_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_add_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_add_params
__attribute__((weak)) long long XMODEL_add_params(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "XMODEL_add_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_add_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_add_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_subs_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_subs_params
__attribute__((weak)) long long XMODEL_subs_params(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "XMODEL_subs_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_subs_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_subs_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_multiply_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_multiply_params
__attribute__((weak)) long long XMODEL_multiply_params(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "XMODEL_multiply_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_multiply_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_multiply_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_trim_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_trim_params
__attribute__((weak)) long long XMODEL_trim_params(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "XMODEL_trim_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_trim_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_trim_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_update_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_update_params
__attribute__((weak)) long long XMODEL_update_params(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "XMODEL_update_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_update_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_update_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_pfrac_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_pfrac_params
__attribute__((weak)) long long XMODEL_pfrac_params(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "XMODEL_pfrac_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_pfrac_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_pfrac_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_sample_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_sample_params
__attribute__((weak)) double XMODEL_sample_params(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "XMODEL_sample_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_sample_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_sample_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_find_cross_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_find_cross_params
__attribute__((weak)) double XMODEL_find_cross_params(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "XMODEL_find_cross_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_find_cross_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_find_cross_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_deriv_params
#define __VCS_IMPORT_DPI_STUB_XMODEL_deriv_params
__attribute__((weak)) long long XMODEL_deriv_params(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_deriv_params");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_deriv_params");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_deriv_params */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_fread_pwl
#define __VCS_IMPORT_DPI_STUB_XMODEL_fread_pwl
__attribute__((weak)) void* XMODEL_fread_pwl(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(const char* A_1)) dlsym(RTLD_NEXT, "XMODEL_fread_pwl");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_fread_pwl");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_fread_pwl */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_new
#define __VCS_IMPORT_DPI_STUB_XMODEL_new
__attribute__((weak)) long long XMODEL_new(/* INPUT */int A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2)) dlsym(RTLD_NEXT, "XMODEL_new");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_new");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_new */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_xreal
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_xreal
__attribute__((weak)) void XMODEL_set_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "XMODEL_set_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xreal
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xreal
__attribute__((weak)) void XMODEL_set_st_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3, double A_4, long long A_5)) dlsym(RTLD_NEXT, "XMODEL_set_st_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_st_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_xbit
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_xbit
__attribute__((weak)) void XMODEL_set_xbit(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "XMODEL_set_xbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_xbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xbit
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xbit
__attribute__((weak)) void XMODEL_set_st_xbit(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char A_2, double A_3, double A_4, double A_5, double A_6, double A_7, double A_8)) dlsym(RTLD_NEXT, "XMODEL_set_st_xbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_st_xbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_st_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_change_xreal
#define __VCS_IMPORT_DPI_STUB_XMODEL_change_xreal
__attribute__((weak)) void XMODEL_change_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "XMODEL_change_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_change_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_change_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_eval_xreal
#define __VCS_IMPORT_DPI_STUB_XMODEL_eval_xreal
__attribute__((weak)) void XMODEL_eval_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "XMODEL_eval_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_eval_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_eval_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep
__attribute__((weak)) double XMODEL_set_delaystep(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "XMODEL_set_delaystep");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_delaystep");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep_from
#define __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep_from
__attribute__((weak)) double XMODEL_set_delaystep_from(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4, long long A_5, int A_6)) dlsym(RTLD_NEXT, "XMODEL_set_delaystep_from");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_set_delaystep_from");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_set_delaystep_from */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_state
#define __VCS_IMPORT_DPI_STUB_XMODEL_state
__attribute__((weak)) long long XMODEL_state(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_state");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_state");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_state */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_pstate
#define __VCS_IMPORT_DPI_STUB_XMODEL_pstate
__attribute__((weak)) long long XMODEL_pstate(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_pstate");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_pstate");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_pstate */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_ppstate
#define __VCS_IMPORT_DPI_STUB_XMODEL_ppstate
__attribute__((weak)) long long XMODEL_ppstate(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_ppstate");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_ppstate");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_ppstate */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_changestate
#define __VCS_IMPORT_DPI_STUB_XMODEL_changestate
__attribute__((weak)) long long XMODEL_changestate(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_changestate");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_changestate");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_changestate */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_pchangestate
#define __VCS_IMPORT_DPI_STUB_XMODEL_pchangestate
__attribute__((weak)) long long XMODEL_pchangestate(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_pchangestate");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_pchangestate");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_pchangestate */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_getabstime
#define __VCS_IMPORT_DPI_STUB_XMODEL_getabstime
__attribute__((weak)) double XMODEL_getabstime(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_getabstime");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_getabstime");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_getabstime */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_ptime
#define __VCS_IMPORT_DPI_STUB_XMODEL_ptime
__attribute__((weak)) double XMODEL_ptime(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_ptime");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_ptime");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_ptime */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_pptime
#define __VCS_IMPORT_DPI_STUB_XMODEL_pptime
__attribute__((weak)) double XMODEL_pptime(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_pptime");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_pptime");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_pptime */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_tprecision
#define __VCS_IMPORT_DPI_STUB_XMODEL_tprecision
__attribute__((weak)) double XMODEL_tprecision(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_tprecision");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_tprecision");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_tprecision */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_toffset
#define __VCS_IMPORT_DPI_STUB_XMODEL_toffset
__attribute__((weak)) double XMODEL_toffset(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_toffset");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_toffset");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_toffset */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_tstamp
#define __VCS_IMPORT_DPI_STUB_XMODEL_tstamp
__attribute__((weak)) double XMODEL_tstamp(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_tstamp");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_tstamp");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_tstamp */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_ptstamp
#define __VCS_IMPORT_DPI_STUB_XMODEL_ptstamp
__attribute__((weak)) double XMODEL_ptstamp(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_ptstamp");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_ptstamp");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_ptstamp */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_value
#define __VCS_IMPORT_DPI_STUB_XMODEL_value
__attribute__((weak)) double XMODEL_value(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_value");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_value");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_value */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_jmean
#define __VCS_IMPORT_DPI_STUB_XMODEL_jmean
__attribute__((weak)) double XMODEL_jmean(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_jmean");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_jmean");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_jmean */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_jrms
#define __VCS_IMPORT_DPI_STUB_XMODEL_jrms
__attribute__((weak)) double XMODEL_jrms(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_jrms");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_jrms");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_jrms */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_prob1
#define __VCS_IMPORT_DPI_STUB_XMODEL_prob1
__attribute__((weak)) double XMODEL_prob1(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_prob1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_prob1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_prob1 */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_prob0
#define __VCS_IMPORT_DPI_STUB_XMODEL_prob0
__attribute__((weak)) double XMODEL_prob0(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_prob0");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_prob0");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_prob0 */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_acf
#define __VCS_IMPORT_DPI_STUB_XMODEL_acf
__attribute__((weak)) long long XMODEL_acf(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "XMODEL_acf");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_acf");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_acf */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_find_cross
#define __VCS_IMPORT_DPI_STUB_XMODEL_find_cross
__attribute__((weak)) double XMODEL_find_cross(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2, double A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "XMODEL_find_cross");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_find_cross");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_find_cross */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_meas_value
#define __VCS_IMPORT_DPI_STUB_XMODEL_meas_value
__attribute__((weak)) double XMODEL_meas_value(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_meas_value");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_meas_value");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_meas_value */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv1
#define __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv1
__attribute__((weak)) double XMODEL_meas_deriv1(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_meas_deriv1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_meas_deriv1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv1 */

#ifndef __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv2
#define __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv2
__attribute__((weak)) double XMODEL_meas_deriv2(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "XMODEL_meas_deriv2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "XMODEL_meas_deriv2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_XMODEL_meas_deriv2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_logic
#define __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_logic
__attribute__((weak)) long long NPRIMS_initarray_logic(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1)) dlsym(RTLD_NEXT, "NPRIMS_initarray_logic");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_initarray_logic");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_logic */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_int
#define __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_int
__attribute__((weak)) long long NPRIMS_initarray_int(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1)) dlsym(RTLD_NEXT, "NPRIMS_initarray_int");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_initarray_int");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_int */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_real
#define __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_real
__attribute__((weak)) long long NPRIMS_initarray_real(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1)) dlsym(RTLD_NEXT, "NPRIMS_initarray_real");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_initarray_real");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_initarray_real */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_logic
#define __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_logic
__attribute__((weak)) void NPRIMS_closearray_logic(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_closearray_logic");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_closearray_logic");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_logic */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_int
#define __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_int
__attribute__((weak)) void NPRIMS_closearray_int(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_closearray_int");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_closearray_int");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_int */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_real
#define __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_real
__attribute__((weak)) void NPRIMS_closearray_real(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_closearray_real");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_closearray_real");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_closearray_real */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_logic
#define __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_logic
__attribute__((weak)) void NPRIMS_putelem_logic(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */unsigned char A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */unsigned char A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, unsigned char A_3)) dlsym(RTLD_NEXT, "NPRIMS_putelem_logic");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_putelem_logic");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_logic */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_int
#define __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_int
__attribute__((weak)) void NPRIMS_putelem_int(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_putelem_int");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_putelem_int");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_int */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_real
#define __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_real
__attribute__((weak)) void NPRIMS_putelem_real(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, double A_3)) dlsym(RTLD_NEXT, "NPRIMS_putelem_real");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_putelem_real");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_putelem_real */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_new_xbit
#define __VCS_IMPORT_DPI_STUB_NPRIMS_new_xbit
__attribute__((weak)) long long NPRIMS_new_xbit()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_new_xbit");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_new_xbit");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_new_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_set_xbit
#define __VCS_IMPORT_DPI_STUB_NPRIMS_set_xbit
__attribute__((weak)) void NPRIMS_set_xbit(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char A_2, double A_3)) dlsym(RTLD_NEXT, "NPRIMS_set_xbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_set_xbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_set_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xbit
#define __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xbit
__attribute__((weak)) void NPRIMS_set_st_xbit(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */unsigned char A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "NPRIMS_set_st_xbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_set_st_xbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_updated_st_xbit
#define __VCS_IMPORT_DPI_STUB_NPRIMS_updated_st_xbit
__attribute__((weak)) int NPRIMS_updated_st_xbit(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "NPRIMS_updated_st_xbit");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_updated_st_xbit");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_updated_st_xbit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_new_xreal
#define __VCS_IMPORT_DPI_STUB_NPRIMS_new_xreal
__attribute__((weak)) long long NPRIMS_new_xreal()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_new_xreal");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_new_xreal");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_new_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_set_xreal
#define __VCS_IMPORT_DPI_STUB_NPRIMS_set_xreal
__attribute__((weak)) void NPRIMS_set_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "NPRIMS_set_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_set_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_set_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xreal
#define __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xreal
__attribute__((weak)) void NPRIMS_set_st_xreal(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_set_st_xreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_set_st_xreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_set_st_xreal */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_CheckHeader
#define __VCS_IMPORT_DPI_STUB_JEZ_CheckHeader
__attribute__((weak)) int JEZ_CheckHeader(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "JEZ_CheckHeader");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_CheckHeader");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_CheckHeader */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_GetVersionIndex
#define __VCS_IMPORT_DPI_STUB_JEZ_GetVersionIndex
__attribute__((weak)) int JEZ_GetVersionIndex(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "JEZ_GetVersionIndex");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_GetVersionIndex");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_GetVersionIndex */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_OpenHeader
#define __VCS_IMPORT_DPI_STUB_JEZ_OpenHeader
__attribute__((weak)) void JEZ_OpenHeader(/* INPUT */const char* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */int A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */int A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(const char* A_1, double A_2, double A_3, int A_4)) dlsym(RTLD_NEXT, "JEZ_OpenHeader");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_OpenHeader");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_OpenHeader */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_AddVariable
#define __VCS_IMPORT_DPI_STUB_JEZ_AddVariable
__attribute__((weak)) void JEZ_AddVariable(/* INPUT */const char* A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */int A_2, /* INPUT */const char* A_3, /* INPUT */const char* A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(const char* A_1, int A_2, const char* A_3, const char* A_4)) dlsym(RTLD_NEXT, "JEZ_AddVariable");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_AddVariable");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_AddVariable */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_CloseHeader
#define __VCS_IMPORT_DPI_STUB_JEZ_CloseHeader
__attribute__((weak)) void JEZ_CloseHeader(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(const char* A_1)) dlsym(RTLD_NEXT, "JEZ_CloseHeader");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_CloseHeader");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_CloseHeader */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_OpenBody
#define __VCS_IMPORT_DPI_STUB_JEZ_OpenBody
__attribute__((weak)) void* JEZ_OpenBody(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(const char* A_1)) dlsym(RTLD_NEXT, "JEZ_OpenBody");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_OpenBody");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_OpenBody */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_FlushBody
#define __VCS_IMPORT_DPI_STUB_JEZ_FlushBody
__attribute__((weak)) void JEZ_FlushBody(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1)) dlsym(RTLD_NEXT, "JEZ_FlushBody");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_FlushBody");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_FlushBody */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_CloseBody
#define __VCS_IMPORT_DPI_STUB_JEZ_CloseBody
__attribute__((weak)) void JEZ_CloseBody(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1)) dlsym(RTLD_NEXT, "JEZ_CloseBody");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_CloseBody");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_CloseBody */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEvent
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEvent
__attribute__((weak)) void JEZ_WriteEvent(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */const char* A_4, /* INPUT */int A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */const char* A_4, /* INPUT */int A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, const char* A_4, int A_5, int A_6)) dlsym(RTLD_NEXT, "JEZ_WriteEvent");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEvent");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEvent */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVbit
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVbit
__attribute__((weak)) void JEZ_WriteEventSVbit(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */unsigned char A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */unsigned char A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, unsigned char A_4, int A_5)) dlsym(RTLD_NEXT, "JEZ_WriteEventSVbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEventSVbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVbit */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVreal
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVreal
__attribute__((weak)) void JEZ_WriteEventSVreal(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, double A_4, int A_5)) dlsym(RTLD_NEXT, "JEZ_WriteEventSVreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEventSVreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEventSVreal */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXbit
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXbit
__attribute__((weak)) void JEZ_WriteEventXbit(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, long long A_4, int A_5, int A_6)) dlsym(RTLD_NEXT, "JEZ_WriteEventXbit");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEventXbit");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXbit */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXreal
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXreal
__attribute__((weak)) void JEZ_WriteEventXreal(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, long long A_4, int A_5, int A_6)) dlsym(RTLD_NEXT, "JEZ_WriteEventXreal");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEventXreal");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEventXreal */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_WriteEventMeas
#define __VCS_IMPORT_DPI_STUB_JEZ_WriteEventMeas
__attribute__((weak)) void JEZ_WriteEventMeas(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */long long A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, int A_2, double A_3, long long A_4, int A_5)) dlsym(RTLD_NEXT, "JEZ_WriteEventMeas");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_WriteEventMeas");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_WriteEventMeas */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc1
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc1
__attribute__((weak)) int JEZ_obsfunc1(/* INPUT */const char* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6, /* INPUT */const char* A_7, /* INPUT */const char* A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */int A_4, /* INPUT */int A_5, /* INPUT */const char* A_6, /* INPUT */const char* A_7, /* INPUT */const char* A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(const char* A_1, double A_2, double A_3, int A_4, int A_5, const char* A_6, const char* A_7, const char* A_8)) dlsym(RTLD_NEXT, "JEZ_obsfunc1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc1 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc2
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc2
__attribute__((weak)) void* JEZ_obsfunc2(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10, 
/* INPUT */int A_11)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10, 
/* INPUT */int A_11) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(void* A_1, const char* A_2, double A_3, double A_4, double A_5, int A_6, long long A_7, int A_8, int A_9, int A_10, int A_11)) dlsym(RTLD_NEXT, "JEZ_obsfunc2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10, A_11);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc2 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc3
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc3
__attribute__((weak)) void* JEZ_obsfunc3(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10, 
/* INPUT */int A_11)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10, 
/* INPUT */int A_11) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(void* A_1, const char* A_2, double A_3, double A_4, double A_5, int A_6, long long A_7, int A_8, int A_9, int A_10, int A_11)) dlsym(RTLD_NEXT, "JEZ_obsfunc3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10, A_11);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc3 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc4
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc4
__attribute__((weak)) void* JEZ_obsfunc4(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */unsigned char A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */unsigned char A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(void* A_1, const char* A_2, double A_3, double A_4, double A_5, int A_6, unsigned char A_7, int A_8, int A_9, int A_10)) dlsym(RTLD_NEXT, "JEZ_obsfunc4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc4 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc5
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc5
__attribute__((weak)) void* JEZ_obsfunc5(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */double A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */double A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(void* A_1, const char* A_2, double A_3, double A_4, double A_5, int A_6, double A_7, int A_8, int A_9, int A_10)) dlsym(RTLD_NEXT, "JEZ_obsfunc5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc5 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc6
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc6
__attribute__((weak)) void* JEZ_obsfunc6(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6, /* INPUT */long long A_7, /* INPUT */int A_8, /* INPUT */int A_9, /* INPUT */int A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(void* A_1, const char* A_2, double A_3, double A_4, double A_5, int A_6, long long A_7, int A_8, int A_9, int A_10)) dlsym(RTLD_NEXT, "JEZ_obsfunc6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc6 */

#ifndef __VCS_IMPORT_DPI_STUB_JEZ_obsfunc7
#define __VCS_IMPORT_DPI_STUB_JEZ_obsfunc7
__attribute__((weak)) void JEZ_obsfunc7(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(void* A_1, const char* A_2, long long A_3, long long A_4, double A_5)) dlsym(RTLD_NEXT, "JEZ_obsfunc7");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "JEZ_obsfunc7");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_JEZ_obsfunc7 */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_read_paramfile
#define __VCS_IMPORT_DPI_STUB_PARAM_read_paramfile
__attribute__((weak)) long long PARAM_read_paramfile(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1)) dlsym(RTLD_NEXT, "PARAM_read_paramfile");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_read_paramfile");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_read_paramfile */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_extract_param_real
#define __VCS_IMPORT_DPI_STUB_PARAM_extract_param_real
__attribute__((weak)) double PARAM_extract_param_real(/* INPUT */long long A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, const char* A_2)) dlsym(RTLD_NEXT, "PARAM_extract_param_real");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_extract_param_real");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_extract_param_real */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_extract_param_int
#define __VCS_IMPORT_DPI_STUB_PARAM_extract_param_int
__attribute__((weak)) int PARAM_extract_param_int(/* INPUT */long long A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, const char* A_2)) dlsym(RTLD_NEXT, "PARAM_extract_param_int");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_extract_param_int");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_extract_param_int */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arraysize
#define __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arraysize
__attribute__((weak)) int PARAM_extract_param_arraysize(/* INPUT */long long A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, const char* A_2)) dlsym(RTLD_NEXT, "PARAM_extract_param_arraysize");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_extract_param_arraysize");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arraysize */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arrayelem
#define __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arrayelem
__attribute__((weak)) double PARAM_extract_param_arrayelem(/* INPUT */long long A_1, /* INPUT */const char* A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */const char* A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, const char* A_2, int A_3)) dlsym(RTLD_NEXT, "PARAM_extract_param_arrayelem");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_extract_param_arrayelem");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_extract_param_arrayelem */

#ifndef __VCS_IMPORT_DPI_STUB_PARAM_delete_paramlist
#define __VCS_IMPORT_DPI_STUB_PARAM_delete_paramlist
__attribute__((weak)) void PARAM_delete_paramlist(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "PARAM_delete_paramlist");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PARAM_delete_paramlist");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PARAM_delete_paramlist */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_get_timeunit
#define __VCS_IMPORT_DPI_STUB_NPRIMS_get_timeunit
__attribute__((weak)) double NPRIMS_get_timeunit()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)()) dlsym(RTLD_NEXT, "NPRIMS_get_timeunit");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_get_timeunit");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_get_timeunit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_convto_reltime
#define __VCS_IMPORT_DPI_STUB_NPRIMS_convto_reltime
__attribute__((weak)) unsigned long long NPRIMS_convto_reltime(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_convto_reltime");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_convto_reltime");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_convto_reltime */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_convto_abstime
#define __VCS_IMPORT_DPI_STUB_NPRIMS_convto_abstime
__attribute__((weak)) double NPRIMS_convto_abstime(/* INPUT */unsigned long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */unsigned long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(unsigned long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_convto_abstime");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_convto_abstime");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_convto_abstime */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_global_formattimeunit
#define __VCS_IMPORT_DPI_STUB_PRIMS_global_formattimeunit
__attribute__((weak)) SV_STRING PRIMS_global_formattimeunit(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static SV_STRING (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (SV_STRING (*)(int A_1)) dlsym(RTLD_NEXT, "PRIMS_global_formattimeunit");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_global_formattimeunit");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_global_formattimeunit */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_init
__attribute__((weak)) long long NPRIMS_filter_init(/* INPUT */double A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */const char* A_5, /* OUTPUT */long long *A_6, /* OUTPUT */long long *A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */const char* A_5, /* OUTPUT */long long *A_6, /* OUTPUT */long long *A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, int A_2, int A_3, double A_4, const char* A_5, long long* A_6, long long* A_7)) dlsym(RTLD_NEXT, "NPRIMS_filter_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_check
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_check
__attribute__((weak)) void NPRIMS_filter_check(/* INPUT */long long A_1, /* OUTPUT */double *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */double *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, double* A_2)) dlsym(RTLD_NEXT, "NPRIMS_filter_check");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_check");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_check */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_cb1
__attribute__((weak)) void NPRIMS_filter_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long* A_4, double* A_5)) dlsym(RTLD_NEXT, "NPRIMS_filter_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_init
__attribute__((weak)) long long NPRIMS_filter_var_init(/* INPUT */int A_1, /* INPUT */int A_2, /* OUTPUT */long long *A_3, /* OUTPUT */long long *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* OUTPUT */long long *A_3, /* OUTPUT */long long *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long* A_3, long long* A_4)) dlsym(RTLD_NEXT, "NPRIMS_filter_var_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_var_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb1
__attribute__((weak)) void NPRIMS_filter_var_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* OUTPUT */long long *A_5, /* OUTPUT */double *A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* OUTPUT */long long *A_5, /* OUTPUT */double *A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, double A_4, long long* A_5, double* A_6)) dlsym(RTLD_NEXT, "NPRIMS_filter_var_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_var_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb2
__attribute__((weak)) void NPRIMS_filter_var_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* OUTPUT */long long *A_5, /* OUTPUT */double *A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* OUTPUT */long long *A_5, /* OUTPUT */double *A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, double A_4, long long* A_5, double* A_6)) dlsym(RTLD_NEXT, "NPRIMS_filter_var_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_filter_var_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_filter_var_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir1
__attribute__((weak)) double PRIMS_function_filterfir1(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir2
__attribute__((weak)) void PRIMS_function_filterfir2(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir3
__attribute__((weak)) long long PRIMS_function_filterfir3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir4
__attribute__((weak)) double PRIMS_function_filterfir4(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir5
__attribute__((weak)) long long PRIMS_function_filterfir5(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir6
__attribute__((weak)) double PRIMS_function_filterfir6(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3, double A_4, double A_5, double A_6, double A_7, double A_8)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir7
__attribute__((weak)) double PRIMS_function_filterfir7(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir8
__attribute__((weak)) unsigned char PRIMS_function_filterfir8(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir9
__attribute__((weak)) double PRIMS_function_filterfir9(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_filterfir9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_filterfir9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_filterfir9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1
__attribute__((weak)) long long PRIMS_function_polyfunc1(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1_filename
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1_filename
__attribute__((weak)) long long PRIMS_function_polyfunc1_filename(/* INPUT */const char* A_1, /* OUTPUT */int *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* OUTPUT */int *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1, int* A_2)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc1_filename");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc1_filename");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc1_filename */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc2
__attribute__((weak)) long long PRIMS_function_polyfunc2(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc3
__attribute__((weak)) long long PRIMS_function_polyfunc3(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4, long long A_5)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc4
__attribute__((weak)) long long PRIMS_function_polyfunc4(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */long long A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */long long A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4, long long A_5, long long A_6)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc5
__attribute__((weak)) double PRIMS_function_polyfunc5(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc6
__attribute__((weak)) long long PRIMS_function_polyfunc6(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc7
__attribute__((weak)) double PRIMS_function_polyfunc7(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc8
__attribute__((weak)) long long PRIMS_function_polyfunc8(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4, long long A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc9
__attribute__((weak)) double PRIMS_function_polyfunc9(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc10
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc10
__attribute__((weak)) long long PRIMS_function_polyfunc10(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */long long A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */long long A_5, /* INPUT */long long A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, long long A_3, long long A_4, long long A_5, long long A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_polyfunc10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_polyfunc10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_polyfunc10 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_init
__attribute__((weak)) long long NPRIMS_buffer_init(/* INPUT */double A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, long long A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "NPRIMS_buffer_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_buffer_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb1
__attribute__((weak)) void NPRIMS_buffer_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_buffer_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_buffer_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb2
__attribute__((weak)) int NPRIMS_buffer_cb2(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long* A_2, double* A_3)) dlsym(RTLD_NEXT, "NPRIMS_buffer_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_buffer_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_buffer_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_init
__attribute__((weak)) long long NPRIMS_deriv_init(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_deriv_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_deriv_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_cb1
__attribute__((weak)) void NPRIMS_deriv_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_deriv_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_deriv_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_deriv_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_integ_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_integ_init
__attribute__((weak)) long long NPRIMS_integ_init(/* INPUT */double A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, long long* A_3)) dlsym(RTLD_NEXT, "NPRIMS_integ_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_integ_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_integ_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_integ_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_integ_cb1
__attribute__((weak)) void NPRIMS_integ_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long* A_4, double* A_5)) dlsym(RTLD_NEXT, "NPRIMS_integ_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_integ_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_integ_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_scale_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_scale_init
__attribute__((weak)) long long NPRIMS_scale_init(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_scale_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_scale_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_scale_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_scale_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_scale_cb1
__attribute__((weak)) void NPRIMS_scale_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_scale_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_scale_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_scale_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select1
__attribute__((weak)) int PRIMS_function_select1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_select1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select2
__attribute__((weak)) double PRIMS_function_select2(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_select2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select3
__attribute__((weak)) double PRIMS_function_select3(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_select3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select4
__attribute__((weak)) long long PRIMS_function_select4(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_select4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select5
__attribute__((weak)) long long PRIMS_function_select5(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_select5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select6
__attribute__((weak)) long long PRIMS_function_select6(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_select6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select7
__attribute__((weak)) int PRIMS_function_select7(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "PRIMS_function_select7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select8
__attribute__((weak)) int PRIMS_function_select8(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(int A_1, long long A_2, long long A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_function_select8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select9
__attribute__((weak)) int PRIMS_function_select9(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(int A_1, long long A_2, long long A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_function_select9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_select10
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_select10
__attribute__((weak)) int PRIMS_function_select10(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_select10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_select10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_select10 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_add_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_add_init
__attribute__((weak)) long long NPRIMS_add_init(/* INPUT */int A_1, /* OUTPUT */long long *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* OUTPUT */long long *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, long long* A_2)) dlsym(RTLD_NEXT, "NPRIMS_add_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_add_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_add_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb1
__attribute__((weak)) int NPRIMS_add_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_add_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_add_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb2
__attribute__((weak)) int NPRIMS_add_cb2(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */long long *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */long long *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, long long A_3, long long* A_4, long long* A_5)) dlsym(RTLD_NEXT, "NPRIMS_add_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_add_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb3
__attribute__((weak)) int NPRIMS_add_cb3(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */long long *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */long long *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, long long* A_3, double* A_4, long long* A_5)) dlsym(RTLD_NEXT, "NPRIMS_add_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_add_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_add_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_power_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_power_init
__attribute__((weak)) long long NPRIMS_power_init(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_power_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_power_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_power_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_power_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_power_cb1
__attribute__((weak)) void NPRIMS_power_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_power_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_power_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_power_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply1
__attribute__((weak)) long long PRIMS_function_multiply1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2, long long A_3)) dlsym(RTLD_NEXT, "PRIMS_function_multiply1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_multiply1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply2
__attribute__((weak)) int PRIMS_function_multiply2(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_multiply2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_multiply2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply3
__attribute__((weak)) double PRIMS_function_multiply3(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_multiply3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_multiply3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply4
__attribute__((weak)) long long PRIMS_function_multiply4(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2, long long A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_multiply4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_multiply4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_multiply4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_sample1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_sample1
__attribute__((weak)) double PRIMS_function_sample1(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_sample1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_sample1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_sample1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_sample2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_sample2
__attribute__((weak)) long long PRIMS_function_sample2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_sample2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_sample2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_sample2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_sample3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_sample3
__attribute__((weak)) long long PRIMS_function_sample3(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_sample3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_sample3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_sample3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_init
__attribute__((weak)) long long NPRIMS_delay_init(/* INPUT */double A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_delay_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb1
__attribute__((weak)) void NPRIMS_delay_cb1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_delay_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb2
__attribute__((weak)) void NPRIMS_delay_cb2(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3, /* OUTPUT */long long *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3, /* OUTPUT */long long *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long* A_2, double* A_3, long long* A_4)) dlsym(RTLD_NEXT, "NPRIMS_delay_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac2
__attribute__((weak)) void PRIMS_function_dac2(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_dac2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac3
__attribute__((weak)) long long PRIMS_function_dac3(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_dac3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac4
__attribute__((weak)) double PRIMS_function_dac4(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_dac4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac5
__attribute__((weak)) long long PRIMS_function_dac5(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_function_dac5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac6
__attribute__((weak)) double PRIMS_function_dac6(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_dac6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac7
__attribute__((weak)) double PRIMS_function_dac7(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_dac7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac8
__attribute__((weak)) unsigned char PRIMS_function_dac8(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_dac8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_dac9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_dac9
__attribute__((weak)) double PRIMS_function_dac9(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_dac9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_dac9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_dac9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_adc1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_adc1
__attribute__((weak)) int PRIMS_function_adc1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_adc1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_adc1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_adc1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_adc2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_adc2
__attribute__((weak)) double PRIMS_function_adc2(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_adc2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_adc2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_adc2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare1
__attribute__((weak)) unsigned char PRIMS_function_compare1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, long long A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_compare1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare2
__attribute__((weak)) double PRIMS_function_compare2(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare3
__attribute__((weak)) double PRIMS_function_compare3(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare4
__attribute__((weak)) double PRIMS_function_compare4(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare5
__attribute__((weak)) double PRIMS_function_compare5(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare6
__attribute__((weak)) double PRIMS_function_compare6(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare7
__attribute__((weak)) double PRIMS_function_compare7(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare8
__attribute__((weak)) unsigned char PRIMS_function_compare8(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_compare8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare9
__attribute__((weak)) long long PRIMS_function_compare9(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_function_compare9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare10
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare10
__attribute__((weak)) int PRIMS_function_compare10(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare10 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare11
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare11
__attribute__((weak)) double PRIMS_function_compare11(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare11");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare11");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare11 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare12
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare12
__attribute__((weak)) long long PRIMS_function_compare12(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare12");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare12");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare12 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare13
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare13
__attribute__((weak)) long long PRIMS_function_compare13(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_compare13");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare13");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare13 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare14
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare14
__attribute__((weak)) double PRIMS_function_compare14(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_compare14");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare14");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare14 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare15
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare15
__attribute__((weak)) long long PRIMS_function_compare15(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare15");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare15");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare15 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare16
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare16
__attribute__((weak)) long long PRIMS_function_compare16()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "PRIMS_function_compare16");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare16");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare16 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare17
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare17
__attribute__((weak)) int PRIMS_function_compare17(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_compare17");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare17");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare17 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare18
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare18
__attribute__((weak)) double PRIMS_function_compare18(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_compare18");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare18");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare18 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare19
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare19
__attribute__((weak)) double PRIMS_function_compare19(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_compare19");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare19");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare19 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare20
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare20
__attribute__((weak)) int PRIMS_function_compare20(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare20");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare20");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare20 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare21
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare21
__attribute__((weak)) int PRIMS_function_compare21(/* INPUT */long long A_1, /* INPUT */void* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */void* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, void* A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare21");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare21");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare21 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare22
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare22
__attribute__((weak)) void* PRIMS_function_compare22(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, double A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare22");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare22");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare22 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare23
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare23
__attribute__((weak)) int PRIMS_function_compare23(/* INPUT */long long A_1, /* INPUT */void* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */void* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, void* A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare23");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare23");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare23 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare24
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare24
__attribute__((weak)) void* PRIMS_function_compare24(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, double A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare24");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare24");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare24 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare25
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare25
__attribute__((weak)) void* PRIMS_function_compare25(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, double A_2, int A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_compare25");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare25");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare25 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare26
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare26
__attribute__((weak)) double PRIMS_function_compare26(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare26");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare26");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare26 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare27
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare27
__attribute__((weak)) int PRIMS_function_compare27(/* INPUT */void* A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare27");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare27");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare27 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare28
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare28
__attribute__((weak)) int PRIMS_function_compare28(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_compare28");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare28");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare28 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare29
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare29
__attribute__((weak)) double PRIMS_function_compare29(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_compare29");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare29");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare29 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare30
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare30
__attribute__((weak)) int PRIMS_function_compare30(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_compare30");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare30");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare30 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare31
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare31
__attribute__((weak)) double PRIMS_function_compare31(/* INPUT */void* A_1, /* INPUT */void* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */void* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, void* A_2)) dlsym(RTLD_NEXT, "PRIMS_function_compare31");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare31");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare31 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare32
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare32
__attribute__((weak)) void* PRIMS_function_compare32(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, long long A_2, double A_3, double A_4, int A_5)) dlsym(RTLD_NEXT, "PRIMS_function_compare32");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare32");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare32 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare33
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare33
__attribute__((weak)) void* PRIMS_function_compare33(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, long long A_2, double A_3, double A_4, int A_5)) dlsym(RTLD_NEXT, "PRIMS_function_compare33");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare33");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare33 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare34
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare34
__attribute__((weak)) int PRIMS_function_compare34(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */void* A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */void* A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, double A_3, double A_4, void* A_5)) dlsym(RTLD_NEXT, "PRIMS_function_compare34");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare34");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare34 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare35
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare35
__attribute__((weak)) double PRIMS_function_compare35(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */int A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */int A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7, int A_8)) dlsym(RTLD_NEXT, "PRIMS_function_compare35");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare35");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare35 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_compare36
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_compare36
__attribute__((weak)) unsigned char PRIMS_function_compare36(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, long long A_4, double A_5, double A_6, double A_7, double A_8)) dlsym(RTLD_NEXT, "PRIMS_function_compare36");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_compare36");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_compare36 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_init
__attribute__((weak)) long long NPRIMS_pwl_func_init(/* INPUT */int A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */const char* A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, const char* A_2, long long A_3, long long* A_4)) dlsym(RTLD_NEXT, "NPRIMS_pwl_func_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_func_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_check
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_check
__attribute__((weak)) void NPRIMS_pwl_func_check(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_pwl_func_check");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_func_check");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_check */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb1
__attribute__((weak)) int NPRIMS_pwl_func_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_pwl_func_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_func_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb2
__attribute__((weak)) int NPRIMS_pwl_func_cb2(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* OUTPUT */long long *A_5, /* OUTPUT */long long *A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* OUTPUT */long long *A_5, /* OUTPUT */long long *A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, long long A_3, long long A_4, long long* A_5, long long* A_6)) dlsym(RTLD_NEXT, "NPRIMS_pwl_func_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_func_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb3
__attribute__((weak)) int NPRIMS_pwl_func_cb3(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */long long *A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */long long *A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, long long A_3, long long* A_4, double* A_5, long long* A_6)) dlsym(RTLD_NEXT, "NPRIMS_pwl_func_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_func_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_func_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc1
__attribute__((weak)) long long PRIMS_function_pwlfunc1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc2
__attribute__((weak)) long long PRIMS_function_pwlfunc2(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc3
__attribute__((weak)) long long PRIMS_function_pwlfunc3(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc4
__attribute__((weak)) long long PRIMS_function_pwlfunc4(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc5
__attribute__((weak)) long long PRIMS_function_pwlfunc5(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, long long A_4, int A_5)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc6
__attribute__((weak)) int PRIMS_function_pwlfunc6(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc7
__attribute__((weak)) double PRIMS_function_pwlfunc7(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, int A_3, int A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc8
__attribute__((weak)) long long PRIMS_function_pwlfunc8(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, long long A_4, int A_5, double A_6, double A_7, double A_8)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc9
__attribute__((weak)) long long PRIMS_function_pwlfunc9(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, long long A_4, int A_5)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc10
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc10
__attribute__((weak)) double PRIMS_function_pwlfunc10(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc10 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc11
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc11
__attribute__((weak)) void* PRIMS_function_pwlfunc11(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */int A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, long long A_2, int A_3, int A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc11");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc11");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc11 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc12
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc12
__attribute__((weak)) long long PRIMS_function_pwlfunc12(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */double A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */int A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */double A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, long long A_4, int A_5, double A_6, double A_7, double A_8, double A_9, double A_10)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc12");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc12");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc12 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc13
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc13
__attribute__((weak)) double PRIMS_function_pwlfunc13(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc13");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc13");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc13 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc14
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc14
__attribute__((weak)) void PRIMS_function_pwlfunc14(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc14");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc14");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc14 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc15
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc15
__attribute__((weak)) int PRIMS_function_pwlfunc15(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc15");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc15");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc15 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc16
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc16
__attribute__((weak)) double PRIMS_function_pwlfunc16(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc16");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc16");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc16 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc17
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc17
__attribute__((weak)) int PRIMS_function_pwlfunc17(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_pwlfunc17");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_pwlfunc17");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_pwlfunc17 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc18
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc18
__attribute__((weak)) int PRIMS_stim_pwlfunc18(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(const char* A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_pwlfunc18");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_pwlfunc18");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc18 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc19
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc19
__attribute__((weak)) long long PRIMS_stim_pwlfunc19(/* INPUT */const char* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_pwlfunc19");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_pwlfunc19");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_pwlfunc19 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_pwldata_read
#define __VCS_IMPORT_DPI_STUB_PRIMS_pwldata_read
__attribute__((weak)) long long PRIMS_pwldata_read(/* INPUT */const char* A_1, /* OUTPUT */int *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* OUTPUT */int *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1, int* A_2)) dlsym(RTLD_NEXT, "PRIMS_pwldata_read");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_pwldata_read");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_pwldata_read */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod1
__attribute__((weak)) long long PRIMS_function_integmod1(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_integmod1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod2
__attribute__((weak)) int PRIMS_function_integmod2(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_function_integmod2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod3
__attribute__((weak)) void PRIMS_function_integmod3(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_integmod3");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod3");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod4
__attribute__((weak)) void* PRIMS_function_integmod4(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */int A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, double A_2, double A_3, double A_4, int A_5)) dlsym(RTLD_NEXT, "PRIMS_function_integmod4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod5
__attribute__((weak)) double PRIMS_function_integmod5(/* INPUT */long long A_1, /* INPUT */void* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */void* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, void* A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_integmod5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod6
__attribute__((weak)) long long PRIMS_function_integmod6(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7, double A_8)) dlsym(RTLD_NEXT, "PRIMS_function_integmod6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod7
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod7
__attribute__((weak)) void* PRIMS_function_integmod7(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */int A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, int A_6)) dlsym(RTLD_NEXT, "PRIMS_function_integmod7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod8
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod8
__attribute__((weak)) int PRIMS_function_integmod8(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_integmod8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod9
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod9
__attribute__((weak)) double PRIMS_function_integmod9(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_integmod9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod10
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod10
__attribute__((weak)) double PRIMS_function_integmod10(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_function_integmod10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod10 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod11
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod11
__attribute__((weak)) int PRIMS_function_integmod11(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_function_integmod11");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_integmod11");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_integmod11 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_init
__attribute__((weak)) long long NPRIMS_minductor_init(/* INPUT */int A_1, /* OUTPUT */long long *A_2, /* OUTPUT */long long *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* OUTPUT */long long *A_2, /* OUTPUT */long long *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, long long* A_2, long long* A_3)) dlsym(RTLD_NEXT, "NPRIMS_minductor_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_minductor_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_check
#define __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_check
__attribute__((weak)) void NPRIMS_minductor_check(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1)) dlsym(RTLD_NEXT, "NPRIMS_minductor_check");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_minductor_check");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_minductor_check */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline1
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline1
__attribute__((weak)) long long PRIMS_function_tline1(/* INPUT */double A_1, /* INPUT */const char* A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */const char* A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, const char* A_2)) dlsym(RTLD_NEXT, "PRIMS_function_tline1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline2
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline2
__attribute__((weak)) double PRIMS_function_tline2(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_function_tline2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline3
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline3
__attribute__((weak)) int PRIMS_function_tline3(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */long long A_3, /* INPUT */long long A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2, long long A_3, long long A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_function_tline3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline4
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline4
__attribute__((weak)) double PRIMS_function_tline4(/* INPUT */double A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, long long A_2)) dlsym(RTLD_NEXT, "PRIMS_function_tline4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline5
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline5
__attribute__((weak)) double PRIMS_function_tline5(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_function_tline5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_function_tline6
#define __VCS_IMPORT_DPI_STUB_PRIMS_function_tline6
__attribute__((weak)) long long PRIMS_function_tline6(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_function_tline6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_function_tline6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_function_tline6 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_init
__attribute__((weak)) long long NPRIMS_buf_xbit_init(/* INPUT */double A_1, /* INPUT */long long A_2, /* INPUT */unsigned char A_3, /* INPUT */unsigned char A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */long long A_2, /* INPUT */unsigned char A_3, /* INPUT */unsigned char A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, long long A_2, unsigned char A_3, unsigned char A_4)) dlsym(RTLD_NEXT, "NPRIMS_buf_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_buf_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_cb1
__attribute__((weak)) void NPRIMS_buf_xbit_cb1(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */unsigned char *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* INPUT */long long A_3, /* OUTPUT */unsigned char *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, long long A_3, unsigned char* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_buf_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_buf_xbit_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_buf_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_init
__attribute__((weak)) long long NPRIMS_delay_xbit_init(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_delay_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb1
__attribute__((weak)) void NPRIMS_delay_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_delay_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_xbit_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb2
__attribute__((weak)) void NPRIMS_delay_xbit_cb2(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */double *A_3, /* OUTPUT */double *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */double *A_3, /* OUTPUT */double *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char* A_2, double* A_3, double* A_4, double* A_5, double* A_6, double* A_7)) dlsym(RTLD_NEXT, "NPRIMS_delay_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_xbit_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp1
__attribute__((weak)) double PRIMS_gate_interp1(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_gate_interp1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp2
__attribute__((weak)) double PRIMS_gate_interp2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7)) dlsym(RTLD_NEXT, "PRIMS_gate_interp2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp3
__attribute__((weak)) double PRIMS_gate_interp3(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_gate_interp3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp4
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp4
__attribute__((weak)) double PRIMS_gate_interp4(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_gate_interp4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp5
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp5
__attribute__((weak)) double PRIMS_gate_interp5(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_interp5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp6
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp6
__attribute__((weak)) double PRIMS_gate_interp6(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_interp6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_interp6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_interp6 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_init
__attribute__((weak)) long long NPRIMS_mux_xbit_init(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */int A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, int A_2, double A_3)) dlsym(RTLD_NEXT, "NPRIMS_mux_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_mux_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb1
__attribute__((weak)) int NPRIMS_mux_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_mux_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_mux_xbit_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb2
__attribute__((weak)) int NPRIMS_mux_xbit_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_mux_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_mux_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb3
__attribute__((weak)) int NPRIMS_mux_xbit_cb3(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_mux_xbit_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_mux_xbit_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_mux_xbit_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_init
__attribute__((weak)) long long NPRIMS_and_xbit_init(/* INPUT */int A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2)) dlsym(RTLD_NEXT, "NPRIMS_and_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_and_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb1
__attribute__((weak)) void NPRIMS_and_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_and_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_and_xbit_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb2
__attribute__((weak)) int NPRIMS_and_xbit_cb2(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_and_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_and_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_and_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_init
__attribute__((weak)) long long NPRIMS_or_xbit_init(/* INPUT */int A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2)) dlsym(RTLD_NEXT, "NPRIMS_or_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_or_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb1
__attribute__((weak)) void NPRIMS_or_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_or_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_or_xbit_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb2
__attribute__((weak)) int NPRIMS_or_xbit_cb2(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_or_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_or_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_or_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_init
__attribute__((weak)) long long NPRIMS_xor_xbit_init(/* INPUT */int A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2)) dlsym(RTLD_NEXT, "NPRIMS_xor_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_xor_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb1
__attribute__((weak)) int NPRIMS_xor_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_xor_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_xor_xbit_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb2
__attribute__((weak)) int NPRIMS_xor_xbit_cb2(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_xor_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_xor_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_xor_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_init
__attribute__((weak)) long long NPRIMS_tribuf_xbit_init(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_tribuf_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_tribuf_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb1
__attribute__((weak)) int NPRIMS_tribuf_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_tribuf_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_tribuf_xbit_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb2
__attribute__((weak)) int NPRIMS_tribuf_xbit_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_tribuf_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_tribuf_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb3
__attribute__((weak)) int NPRIMS_tribuf_xbit_cb3(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_tribuf_xbit_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_tribuf_xbit_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_tribuf_xbit_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_init
__attribute__((weak)) long long NPRIMS_latch_xbit_init(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "NPRIMS_latch_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_latch_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb1
__attribute__((weak)) int NPRIMS_latch_xbit_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_latch_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_latch_xbit_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb2
__attribute__((weak)) int NPRIMS_latch_xbit_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_latch_xbit_cb2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_latch_xbit_cb2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb3
__attribute__((weak)) int NPRIMS_latch_xbit_cb3(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */unsigned long long *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7, /* OUTPUT */double *A_8, /* OUTPUT */double *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, unsigned long long* A_4, double* A_5, double* A_6, double* A_7, double* A_8, double* A_9)) dlsym(RTLD_NEXT, "NPRIMS_latch_xbit_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_latch_xbit_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_latch_xbit_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff1
__attribute__((weak)) double PRIMS_gate_dff1(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff2
__attribute__((weak)) double PRIMS_gate_dff2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff3
__attribute__((weak)) unsigned char PRIMS_gate_dff3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff4
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff4
__attribute__((weak)) void* PRIMS_gate_dff4(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void* (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void* (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff5
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff5
__attribute__((weak)) unsigned char PRIMS_gate_dff5(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_gate_dff5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff6
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff6
__attribute__((weak)) double PRIMS_gate_dff6(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_gate_dff6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff7
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff7
__attribute__((weak)) double PRIMS_gate_dff7(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_gate_dff7");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff7");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff7 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff8
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff8
__attribute__((weak)) double PRIMS_gate_dff8(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_gate_dff8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff9
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff9
__attribute__((weak)) double PRIMS_gate_dff9(/* INPUT */void* A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */void* A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(void* A_1)) dlsym(RTLD_NEXT, "PRIMS_gate_dff9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync1
__attribute__((weak)) double PRIMS_gate_dff_set_sync1(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_sync1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_sync1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync2
__attribute__((weak)) double PRIMS_gate_dff_set_sync2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_sync2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_sync2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync3
__attribute__((weak)) unsigned char PRIMS_gate_dff_set_sync3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_sync3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_sync3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_sync3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync1
__attribute__((weak)) double PRIMS_gate_dff_rst_sync1(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_sync1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_sync1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync2
__attribute__((weak)) double PRIMS_gate_dff_rst_sync2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_sync2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_sync2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync3
__attribute__((weak)) unsigned char PRIMS_gate_dff_rst_sync3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_sync3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_sync3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_sync3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async1
__attribute__((weak)) double PRIMS_gate_dff_set_async1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_async1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_async1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async2
__attribute__((weak)) double PRIMS_gate_dff_set_async2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_async2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_async2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async3
__attribute__((weak)) unsigned char PRIMS_gate_dff_set_async3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_set_async3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_set_async3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_set_async3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async1
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async1
__attribute__((weak)) double PRIMS_gate_dff_rst_async1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_async1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_async1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async2
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async2
__attribute__((weak)) double PRIMS_gate_dff_rst_async2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_async2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_async2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async3
#define __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async3
__attribute__((weak)) unsigned char PRIMS_gate_dff_rst_async3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, long long A_2, long long A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_gate_dff_rst_async3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_gate_dff_rst_async3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_gate_dff_rst_async3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_clkgen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_clkgen1
__attribute__((weak)) long long PRIMS_stim_clkgen1(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, double A_3, double A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_stim_clkgen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_clkgen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_clkgen1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_init
__attribute__((weak)) long long NPRIMS_pulse_gen_init(/* INPUT */unsigned char A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */unsigned char A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */long long A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(unsigned char A_1, double A_2, double A_3, double A_4, long long A_5)) dlsym(RTLD_NEXT, "NPRIMS_pulse_gen_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pulse_gen_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_cb1
__attribute__((weak)) int NPRIMS_pulse_gen_cb1(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, int A_2, unsigned char* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_pulse_gen_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pulse_gen_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pulse_gen_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen1
__attribute__((weak)) long long PRIMS_stim_singen1(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_stim_singen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_singen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen2
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen2
__attribute__((weak)) long long PRIMS_stim_singen2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */double A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */double A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, double A_3, double A_4, double A_5, double A_6, double A_7, double A_8, double A_9, double A_10)) dlsym(RTLD_NEXT, "PRIMS_stim_singen2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_singen2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_singen2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_init
__attribute__((weak)) long long NPRIMS_pwl_gen_init(/* INPUT */int A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */const char* A_5, /* INPUT */long long A_6, /* OUTPUT */long long *A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */const char* A_5, /* INPUT */long long A_6, /* OUTPUT */long long *A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2, double A_3, double A_4, const char* A_5, long long A_6, long long* A_7)) dlsym(RTLD_NEXT, "NPRIMS_pwl_gen_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_gen_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb0
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb0
__attribute__((weak)) void NPRIMS_pwl_gen_cb0(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long* A_2, double* A_3)) dlsym(RTLD_NEXT, "NPRIMS_pwl_gen_cb0");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_gen_cb0");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb0 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb1
__attribute__((weak)) void NPRIMS_pwl_gen_cb1(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long* A_2, double* A_3)) dlsym(RTLD_NEXT, "NPRIMS_pwl_gen_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_pwl_gen_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_pwl_gen_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen1
__attribute__((weak)) long long PRIMS_stim_expgen1(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_expgen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_expgen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen2
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen2
__attribute__((weak)) long long PRIMS_stim_expgen2(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_stim_expgen2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_expgen2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen3
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen3
__attribute__((weak)) long long PRIMS_stim_expgen3(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_stim_expgen3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_expgen3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_expgen3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_readfile
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_readfile
__attribute__((weak)) long long PRIMS_stim_patgen_readfile(/* INPUT */const char* A_1, /* OUTPUT */int *A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* OUTPUT */int *A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1, int* A_2)) dlsym(RTLD_NEXT, "PRIMS_stim_patgen_readfile");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_patgen_readfile");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_readfile */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_getelem
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_getelem
__attribute__((weak)) double PRIMS_stim_patgen_getelem(/* INPUT */long long A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, int A_2)) dlsym(RTLD_NEXT, "PRIMS_stim_patgen_getelem");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_patgen_getelem");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_patgen_getelem */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen1
__attribute__((weak)) long long PRIMS_stim_dcgen1(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_dcgen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_dcgen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen2
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen2
__attribute__((weak)) long long PRIMS_stim_dcgen2(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_dcgen2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_dcgen2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_dcgen2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen1
__attribute__((weak)) long long PRIMS_stim_noisegen1(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_noisegen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_noisegen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen2
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen2
__attribute__((weak)) long long PRIMS_stim_noisegen2(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_noisegen2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_noisegen2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_noisegen2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen1
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen1
__attribute__((weak)) long long PRIMS_stim_stepgen1(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_stepgen1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_stepgen1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen2
#define __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen2
__attribute__((weak)) long long PRIMS_stim_stepgen2(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_stim_stepgen2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_stim_stepgen2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_stim_stepgen2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_init
__attribute__((weak)) long long NPRIMS_replay_xreal_init(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */long long A_10
)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */double A_7, /* INPUT */double A_8, /* INPUT */double A_9, /* INPUT */long long A_10
) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1, const char* A_2, double A_3, double A_4, double A_5, double A_6, double A_7, double A_8, double A_9, long long A_10)) dlsym(RTLD_NEXT, "NPRIMS_replay_xreal_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9, A_10);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xreal_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb0
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb0
__attribute__((weak)) void NPRIMS_replay_xreal_cb0(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long* A_2, double* A_3)) dlsym(RTLD_NEXT, "NPRIMS_replay_xreal_cb0");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xreal_cb0");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb0 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb1
__attribute__((weak)) void NPRIMS_replay_xreal_cb1(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */long long *A_2, /* OUTPUT */double *A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long* A_2, double* A_3)) dlsym(RTLD_NEXT, "NPRIMS_replay_xreal_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xreal_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xreal_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_init
__attribute__((weak)) long long NPRIMS_replay_xbit_init(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */long long A_7, /* OUTPUT */long long *A_8, /* OUTPUT */long long *A_9)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */const char* A_1, /* INPUT */const char* A_2, /* INPUT */int A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6, /* INPUT */long long A_7, /* OUTPUT */long long *A_8, /* OUTPUT */long long *A_9) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(const char* A_1, const char* A_2, int A_3, double A_4, double A_5, double A_6, long long A_7, long long* A_8, long long* A_9)) dlsym(RTLD_NEXT, "NPRIMS_replay_xbit_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7, A_8, A_9);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xbit_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb0
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb0
__attribute__((weak)) void NPRIMS_replay_xbit_cb0(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, unsigned char* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_replay_xbit_cb0");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xbit_cb0");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb0 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb1
__attribute__((weak)) void NPRIMS_replay_xbit_cb1(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */int A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, int A_2, unsigned char* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_replay_xbit_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_replay_xbit_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_replay_xbit_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber1
#define __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber1
__attribute__((weak)) double PRIMS_meas_probeber1(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_meas_probeber1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_meas_probeber1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber2
#define __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber2
__attribute__((weak)) double PRIMS_meas_probeber2(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_meas_probeber2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_meas_probeber2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber3
#define __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber3
__attribute__((weak)) unsigned char PRIMS_meas_probeber3(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static unsigned char (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (unsigned char (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_meas_probeber3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_meas_probeber3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber4
#define __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber4
__attribute__((weak)) double PRIMS_meas_probeber4(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_meas_probeber4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_meas_probeber4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber5
#define __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber5
__attribute__((weak)) double PRIMS_meas_probeber5(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4, /* INPUT */double A_5, /* INPUT */double A_6) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4, double A_5, double A_6)) dlsym(RTLD_NEXT, "PRIMS_meas_probeber5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_meas_probeber5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_meas_probeber5 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_init
__attribute__((weak)) long long NPRIMS_trig_time_init(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* OUTPUT */long long *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */int A_3, /* OUTPUT */long long *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, int A_3, long long* A_4)) dlsym(RTLD_NEXT, "NPRIMS_trig_time_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_trig_time_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb1
__attribute__((weak)) void NPRIMS_trig_time_cb1(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */unsigned long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */int *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */unsigned long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */int *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char* A_2, unsigned long long* A_3, double* A_4, int* A_5)) dlsym(RTLD_NEXT, "NPRIMS_trig_time_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_trig_time_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb2
__attribute__((weak)) void NPRIMS_trig_time_cb2(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */unsigned long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */int *A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */unsigned long long *A_3, /* OUTPUT */double *A_4, /* OUTPUT */int *A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char* A_2, unsigned long long* A_3, double* A_4, int* A_5)) dlsym(RTLD_NEXT, "NPRIMS_trig_time_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_trig_time_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_trig_time_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_init
__attribute__((weak)) long long NPRIMS_trig_edge_init(/* INPUT */int A_1, /* INPUT */double A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1, /* INPUT */double A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1, double A_2, int A_3)) dlsym(RTLD_NEXT, "NPRIMS_trig_edge_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_trig_edge_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_cb1
__attribute__((weak)) void NPRIMS_trig_edge_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */unsigned char *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, unsigned char* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_trig_edge_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_trig_edge_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_trig_edge_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_init
__attribute__((weak)) long long NPRIMS_meas_time_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_time_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_time_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_cb1
__attribute__((weak)) double NPRIMS_meas_time_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_meas_time_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_time_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_time_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_init
__attribute__((weak)) long long NPRIMS_meas_value_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_value_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_value_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_cb1
__attribute__((weak)) double NPRIMS_meas_value_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_meas_value_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_value_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_value_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_init
__attribute__((weak)) long long NPRIMS_meas_deriv_init(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1)) dlsym(RTLD_NEXT, "NPRIMS_meas_deriv_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_deriv_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_cb1
__attribute__((weak)) double NPRIMS_meas_deriv_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_meas_deriv_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_deriv_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_deriv_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_init
__attribute__((weak)) long long NPRIMS_meas_max_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_max_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_max_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb1
__attribute__((weak)) void NPRIMS_meas_max_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_max_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_max_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb2
__attribute__((weak)) void NPRIMS_meas_max_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_max_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_max_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb3
__attribute__((weak)) double NPRIMS_meas_max_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_max_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_max_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_max_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_init
__attribute__((weak)) long long NPRIMS_meas_min_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_min_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_min_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb1
__attribute__((weak)) void NPRIMS_meas_min_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_min_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_min_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb2
__attribute__((weak)) void NPRIMS_meas_min_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_min_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_min_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb3
__attribute__((weak)) double NPRIMS_meas_min_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_min_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_min_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_min_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_init
__attribute__((weak)) long long NPRIMS_meas_pp_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_pp_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_pp_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb1
__attribute__((weak)) void NPRIMS_meas_pp_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_pp_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_pp_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb2
__attribute__((weak)) void NPRIMS_meas_pp_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_pp_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_pp_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb3
__attribute__((weak)) double NPRIMS_meas_pp_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_pp_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_pp_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_pp_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_init
__attribute__((weak)) long long NPRIMS_meas_integ_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_integ_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_integ_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb1
__attribute__((weak)) void NPRIMS_meas_integ_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_integ_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_integ_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb2
__attribute__((weak)) void NPRIMS_meas_integ_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_integ_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_integ_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb3
__attribute__((weak)) double NPRIMS_meas_integ_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_integ_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_integ_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_integ_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_init
__attribute__((weak)) long long NPRIMS_meas_avg_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_avg_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_avg_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb1
__attribute__((weak)) void NPRIMS_meas_avg_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_avg_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_avg_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb2
__attribute__((weak)) void NPRIMS_meas_avg_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_avg_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_avg_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb3
__attribute__((weak)) double NPRIMS_meas_avg_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_avg_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_avg_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_avg_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_init
__attribute__((weak)) long long NPRIMS_meas_rms_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_meas_rms_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_rms_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb1
__attribute__((weak)) void NPRIMS_meas_rms_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_rms_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_rms_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb2
__attribute__((weak)) void NPRIMS_meas_rms_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_rms_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_rms_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb3
__attribute__((weak)) double NPRIMS_meas_rms_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3, /* INPUT */long long A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, long long A_3, long long A_4)) dlsym(RTLD_NEXT, "NPRIMS_meas_rms_cb3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_meas_rms_cb3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_meas_rms_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2duty1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2duty1
__attribute__((weak)) long long PRIMS_vdt_clk2duty1(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2duty1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2duty1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2duty1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_init
__attribute__((weak)) long long NPRIMS_clk_to_freq_init()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "NPRIMS_clk_to_freq_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_clk_to_freq_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_cb1
__attribute__((weak)) int NPRIMS_clk_to_freq_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_clk_to_freq_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_clk_to_freq_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_freq_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2period1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2period1
__attribute__((weak)) long long PRIMS_vdt_clk2period1(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2period1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2period1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2period1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_init
__attribute__((weak)) long long NPRIMS_clk_to_phase_init(/* INPUT */double A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, int A_2)) dlsym(RTLD_NEXT, "NPRIMS_clk_to_phase_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_clk_to_phase_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_cb1
__attribute__((weak)) int NPRIMS_clk_to_phase_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_clk_to_phase_cb1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_clk_to_phase_cb1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_clk_to_phase_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay1
__attribute__((weak)) double PRIMS_vdt_clk2delay1(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2delay1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2delay1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay2
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay2
__attribute__((weak)) double PRIMS_vdt_clk2delay2(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2delay2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2delay2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay3
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay3
__attribute__((weak)) long long PRIMS_vdt_clk2delay3(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2delay3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2delay3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay4
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay4
__attribute__((weak)) double PRIMS_vdt_clk2delay4(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_vdt_clk2delay4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_clk2delay4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_clk2delay4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk1
__attribute__((weak)) long long PRIMS_vdt_freq2clk1()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)()) dlsym(RTLD_NEXT, "PRIMS_vdt_freq2clk1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_freq2clk1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk2
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk2
__attribute__((weak)) long long PRIMS_vdt_freq2clk2(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_freq2clk2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_freq2clk2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk3
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk3
__attribute__((weak)) long long PRIMS_vdt_freq2clk3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, long long A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_freq2clk3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_freq2clk3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk4
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk4
__attribute__((weak)) void PRIMS_vdt_freq2clk4(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, long long A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_freq2clk4");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_freq2clk4");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_freq2clk4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk1
__attribute__((weak)) long long PRIMS_vdt_phase2clk1(/* INPUT */double A_1, /* INPUT */int A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */int A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, int A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk2
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk2
__attribute__((weak)) double PRIMS_vdt_phase2clk2(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk3
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk3
__attribute__((weak)) long long PRIMS_vdt_phase2clk3(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk3");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk3");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk4
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk4
__attribute__((weak)) int PRIMS_vdt_phase2clk4(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk4");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk4");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk4 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk5
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk5
__attribute__((weak)) long long PRIMS_vdt_phase2clk5(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, double A_2, int A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk5");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk5");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk5 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk6
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk6
__attribute__((weak)) double PRIMS_vdt_phase2clk6(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk6");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk6");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk6 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk8
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk8
__attribute__((weak)) int PRIMS_vdt_phase2clk8(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk8");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk8");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk8 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk9
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk9
__attribute__((weak)) double PRIMS_vdt_phase2clk9(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk9");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk9");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk9 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk10
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk10
__attribute__((weak)) long long PRIMS_vdt_phase2clk10(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(int A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk10 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk11
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk11
__attribute__((weak)) double PRIMS_vdt_phase2clk11(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk11");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk11");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk11 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk12
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk12
__attribute__((weak)) long long PRIMS_vdt_phase2clk12(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */int A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, int A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk12");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk12");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk12 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk13
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk13
__attribute__((weak)) int PRIMS_vdt_phase2clk13(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk13");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk13");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk13 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk14
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk14
__attribute__((weak)) long long PRIMS_vdt_phase2clk14(/* INPUT */long long A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk14");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk14");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk14 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk15
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk15
__attribute__((weak)) double PRIMS_vdt_phase2clk15(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */int A_4, /* INPUT */double A_5)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3, /* INPUT */int A_4, /* INPUT */double A_5) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3, int A_4, double A_5)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk15");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk15");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk15 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk16
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk16
__attribute__((weak)) int PRIMS_vdt_phase2clk16(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk16");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk16");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk16 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk17
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk17
__attribute__((weak)) double PRIMS_vdt_phase2clk17(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3, /* INPUT */double A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3, double A_4)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk17");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk17");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk17 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk18
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk18
__attribute__((weak)) int PRIMS_vdt_phase2clk18(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_phase2clk18");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_phase2clk18");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_phase2clk18 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_init
__attribute__((weak)) long long NPRIMS_delay_to_clk_init(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3, /* INPUT */int A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3, /* INPUT */int A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, long long A_3, int A_4)) dlsym(RTLD_NEXT, "NPRIMS_delay_to_clk_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_to_clk_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb1
__attribute__((weak)) void NPRIMS_delay_to_clk_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_delay_to_clk_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_to_clk_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb2
__attribute__((weak)) void NPRIMS_delay_to_clk_cb2(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_delay_to_clk_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_to_clk_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb3
__attribute__((weak)) void NPRIMS_delay_to_clk_cb3(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */double *A_3, /* OUTPUT */double *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* OUTPUT */unsigned char *A_2, /* OUTPUT */double *A_3, /* OUTPUT */double *A_4, /* OUTPUT */double *A_5, /* OUTPUT */double *A_6, /* OUTPUT */double *A_7) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, unsigned char* A_2, double* A_3, double* A_4, double* A_5, double* A_6, double* A_7)) dlsym(RTLD_NEXT, "NPRIMS_delay_to_clk_cb3");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4, A_5, A_6, A_7);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_delay_to_clk_cb3");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_delay_to_clk_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk1
__attribute__((weak)) long long PRIMS_vdt_period2clk1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_period2clk1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_period2clk1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk2
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk2
__attribute__((weak)) double PRIMS_vdt_period2clk2(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_vdt_period2clk2");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_period2clk2");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_period2clk2 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_vdt_duty2clk1
#define __VCS_IMPORT_DPI_STUB_PRIMS_vdt_duty2clk1
__attribute__((weak)) double PRIMS_vdt_duty2clk1(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_vdt_duty2clk1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_vdt_duty2clk1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_vdt_duty2clk1 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_connect_bit2xbit1
#define __VCS_IMPORT_DPI_STUB_PRIMS_connect_bit2xbit1
__attribute__((weak)) double PRIMS_connect_bit2xbit1(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2, double A_3)) dlsym(RTLD_NEXT, "PRIMS_connect_bit2xbit1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_connect_bit2xbit1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_connect_bit2xbit1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_init
__attribute__((weak)) long long NPRIMS_real_to_xreal_init(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */long long A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, double A_2, long long A_3)) dlsym(RTLD_NEXT, "NPRIMS_real_to_xreal_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_real_to_xreal_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb1
__attribute__((weak)) void NPRIMS_real_to_xreal_cb1(/* INPUT */long long A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, double A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_real_to_xreal_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_real_to_xreal_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb2
#define __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb2
__attribute__((weak)) void NPRIMS_real_to_xreal_cb2(/* INPUT */long long A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2, /* OUTPUT */long long *A_3, /* OUTPUT */double *A_4) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, double A_2, long long* A_3, double* A_4)) dlsym(RTLD_NEXT, "NPRIMS_real_to_xreal_cb2");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3, A_4);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_real_to_xreal_cb2");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb2 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb3
#define __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb3
__attribute__((weak)) void NPRIMS_real_to_xreal_cb3(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2, /* INPUT */double A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2, double A_3)) dlsym(RTLD_NEXT, "NPRIMS_real_to_xreal_cb3");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_real_to_xreal_cb3");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_real_to_xreal_cb3 */

#ifndef __VCS_IMPORT_DPI_STUB_PRIMS_connect_xreal2real1
#define __VCS_IMPORT_DPI_STUB_PRIMS_connect_xreal2real1
__attribute__((weak)) double PRIMS_connect_xreal2real1(/* INPUT */long long A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(long long A_1, double A_2)) dlsym(RTLD_NEXT, "PRIMS_connect_xreal2real1");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "PRIMS_connect_xreal2real1");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_PRIMS_connect_xreal2real1 */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_init
#define __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_init
__attribute__((weak)) long long NPRIMS_xbit_to_real_init(/* INPUT */double A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static long long (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (long long (*)(double A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_xbit_to_real_init");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_xbit_to_real_init");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_init */

#ifndef __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_cb1
#define __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_cb1
__attribute__((weak)) void NPRIMS_xbit_to_real_cb1(/* INPUT */long long A_1, /* INPUT */long long A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */long long A_1, /* INPUT */long long A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(long long A_1, long long A_2)) dlsym(RTLD_NEXT, "NPRIMS_xbit_to_real_cb1");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "NPRIMS_xbit_to_real_cb1");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_NPRIMS_xbit_to_real_cb1 */

#ifndef __VCS_IMPORT_DPI_STUB_math_sqrt
#define __VCS_IMPORT_DPI_STUB_math_sqrt
__attribute__((weak)) double math_sqrt(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_sqrt");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_sqrt");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_sqrt */

#ifndef __VCS_IMPORT_DPI_STUB_math_cos
#define __VCS_IMPORT_DPI_STUB_math_cos
__attribute__((weak)) double math_cos(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_cos");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_cos");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_cos */

#ifndef __VCS_IMPORT_DPI_STUB_math_sin
#define __VCS_IMPORT_DPI_STUB_math_sin
__attribute__((weak)) double math_sin(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_sin");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_sin");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_sin */

#ifndef __VCS_IMPORT_DPI_STUB_math_log
#define __VCS_IMPORT_DPI_STUB_math_log
__attribute__((weak)) double math_log(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_log");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_log");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_log */

#ifndef __VCS_IMPORT_DPI_STUB_math_log10
#define __VCS_IMPORT_DPI_STUB_math_log10
__attribute__((weak)) double math_log10(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_log10");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_log10");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_log10 */

#ifndef __VCS_IMPORT_DPI_STUB_math_fabs
#define __VCS_IMPORT_DPI_STUB_math_fabs
__attribute__((weak)) double math_fabs(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_fabs");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_fabs");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_fabs */

#ifndef __VCS_IMPORT_DPI_STUB_math_fmod
#define __VCS_IMPORT_DPI_STUB_math_fmod
__attribute__((weak)) double math_fmod(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "math_fmod");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_fmod");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_fmod */

#ifndef __VCS_IMPORT_DPI_STUB_math_round
#define __VCS_IMPORT_DPI_STUB_math_round
__attribute__((weak)) double math_round(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_round");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_round");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_round */

#ifndef __VCS_IMPORT_DPI_STUB_math_floor
#define __VCS_IMPORT_DPI_STUB_math_floor
__attribute__((weak)) double math_floor(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_floor");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_floor");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_floor */

#ifndef __VCS_IMPORT_DPI_STUB_math_ceil
#define __VCS_IMPORT_DPI_STUB_math_ceil
__attribute__((weak)) double math_ceil(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_ceil");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_ceil");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_ceil */

#ifndef __VCS_IMPORT_DPI_STUB_math_pow
#define __VCS_IMPORT_DPI_STUB_math_pow
__attribute__((weak)) double math_pow(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "math_pow");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_pow");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_pow */

#ifndef __VCS_IMPORT_DPI_STUB_math_erf
#define __VCS_IMPORT_DPI_STUB_math_erf
__attribute__((weak)) double math_erf(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_erf");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_erf");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_erf */

#ifndef __VCS_IMPORT_DPI_STUB_math_erfc
#define __VCS_IMPORT_DPI_STUB_math_erfc
__attribute__((weak)) double math_erfc(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "math_erfc");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "math_erfc");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_math_erfc */

#ifndef __VCS_IMPORT_DPI_STUB_ceil_float
#define __VCS_IMPORT_DPI_STUB_ceil_float
__attribute__((weak)) double ceil_float(/* INPUT */double A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1)) dlsym(RTLD_NEXT, "ceil_float");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "ceil_float");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_ceil_float */

#ifndef __VCS_IMPORT_DPI_STUB_eq_float
#define __VCS_IMPORT_DPI_STUB_eq_float
__attribute__((weak)) int eq_float(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */int A_3)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static int (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2, /* INPUT */int A_3) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (int (*)(double A_1, double A_2, int A_3)) dlsym(RTLD_NEXT, "eq_float");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2, A_3);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "eq_float");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_eq_float */

#ifndef __VCS_IMPORT_DPI_STUB_rand_seed
#define __VCS_IMPORT_DPI_STUB_rand_seed
__attribute__((weak)) void rand_seed(/* INPUT */int A_1)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static void (*_vcs_dpi_fp_)(/* INPUT */int A_1) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (void (*)(int A_1)) dlsym(RTLD_NEXT, "rand_seed");
    }
    if (_vcs_dpi_fp_) {
        _vcs_dpi_fp_(A_1);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "rand_seed");
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_rand_seed */

#ifndef __VCS_IMPORT_DPI_STUB_rand_gaussian
#define __VCS_IMPORT_DPI_STUB_rand_gaussian
__attribute__((weak)) double rand_gaussian(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "rand_gaussian");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "rand_gaussian");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_rand_gaussian */

#ifndef __VCS_IMPORT_DPI_STUB_rand_uniform
#define __VCS_IMPORT_DPI_STUB_rand_uniform
__attribute__((weak)) double rand_uniform(/* INPUT */double A_1, /* INPUT */double A_2)
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)(/* INPUT */double A_1, /* INPUT */double A_2) = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)(double A_1, double A_2)) dlsym(RTLD_NEXT, "rand_uniform");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_(A_1, A_2);
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "rand_uniform");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_rand_uniform */

#ifndef __VCS_IMPORT_DPI_STUB_rand_basic
#define __VCS_IMPORT_DPI_STUB_rand_basic
__attribute__((weak)) double rand_basic()
{
    static int _vcs_dpi_stub_initialized_ = 0;
    static double (*_vcs_dpi_fp_)() = NULL;
    if (!_vcs_dpi_stub_initialized_) {
        _vcs_dpi_stub_initialized_ = 1;
        _vcs_dpi_fp_ = (double (*)()) dlsym(RTLD_NEXT, "rand_basic");
    }
    if (_vcs_dpi_fp_) {
        return _vcs_dpi_fp_();
    } else {
        const char *fileName;
        int lineNumber;
        svGetCallerInfo(&fileName, &lineNumber);
        vcsMsgReport1("DPI-DIFNF", fileName, lineNumber, 0, 0, "rand_basic");
        return 0;
    }
}
#endif /* __VCS_IMPORT_DPI_STUB_rand_basic */


#ifdef __cplusplus
}
#endif

