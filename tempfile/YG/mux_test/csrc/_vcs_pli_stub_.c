#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif
#include <stdio.h>
#include <dlfcn.h>

#ifdef __cplusplus
extern "C" {
#endif

extern void* VCS_dlsymLookup(const char *);
extern void vcsMsgReportNoSource1(const char *, const char*);

/* PLI routine: $xmodel$gettimeprecision:call */
#ifndef __VCS_PLI_STUB_calltf_get_timeprec
#define __VCS_PLI_STUB_calltf_get_timeprec
extern void calltf_get_timeprec(int data, int reason);
#pragma weak calltf_get_timeprec
void calltf_get_timeprec(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_get_timeprec");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_get_timeprec");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_get_timeprec");
    }
}
void (*__vcs_pli_dummy_reference_calltf_get_timeprec)(int data, int reason) = calltf_get_timeprec;
#endif /* __VCS_PLI_STUB_calltf_get_timeprec */

/* PLI routine: $xmodel$getglobaltimeprecision:call */
#ifndef __VCS_PLI_STUB_calltf_get_timeprec_global
#define __VCS_PLI_STUB_calltf_get_timeprec_global
extern void calltf_get_timeprec_global(int data, int reason);
#pragma weak calltf_get_timeprec_global
void calltf_get_timeprec_global(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_get_timeprec_global");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_get_timeprec_global");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_get_timeprec_global");
    }
}
void (*__vcs_pli_dummy_reference_calltf_get_timeprec_global)(int data, int reason) = calltf_get_timeprec_global;
#endif /* __VCS_PLI_STUB_calltf_get_timeprec_global */

/* PLI routine: $xmodel$gettimeunit:call */
#ifndef __VCS_PLI_STUB_calltf_get_timeunit
#define __VCS_PLI_STUB_calltf_get_timeunit
extern void calltf_get_timeunit(int data, int reason);
#pragma weak calltf_get_timeunit
void calltf_get_timeunit(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_get_timeunit");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_get_timeunit");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_get_timeunit");
    }
}
void (*__vcs_pli_dummy_reference_calltf_get_timeunit)(int data, int reason) = calltf_get_timeunit;
#endif /* __VCS_PLI_STUB_calltf_get_timeunit */

/* PLI routine: $xmodel$getvloginfo:call */
#ifndef __VCS_PLI_STUB_calltf_get_vloginfo
#define __VCS_PLI_STUB_calltf_get_vloginfo
extern void calltf_get_vloginfo(int data, int reason);
#pragma weak calltf_get_vloginfo
void calltf_get_vloginfo(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_get_vloginfo");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_get_vloginfo");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_get_vloginfo");
    }
}
void (*__vcs_pli_dummy_reference_calltf_get_vloginfo)(int data, int reason) = calltf_get_vloginfo;
#endif /* __VCS_PLI_STUB_calltf_get_vloginfo */

/* PLI routine: $xmodel$getvarfullname:call */
#ifndef __VCS_PLI_STUB_calltf_var_fullname
#define __VCS_PLI_STUB_calltf_var_fullname
extern void calltf_var_fullname(int data, int reason);
#pragma weak calltf_var_fullname
void calltf_var_fullname(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_var_fullname");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_var_fullname");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_var_fullname");
    }
}
void (*__vcs_pli_dummy_reference_calltf_var_fullname)(int data, int reason) = calltf_var_fullname;
#endif /* __VCS_PLI_STUB_calltf_var_fullname */

/* PLI routine: $xmodel$getvardrivername:call */
#ifndef __VCS_PLI_STUB_calltf_var_drivername
#define __VCS_PLI_STUB_calltf_var_drivername
extern void calltf_var_drivername(int data, int reason);
#pragma weak calltf_var_drivername
void calltf_var_drivername(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_var_drivername");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_var_drivername");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_var_drivername");
    }
}
void (*__vcs_pli_dummy_reference_calltf_var_drivername)(int data, int reason) = calltf_var_drivername;
#endif /* __VCS_PLI_STUB_calltf_var_drivername */

/* PLI routine: $xmodel$checklogictype:call */
#ifndef __VCS_PLI_STUB_calltf_var_logictype
#define __VCS_PLI_STUB_calltf_var_logictype
extern void calltf_var_logictype(int data, int reason);
#pragma weak calltf_var_logictype
void calltf_var_logictype(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_var_logictype");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_var_logictype");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_var_logictype");
    }
}
void (*__vcs_pli_dummy_reference_calltf_var_logictype)(int data, int reason) = calltf_var_logictype;
#endif /* __VCS_PLI_STUB_calltf_var_logictype */

/* PLI routine: $xmodel$checkrealtype:call */
#ifndef __VCS_PLI_STUB_calltf_var_realtype
#define __VCS_PLI_STUB_calltf_var_realtype
extern void calltf_var_realtype(int data, int reason);
#pragma weak calltf_var_realtype
void calltf_var_realtype(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_var_realtype");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_var_realtype");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_var_realtype");
    }
}
void (*__vcs_pli_dummy_reference_calltf_var_realtype)(int data, int reason) = calltf_var_realtype;
#endif /* __VCS_PLI_STUB_calltf_var_realtype */

/* PLI routine: $xmodel$checklonginttype:call */
#ifndef __VCS_PLI_STUB_calltf_var_longinttype
#define __VCS_PLI_STUB_calltf_var_longinttype
extern void calltf_var_longinttype(int data, int reason);
#pragma weak calltf_var_longinttype
void calltf_var_longinttype(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_var_longinttype");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_var_longinttype");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_var_longinttype");
    }
}
void (*__vcs_pli_dummy_reference_calltf_var_longinttype)(int data, int reason) = calltf_var_longinttype;
#endif /* __VCS_PLI_STUB_calltf_var_longinttype */

/* PLI routine: $xmodel$scheduleevent:call */
#ifndef __VCS_PLI_STUB_calltf_event_schedule
#define __VCS_PLI_STUB_calltf_event_schedule
extern void calltf_event_schedule(int data, int reason);
#pragma weak calltf_event_schedule
void calltf_event_schedule(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_event_schedule");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_event_schedule");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_event_schedule");
    }
}
void (*__vcs_pli_dummy_reference_calltf_event_schedule)(int data, int reason) = calltf_event_schedule;
#endif /* __VCS_PLI_STUB_calltf_event_schedule */

/* PLI routine: $xmodel$overwriteevent:call */
#ifndef __VCS_PLI_STUB_calltf_event_overwrite
#define __VCS_PLI_STUB_calltf_event_overwrite
extern void calltf_event_overwrite(int data, int reason);
#pragma weak calltf_event_overwrite
void calltf_event_overwrite(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_event_overwrite");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_event_overwrite");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_event_overwrite");
    }
}
void (*__vcs_pli_dummy_reference_calltf_event_overwrite)(int data, int reason) = calltf_event_overwrite;
#endif /* __VCS_PLI_STUB_calltf_event_overwrite */

/* PLI routine: $xmodel$scheduleeventcallback:call */
#ifndef __VCS_PLI_STUB_calltf_schedule_event_callback
#define __VCS_PLI_STUB_calltf_schedule_event_callback
extern void calltf_schedule_event_callback(int data, int reason);
#pragma weak calltf_schedule_event_callback
void calltf_schedule_event_callback(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_schedule_event_callback");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_schedule_event_callback");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_schedule_event_callback");
    }
}
void (*__vcs_pli_dummy_reference_calltf_schedule_event_callback)(int data, int reason) = calltf_schedule_event_callback;
#endif /* __VCS_PLI_STUB_calltf_schedule_event_callback */

/* PLI routine: $xmodel$schedulechangecallback:call */
#ifndef __VCS_PLI_STUB_calltf_schedule_change_callback
#define __VCS_PLI_STUB_calltf_schedule_change_callback
extern void calltf_schedule_change_callback(int data, int reason);
#pragma weak calltf_schedule_change_callback
void calltf_schedule_change_callback(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_schedule_change_callback");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_schedule_change_callback");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_schedule_change_callback");
    }
}
void (*__vcs_pli_dummy_reference_calltf_schedule_change_callback)(int data, int reason) = calltf_schedule_change_callback;
#endif /* __VCS_PLI_STUB_calltf_schedule_change_callback */

/* PLI routine: $xmodel_dumpfile:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpfile
#define __VCS_PLI_STUB_calltf_xmodel_dumpfile
extern void calltf_xmodel_dumpfile(int data, int reason);
#pragma weak calltf_xmodel_dumpfile
void calltf_xmodel_dumpfile(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpfile");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpfile");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpfile");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpfile)(int data, int reason) = calltf_xmodel_dumpfile;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpfile */

/* PLI routine: $xmodel_dumpvars:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpvars
#define __VCS_PLI_STUB_calltf_xmodel_dumpvars
extern void calltf_xmodel_dumpvars(int data, int reason);
#pragma weak calltf_xmodel_dumpvars
void calltf_xmodel_dumpvars(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpvars");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpvars");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpvars");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpvars)(int data, int reason) = calltf_xmodel_dumpvars;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpvars */

/* PLI routine: $xmodel_dumpon:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpon
#define __VCS_PLI_STUB_calltf_xmodel_dumpon
extern void calltf_xmodel_dumpon(int data, int reason);
#pragma weak calltf_xmodel_dumpon
void calltf_xmodel_dumpon(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpon");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpon");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpon");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpon)(int data, int reason) = calltf_xmodel_dumpon;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpon */

/* PLI routine: $xmodel_dumpoff:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpoff
#define __VCS_PLI_STUB_calltf_xmodel_dumpoff
extern void calltf_xmodel_dumpoff(int data, int reason);
#pragma weak calltf_xmodel_dumpoff
void calltf_xmodel_dumpoff(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpoff");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpoff");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpoff");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpoff)(int data, int reason) = calltf_xmodel_dumpoff;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpoff */

/* PLI routine: $xmodel_dumpall:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpall
#define __VCS_PLI_STUB_calltf_xmodel_dumpall
extern void calltf_xmodel_dumpall(int data, int reason);
#pragma weak calltf_xmodel_dumpall
void calltf_xmodel_dumpall(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpall");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpall");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpall");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpall)(int data, int reason) = calltf_xmodel_dumpall;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpall */

/* PLI routine: $xmodel_dumpflush:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_dumpflush
#define __VCS_PLI_STUB_calltf_xmodel_dumpflush
extern void calltf_xmodel_dumpflush(int data, int reason);
#pragma weak calltf_xmodel_dumpflush
void calltf_xmodel_dumpflush(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_dumpflush");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_dumpflush");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_dumpflush");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_dumpflush)(int data, int reason) = calltf_xmodel_dumpflush;
#endif /* __VCS_PLI_STUB_calltf_xmodel_dumpflush */

/* PLI routine: $xmodel_reltime:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_xmodel_reltime
#define __VCS_PLI_STUB_NPRIMS_calltf_xmodel_reltime
extern void NPRIMS_calltf_xmodel_reltime(int data, int reason);
#pragma weak NPRIMS_calltf_xmodel_reltime
void NPRIMS_calltf_xmodel_reltime(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_xmodel_reltime");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_xmodel_reltime");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_xmodel_reltime");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_xmodel_reltime)(int data, int reason) = NPRIMS_calltf_xmodel_reltime;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_xmodel_reltime */

/* PLI routine: $xmodel_abstime:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_xmodel_abstime
#define __VCS_PLI_STUB_NPRIMS_calltf_xmodel_abstime
extern void NPRIMS_calltf_xmodel_abstime(int data, int reason);
#pragma weak NPRIMS_calltf_xmodel_abstime
void NPRIMS_calltf_xmodel_abstime(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_xmodel_abstime");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_xmodel_abstime");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_xmodel_abstime");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_xmodel_abstime)(int data, int reason) = NPRIMS_calltf_xmodel_abstime;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_xmodel_abstime */

/* PLI routine: $xmodel_sample:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_xmodel_sample
#define __VCS_PLI_STUB_NPRIMS_calltf_xmodel_sample
extern void NPRIMS_calltf_xmodel_sample(int data, int reason);
#pragma weak NPRIMS_calltf_xmodel_sample
void NPRIMS_calltf_xmodel_sample(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_xmodel_sample");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_xmodel_sample");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_xmodel_sample");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_xmodel_sample)(int data, int reason) = NPRIMS_calltf_xmodel_sample;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_xmodel_sample */

/* PLI routine: $xmodel_force:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_xmodel_force
#define __VCS_PLI_STUB_NPRIMS_calltf_xmodel_force
extern void NPRIMS_calltf_xmodel_force(int data, int reason);
#pragma weak NPRIMS_calltf_xmodel_force
void NPRIMS_calltf_xmodel_force(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_xmodel_force");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_xmodel_force");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_xmodel_force");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_xmodel_force)(int data, int reason) = NPRIMS_calltf_xmodel_force;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_xmodel_force */

/* PLI routine: $xmodel_release:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_xmodel_release
#define __VCS_PLI_STUB_NPRIMS_calltf_xmodel_release
extern void NPRIMS_calltf_xmodel_release(int data, int reason);
#pragma weak NPRIMS_calltf_xmodel_release
void NPRIMS_calltf_xmodel_release(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_xmodel_release");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_xmodel_release");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_xmodel_release");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_xmodel_release)(int data, int reason) = NPRIMS_calltf_xmodel_release;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_xmodel_release */

/* PLI routine: $xmodel_error:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_error
#define __VCS_PLI_STUB_calltf_xmodel_error
extern void calltf_xmodel_error(int data, int reason);
#pragma weak calltf_xmodel_error
void calltf_xmodel_error(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_error");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_error");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_error");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_error)(int data, int reason) = calltf_xmodel_error;
#endif /* __VCS_PLI_STUB_calltf_xmodel_error */

/* PLI routine: $xmodel_warning:call */
#ifndef __VCS_PLI_STUB_calltf_xmodel_warning
#define __VCS_PLI_STUB_calltf_xmodel_warning
extern void calltf_xmodel_warning(int data, int reason);
#pragma weak calltf_xmodel_warning
void calltf_xmodel_warning(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_xmodel_warning");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_xmodel_warning");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_xmodel_warning");
    }
}
void (*__vcs_pli_dummy_reference_calltf_xmodel_warning)(int data, int reason) = calltf_xmodel_warning;
#endif /* __VCS_PLI_STUB_calltf_xmodel_warning */

/* PLI routine: $xmodel$dc_gen:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_dc_gen
#define __VCS_PLI_STUB_PRIMS_calltf_dc_gen
extern void PRIMS_calltf_dc_gen(int data, int reason);
#pragma weak PRIMS_calltf_dc_gen
void PRIMS_calltf_dc_gen(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_dc_gen");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_dc_gen");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_dc_gen");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_dc_gen)(int data, int reason) = PRIMS_calltf_dc_gen;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_dc_gen */

/* PLI routine: $xmodel$noise_gen:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_noise_gen
#define __VCS_PLI_STUB_PRIMS_calltf_noise_gen
extern void PRIMS_calltf_noise_gen(int data, int reason);
#pragma weak PRIMS_calltf_noise_gen
void PRIMS_calltf_noise_gen(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_noise_gen");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_noise_gen");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_noise_gen");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_noise_gen)(int data, int reason) = PRIMS_calltf_noise_gen;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_noise_gen */

/* PLI routine: $xmodel$const_xbit:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_const_xbit
#define __VCS_PLI_STUB_PRIMS_calltf_const_xbit
extern void PRIMS_calltf_const_xbit(int data, int reason);
#pragma weak PRIMS_calltf_const_xbit
void PRIMS_calltf_const_xbit(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_const_xbit");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_const_xbit");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_const_xbit");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_const_xbit)(int data, int reason) = PRIMS_calltf_const_xbit;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_const_xbit */

/* PLI routine: $xmodel$xbit_to_bit:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_xbit_to_bit
#define __VCS_PLI_STUB_PRIMS_calltf_xbit_to_bit
extern void PRIMS_calltf_xbit_to_bit(int data, int reason);
#pragma weak PRIMS_calltf_xbit_to_bit
void PRIMS_calltf_xbit_to_bit(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_xbit_to_bit");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_xbit_to_bit");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_xbit_to_bit");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_xbit_to_bit)(int data, int reason) = PRIMS_calltf_xbit_to_bit;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_xbit_to_bit */

/* PLI routine: $xmodel$xreal_to_real:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_xreal_to_real
#define __VCS_PLI_STUB_PRIMS_calltf_xreal_to_real
extern void PRIMS_calltf_xreal_to_real(int data, int reason);
#pragma weak PRIMS_calltf_xreal_to_real
void PRIMS_calltf_xreal_to_real(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_xreal_to_real");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_xreal_to_real");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_xreal_to_real");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_xreal_to_real)(int data, int reason) = PRIMS_calltf_xreal_to_real;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_xreal_to_real */

/* PLI routine: $xmodel$multi_tline_init:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_multi_tline_init
#define __VCS_PLI_STUB_PRIMS_calltf_multi_tline_init
extern void PRIMS_calltf_multi_tline_init(int data, int reason);
#pragma weak PRIMS_calltf_multi_tline_init
void PRIMS_calltf_multi_tline_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_multi_tline_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_multi_tline_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_multi_tline_init");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_multi_tline_init)(int data, int reason) = PRIMS_calltf_multi_tline_init;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_multi_tline_init */

/* PLI routine: $xmodel$multi_tline_dc_event:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_multi_tline_dc_event
#define __VCS_PLI_STUB_PRIMS_calltf_multi_tline_dc_event
extern void PRIMS_calltf_multi_tline_dc_event(int data, int reason);
#pragma weak PRIMS_calltf_multi_tline_dc_event
void PRIMS_calltf_multi_tline_dc_event(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_multi_tline_dc_event");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_multi_tline_dc_event");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_multi_tline_dc_event");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_multi_tline_dc_event)(int data, int reason) = PRIMS_calltf_multi_tline_dc_event;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_multi_tline_dc_event */

/* PLI routine: $xmodel$multi_tline_event:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_multi_tline_event
#define __VCS_PLI_STUB_PRIMS_calltf_multi_tline_event
extern void PRIMS_calltf_multi_tline_event(int data, int reason);
#pragma weak PRIMS_calltf_multi_tline_event
void PRIMS_calltf_multi_tline_event(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_multi_tline_event");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_multi_tline_event");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_multi_tline_event");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_multi_tline_event)(int data, int reason) = PRIMS_calltf_multi_tline_event;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_multi_tline_event */

/* PLI routine: $xmodel$slice_init:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_slice_init
#define __VCS_PLI_STUB_PRIMS_calltf_slice_init
extern void PRIMS_calltf_slice_init(int data, int reason);
#pragma weak PRIMS_calltf_slice_init
void PRIMS_calltf_slice_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_slice_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_slice_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_slice_init");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_slice_init)(int data, int reason) = PRIMS_calltf_slice_init;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_slice_init */

/* PLI routine: $xmodel$transition_init:call */
#ifndef __VCS_PLI_STUB_PRIMS_calltf_transition_init
#define __VCS_PLI_STUB_PRIMS_calltf_transition_init
extern void PRIMS_calltf_transition_init(int data, int reason);
#pragma weak PRIMS_calltf_transition_init
void PRIMS_calltf_transition_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "PRIMS_calltf_transition_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("PRIMS_calltf_transition_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "PRIMS_calltf_transition_init");
    }
}
void (*__vcs_pli_dummy_reference_PRIMS_calltf_transition_init)(int data, int reason) = PRIMS_calltf_transition_init;
#endif /* __VCS_PLI_STUB_PRIMS_calltf_transition_init */

/* PLI routine: $xmodel$prim_init:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_prim_init
#define __VCS_PLI_STUB_NPRIMS_calltf_prim_init
extern void NPRIMS_calltf_prim_init(int data, int reason);
#pragma weak NPRIMS_calltf_prim_init
void NPRIMS_calltf_prim_init(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_prim_init");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_prim_init");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_prim_init");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_prim_init)(int data, int reason) = NPRIMS_calltf_prim_init;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_prim_init */

/* PLI routine: $xmodel$get_handle:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_get_handle
#define __VCS_PLI_STUB_NPRIMS_calltf_get_handle
extern void NPRIMS_calltf_get_handle(int data, int reason);
#pragma weak NPRIMS_calltf_get_handle
void NPRIMS_calltf_get_handle(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_get_handle");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_get_handle");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_get_handle");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_get_handle)(int data, int reason) = NPRIMS_calltf_get_handle;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_get_handle */

/* PLI routine: $xmodel$schedule_event:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_schedule_event
#define __VCS_PLI_STUB_NPRIMS_calltf_schedule_event
extern void NPRIMS_calltf_schedule_event(int data, int reason);
#pragma weak NPRIMS_calltf_schedule_event
void NPRIMS_calltf_schedule_event(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_schedule_event");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_schedule_event");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_schedule_event");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_schedule_event)(int data, int reason) = NPRIMS_calltf_schedule_event;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_schedule_event */

/* PLI routine: $xmodel$cancel_event:call */
#ifndef __VCS_PLI_STUB_NPRIMS_calltf_cancel_event
#define __VCS_PLI_STUB_NPRIMS_calltf_cancel_event
extern void NPRIMS_calltf_cancel_event(int data, int reason);
#pragma weak NPRIMS_calltf_cancel_event
void NPRIMS_calltf_cancel_event(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "NPRIMS_calltf_cancel_event");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("NPRIMS_calltf_cancel_event");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "NPRIMS_calltf_cancel_event");
    }
}
void (*__vcs_pli_dummy_reference_NPRIMS_calltf_cancel_event)(int data, int reason) = NPRIMS_calltf_cancel_event;
#endif /* __VCS_PLI_STUB_NPRIMS_calltf_cancel_event */

/* PLI routine: $xmodel$cktsim:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim
#define __VCS_PLI_STUB_calltf_cktsim
extern void calltf_cktsim(int data, int reason);
#pragma weak calltf_cktsim
void calltf_cktsim(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim)(int data, int reason) = calltf_cktsim;
#endif /* __VCS_PLI_STUB_calltf_cktsim */

/* PLI routine: $xmodel$cktsim:check */
#ifndef __VCS_PLI_STUB_compiletf_cktsim
#define __VCS_PLI_STUB_compiletf_cktsim
extern void compiletf_cktsim(int data, int reason);
#pragma weak compiletf_cktsim
void compiletf_cktsim(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "compiletf_cktsim");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("compiletf_cktsim");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_compiletf_cktsim)(int data, int reason) = compiletf_cktsim;
#endif /* __VCS_PLI_STUB_compiletf_cktsim */

/* PLI routine: $xmodel$setasinput:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim_setinput
#define __VCS_PLI_STUB_calltf_cktsim_setinput
extern void calltf_cktsim_setinput(int data, int reason);
#pragma weak calltf_cktsim_setinput
void calltf_cktsim_setinput(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim_setinput");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim_setinput");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim_setinput");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim_setinput)(int data, int reason) = calltf_cktsim_setinput;
#endif /* __VCS_PLI_STUB_calltf_cktsim_setinput */

/* PLI routine: $xmodel$setasinput:check */
#ifndef __VCS_PLI_STUB_compiletf_cktsim_setinput
#define __VCS_PLI_STUB_compiletf_cktsim_setinput
extern void compiletf_cktsim_setinput(int data, int reason);
#pragma weak compiletf_cktsim_setinput
void compiletf_cktsim_setinput(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "compiletf_cktsim_setinput");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("compiletf_cktsim_setinput");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    }
}
void (*__vcs_pli_dummy_reference_compiletf_cktsim_setinput)(int data, int reason) = compiletf_cktsim_setinput;
#endif /* __VCS_PLI_STUB_compiletf_cktsim_setinput */

/* PLI routine: $xmodel$cktsim_switch:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim_switch
#define __VCS_PLI_STUB_calltf_cktsim_switch
extern void calltf_cktsim_switch(int data, int reason);
#pragma weak calltf_cktsim_switch
void calltf_cktsim_switch(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim_switch");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim_switch");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim_switch");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim_switch)(int data, int reason) = calltf_cktsim_switch;
#endif /* __VCS_PLI_STUB_calltf_cktsim_switch */

/* PLI routine: $xmodel$cktsim_rlcsw:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim_rlcsw
#define __VCS_PLI_STUB_calltf_cktsim_rlcsw
extern void calltf_cktsim_rlcsw(int data, int reason);
#pragma weak calltf_cktsim_rlcsw
void calltf_cktsim_rlcsw(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim_rlcsw");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim_rlcsw");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim_rlcsw");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim_rlcsw)(int data, int reason) = calltf_cktsim_rlcsw;
#endif /* __VCS_PLI_STUB_calltf_cktsim_rlcsw */

/* PLI routine: $xmodel$cktsim_rlcidx:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim_rlcidx
#define __VCS_PLI_STUB_calltf_cktsim_rlcidx
extern void calltf_cktsim_rlcidx(int data, int reason);
#pragma weak calltf_cktsim_rlcidx
void calltf_cktsim_rlcidx(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim_rlcidx");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim_rlcidx");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim_rlcidx");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim_rlcidx)(int data, int reason) = calltf_cktsim_rlcidx;
#endif /* __VCS_PLI_STUB_calltf_cktsim_rlcidx */

/* PLI routine: $xmodel$cktsim_mosidx:call */
#ifndef __VCS_PLI_STUB_calltf_cktsim_mosidx
#define __VCS_PLI_STUB_calltf_cktsim_mosidx
extern void calltf_cktsim_mosidx(int data, int reason);
#pragma weak calltf_cktsim_mosidx
void calltf_cktsim_mosidx(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_cktsim_mosidx");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_cktsim_mosidx");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_cktsim_mosidx");
    }
}
void (*__vcs_pli_dummy_reference_calltf_cktsim_mosidx)(int data, int reason) = calltf_cktsim_mosidx;
#endif /* __VCS_PLI_STUB_calltf_cktsim_mosidx */

/* PLI routine: $xmodel$cktsim_debug:call */
#ifndef __VCS_PLI_STUB_calltf_CKTSIM_DEBUG
#define __VCS_PLI_STUB_calltf_CKTSIM_DEBUG
extern void calltf_CKTSIM_DEBUG(int data, int reason);
#pragma weak calltf_CKTSIM_DEBUG
void calltf_CKTSIM_DEBUG(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_CKTSIM_DEBUG");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_CKTSIM_DEBUG");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_CKTSIM_DEBUG");
    }
}
void (*__vcs_pli_dummy_reference_calltf_CKTSIM_DEBUG)(int data, int reason) = calltf_CKTSIM_DEBUG;
#endif /* __VCS_PLI_STUB_calltf_CKTSIM_DEBUG */

/* PLI routine: $xmodel$cktsim_profile:call */
#ifndef __VCS_PLI_STUB_calltf_CKTSIM_PROFILE
#define __VCS_PLI_STUB_calltf_CKTSIM_PROFILE
extern void calltf_CKTSIM_PROFILE(int data, int reason);
#pragma weak calltf_CKTSIM_PROFILE
void calltf_CKTSIM_PROFILE(int data, int reason)
{
    static int _vcs_pli_stub_initialized_ = 0;
    static void (*_vcs_pli_fp_)(int data, int reason) = NULL;
    if (!_vcs_pli_stub_initialized_) {
        _vcs_pli_stub_initialized_ = 1;
        _vcs_pli_fp_ = (void (*)(int data, int reason)) dlsym(RTLD_NEXT, "calltf_CKTSIM_PROFILE");
        if (_vcs_pli_fp_ == NULL) {
            _vcs_pli_fp_ = (void (*)(int data, int reason)) VCS_dlsymLookup("calltf_CKTSIM_PROFILE");
        }
    }
    if (_vcs_pli_fp_) {
        _vcs_pli_fp_(data, reason);
    } else {
        vcsMsgReportNoSource1("PLI-DIFNF", "calltf_CKTSIM_PROFILE");
    }
}
void (*__vcs_pli_dummy_reference_calltf_CKTSIM_PROFILE)(int data, int reason) = calltf_CKTSIM_PROFILE;
#endif /* __VCS_PLI_STUB_calltf_CKTSIM_PROFILE */

#ifdef __cplusplus
}
#endif
