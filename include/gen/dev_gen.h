//
// include/gen/dev_gen.h
// Generated by AMC
//
// (C) AlgoEngineering LLC 2008-2013
// (C) NYSE | Intercontinental Exchange 2013-2016
//


#pragma once
#include "include/gen/algo_gen.h"
//#pragma endinclude
extern const char *  dev_Arch_arch_;         //           fconst:dev.Arch.arch/
extern const char *  dev_Arch_arch_i386;     // i386      fconst:dev.Arch.arch/i386
extern const char *  dev_Arch_arch_i686;     // i686      fconst:dev.Arch.arch/i686
extern const char *  dev_Arch_arch_i86pc;    // i86pc     fconst:dev.Arch.arch/i86pc
extern const char *  dev_Arch_arch_x64;      // x64       fconst:dev.Arch.arch/x64
extern const char *  dev_Arch_arch_x86_64;   // x86_64    fconst:dev.Arch.arch/x86_64
extern const char *  dev_Builddir_builddir_dflt_coverage_x86_64;   // dflt.coverage-x86_64    fconst:dev.Builddir.builddir/dflt.coverage-x86_64
extern const char *  dev_Builddir_builddir_dflt_debug_x86_64;      // dflt.debug-x86_64       fconst:dev.Builddir.builddir/dflt.debug-x86_64
extern const char *  dev_Builddir_builddir_dflt_profile_x86_64;    // dflt.profile-x86_64     fconst:dev.Builddir.builddir/dflt.profile-x86_64
extern const char *  dev_Builddir_builddir_dflt_release_x86_64;    // dflt.release-x86_64     fconst:dev.Builddir.builddir/dflt.release-x86_64
extern const char *  dev_Cfg_cfg_;           //             fconst:dev.Cfg.cfg/
extern const char *  dev_Cfg_cfg_coverage;   // coverage    fconst:dev.Cfg.cfg/coverage
extern const char *  dev_Cfg_cfg_debug;      // debug       fconst:dev.Cfg.cfg/debug
extern const char *  dev_Cfg_cfg_profile;    // profile     fconst:dev.Cfg.cfg/profile
extern const char *  dev_Cfg_cfg_release;    // release     fconst:dev.Cfg.cfg/release
extern const char *  dev_Compiler_compiler_;          //            fconst:dev.Compiler.compiler/
extern const char *  dev_Compiler_compiler_clangPP;   // clang++    fconst:dev.Compiler.compiler/clang++
extern const char *  dev_Compiler_compiler_gPP;       // g++        fconst:dev.Compiler.compiler/g++

// --- dev_FieldIdEnum

enum dev_FieldIdEnum {                // dev.FieldId.value
     dev_FieldId_arch           = 0
    ,dev_FieldId_comment        = 1
    ,dev_FieldId_badline        = 2
    ,dev_FieldId_expr           = 3
    ,dev_FieldId_targsrc_regx   = 4
    ,dev_FieldId_builddir       = 5
    ,dev_FieldId_cfg            = 6
    ,dev_FieldId_compiler       = 7
    ,dev_FieldId_dflt           = 8
    ,dev_FieldId_ranlib         = 9
    ,dev_FieldId_ar             = 10
    ,dev_FieldId_gitfile        = 11
    ,dev_FieldId_ext            = 12
    ,dev_FieldId_gitinfo        = 13
    ,dev_FieldId_author         = 14
    ,dev_FieldId_compver        = 15
    ,dev_FieldId_package        = 16
    ,dev_FieldId_include        = 17
    ,dev_FieldId_srcfile        = 18
    ,dev_FieldId_filename       = 19
    ,dev_FieldId_sys            = 20
    ,dev_FieldId_nlongline      = 21
    ,dev_FieldId_longestline    = 22
    ,dev_FieldId_nbadws         = 23
    ,dev_FieldId_maxws          = 24
    ,dev_FieldId_nlongfunc      = 25
    ,dev_FieldId_longestfunc    = 26
    ,dev_FieldId_nmysteryfunc   = 27
    ,dev_FieldId_badness        = 28
    ,dev_FieldId_opt_type       = 29
    ,dev_FieldId_sep            = 30
    ,dev_FieldId_args           = 31
    ,dev_FieldId_syscmd         = 32
    ,dev_FieldId_execkey        = 33
    ,dev_FieldId_command        = 34
    ,dev_FieldId_pid            = 35
    ,dev_FieldId_status         = 36
    ,dev_FieldId_nprereq        = 37
    ,dev_FieldId_fail_prereq    = 38
    ,dev_FieldId_completed      = 39
    ,dev_FieldId_maxtime        = 40
    ,dev_FieldId_syscmddep      = 41
    ,dev_FieldId_child          = 42
    ,dev_FieldId_parent         = 43
    ,dev_FieldId_syslib         = 44
    ,dev_FieldId_targdep        = 45
    ,dev_FieldId_target         = 46
    ,dev_FieldId_targsrc        = 47
    ,dev_FieldId_src            = 48
    ,dev_FieldId_targsyslib     = 49
    ,dev_FieldId_uname          = 50
    ,dev_FieldId_tool_opt       = 51
    ,dev_FieldId_opt            = 52
    ,dev_FieldId_value          = 53
};

enum { dev_FieldIdEnum_N = 54 };

namespace dev { struct Arch; }
namespace dev { struct Badline; }
namespace dev { struct Builddir; }
namespace dev { struct Cfg; }
namespace dev { struct Compiler; }
namespace dev { struct FieldId; }
namespace dev { struct Gitfile; }
namespace dev { struct Gitinfo; }
namespace dev { struct Include; }
namespace dev { struct Linelim; }
namespace dev { struct OptType; }
namespace dev { struct Readme; }
namespace dev { struct Scriptfile; }
namespace dev { struct Srcfile; }
namespace dev { struct Syscmd; }
namespace dev { struct Syscmddep; }
namespace dev { struct Syslib; }
namespace dev { struct Targdep; }
namespace dev { struct Target; }
namespace dev { struct Targinstall; }
namespace dev { struct Targsrc; }
namespace dev { struct Targsyslib; }
namespace dev { struct ToolOpt; }
namespace dev { struct Uname; }
namespace dev {
    typedef algo::Smallstr50 ArchPkey;
    typedef algo::Smallstr50 CfgPkey;
    typedef algo::Smallstr50 CompilerPkey;
    typedef algo::Smallstr200 GitfilePkey;
    typedef algo::Smallstr50 OptTypePkey;
    typedef algo::Smallstr200 SrcfilePkey;
    typedef i64 SyscmdPkey;
    typedef algo::Smallstr50 SyslibPkey;
    typedef algo::Smallstr16 TargetPkey;
    typedef algo::Smallstr50 UnamePkey;
}//pkey typedefs
namespace dev {

// --- dev.Arch
struct Arch { // dev.Arch
    algo::Smallstr50   arch;      //
    algo::Comment      comment;   //
    explicit Arch(const algo::strptr&            in_arch
        ,const algo::Comment&           in_comment);
    Arch();
};

bool                 Arch_ReadFieldMaybe(dev::Arch &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Arch from an ascii string.
// The format of the string is an ssim Tuple
bool                 Arch_ReadStrptrMaybe(dev::Arch &parent, algo::strptr in_str);
// print string representation of dev::Arch to string LHS, no header -- cprint:dev.Arch.String
void                 Arch_Print(dev::Arch & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Badline
struct Badline { // dev.Badline
    algo::Smallstr50    badline;        //
    algo::Smallstr200   expr;           //
    algo::Smallstr50    targsrc_regx;   //
    algo::Comment       comment;        //
    Badline();
};

bool                 Badline_ReadFieldMaybe(dev::Badline &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Badline from an ascii string.
// The format of the string is an ssim Tuple
bool                 Badline_ReadStrptrMaybe(dev::Badline &parent, algo::strptr in_str);
// print string representation of dev::Badline to string LHS, no header -- cprint:dev.Badline.String
void                 Badline_Print(dev::Badline & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Builddir
struct Builddir { // dev.Builddir
    algo::Smallstr50   builddir;   //
    algo::Comment      comment;    //
    Builddir();
};

algo::Smallstr50     cfg_Get(dev::Builddir& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr50     Builddir_cfg_Get(strptr arg) __attribute__((nothrow));

bool                 Builddir_ReadFieldMaybe(dev::Builddir &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Builddir from an ascii string.
// The format of the string is an ssim Tuple
bool                 Builddir_ReadStrptrMaybe(dev::Builddir &parent, algo::strptr in_str);
// print string representation of dev::Builddir to string LHS, no header -- cprint:dev.Builddir.String
void                 Builddir_Print(dev::Builddir & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Cfg
struct Cfg { // dev.Cfg
    algo::Smallstr50   cfg;       //
    algo::Comment      comment;   //
    explicit Cfg(const algo::strptr&            in_cfg
        ,const algo::Comment&           in_comment);
    Cfg();
};

bool                 Cfg_ReadFieldMaybe(dev::Cfg &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Cfg from an ascii string.
// The format of the string is an ssim Tuple
bool                 Cfg_ReadStrptrMaybe(dev::Cfg &parent, algo::strptr in_str);
// print string representation of dev::Cfg to string LHS, no header -- cprint:dev.Cfg.String
void                 Cfg_Print(dev::Cfg & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Compiler
struct Compiler { // dev.Compiler
    algo::Smallstr50   compiler;   //
    algo::Smallstr50   dflt;       //
    algo::Smallstr50   ranlib;     //
    algo::Smallstr50   ar;         //
    algo::Comment      comment;    //
    explicit Compiler(const algo::strptr&            in_compiler
        ,const algo::strptr&            in_dflt
        ,const algo::strptr&            in_ranlib
        ,const algo::strptr&            in_ar
        ,const algo::Comment&           in_comment);
    Compiler();
};

bool                 Compiler_ReadFieldMaybe(dev::Compiler &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Compiler from an ascii string.
// The format of the string is an ssim Tuple
bool                 Compiler_ReadStrptrMaybe(dev::Compiler &parent, algo::strptr in_str);
// print string representation of dev::Compiler to string LHS, no header -- cprint:dev.Compiler.String
void                 Compiler_Print(dev::Compiler & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.FieldId
#pragma pack(push,1)
struct FieldId { // dev.FieldId: Field read helper
    i32   value;   //   -1
    inline operator dev_FieldIdEnum() const;
    explicit FieldId(i32                            in_value);
    FieldId(dev_FieldIdEnum arg);
    FieldId();
};
#pragma pack(pop)

// Get value of field as enum type
dev_FieldIdEnum      value_GetEnum(const dev::FieldId& parent) __attribute__((nothrow));
// Set value of field from enum type.
void                 value_SetEnum(dev::FieldId& parent, dev_FieldIdEnum rhs) __attribute__((nothrow));
// Convert numeric value of field to one of predefined string constants.
// If string is found, return a static C string. Otherwise, return NULL.
const char*          value_ToCstr(const dev::FieldId& parent) __attribute__((nothrow));
// Convert value to a string. First, attempt conversion to a known string.
// If no string matches, print value as a numeric value.
void                 value_Print(const dev::FieldId& parent, algo::cstring &lhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, do not modify field and return false.
// In case of success, return true
bool                 value_SetStrptrMaybe(dev::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));
// Convert string to field.
// If the string is invalid, set numeric value to DFLT
void                 value_SetStrptr(dev::FieldId& parent, algo::strptr rhs, dev_FieldIdEnum dflt) __attribute__((nothrow));
// Convert string to field. Return success value
bool                 value_ReadStrptrMaybe(dev::FieldId& parent, algo::strptr rhs) __attribute__((nothrow));

// Read fields of dev::FieldId from an ascii string.
// The format of the string is the format of the dev::FieldId's only field
bool                 FieldId_ReadStrptrMaybe(dev::FieldId &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 FieldId_Init(dev::FieldId& parent);
// print string representation of dev::FieldId to string LHS, no header -- cprint:dev.FieldId.String
void                 FieldId_Print(dev::FieldId & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Gitfile
struct Gitfile { // dev.Gitfile
    algo::Smallstr200   gitfile;   //
    explicit Gitfile(const algo::strptr&            in_gitfile);
    Gitfile();
};

algo::Smallstr50     ext_Get(dev::Gitfile& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr50     Gitfile_ext_Get(strptr arg) __attribute__((nothrow));

bool                 Gitfile_ReadFieldMaybe(dev::Gitfile &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Gitfile from an ascii string.
// The format of the string is an ssim Tuple
bool                 Gitfile_ReadStrptrMaybe(dev::Gitfile &parent, algo::strptr in_str);
// print string representation of dev::Gitfile to string LHS, no header -- cprint:dev.Gitfile.String
void                 Gitfile_Print(dev::Gitfile & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Gitinfo
struct Gitinfo { // dev.Gitinfo
    algo::Smallstr40   gitinfo;   //
    algo::Smallstr50   author;    //
    algo::Smallstr40   cfg;       //
    algo::Smallstr20   compver;   //
    algo::Smallstr40   package;   //
    algo::Comment      comment;   //
    explicit Gitinfo(const algo::strptr&            in_gitinfo
        ,const algo::strptr&            in_author
        ,const algo::strptr&            in_cfg
        ,const algo::strptr&            in_compver
        ,const algo::strptr&            in_package
        ,const algo::Comment&           in_comment);
    Gitinfo();
};

bool                 Gitinfo_ReadFieldMaybe(dev::Gitinfo &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Gitinfo from an ascii string.
// The format of the string is an ssim Tuple
bool                 Gitinfo_ReadStrptrMaybe(dev::Gitinfo &parent, algo::strptr in_str);
// print string representation of dev::Gitinfo to string LHS, no header -- cprint:dev.Gitinfo.String
void                 Gitinfo_Print(dev::Gitinfo & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Include
struct Include { // dev.Include: A site where one file includes another
    algo::Smallstr200   include;   //
    bool                sys;       //   false
    algo::Comment       comment;   //
    Include();
};

algo::Smallstr200    srcfile_Get(dev::Include& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr200    Include_srcfile_Get(strptr arg) __attribute__((nothrow));

algo::Smallstr200    filename_Get(dev::Include& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr200    Include_filename_Get(strptr arg) __attribute__((nothrow));

tempstr              Include_Concat_srcfile_filename( const algo::strptr& srcfile ,const algo::strptr& filename );
bool                 Include_ReadFieldMaybe(dev::Include &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Include from an ascii string.
// The format of the string is an ssim Tuple
bool                 Include_ReadStrptrMaybe(dev::Include &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 Include_Init(dev::Include& parent);
// print string representation of dev::Include to string LHS, no header -- cprint:dev.Include.String
void                 Include_Print(dev::Include & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Linelim
struct Linelim { // dev.Linelim
    algo::Smallstr200   gitfile;        //
    u32                 nlongline;      //   0
    u32                 longestline;    //   0
    u32                 nbadws;         //   0
    u32                 maxws;          //   0
    u32                 nlongfunc;      //   0
    u32                 longestfunc;    //   0
    u32                 nmysteryfunc;   //   0
    algo::Smallstr50    badness;        //
    Linelim();
};

bool                 Linelim_ReadFieldMaybe(dev::Linelim &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Linelim from an ascii string.
// The format of the string is an ssim Tuple
bool                 Linelim_ReadStrptrMaybe(dev::Linelim &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 Linelim_Init(dev::Linelim& parent);
// print string representation of dev::Linelim to string LHS, no header -- cprint:dev.Linelim.String
void                 Linelim_Print(dev::Linelim & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.OptType
struct OptType { // dev.OptType
    algo::Smallstr50   opt_type;   //
    algo::RspaceStr4   sep;        //
    algo::Comment      comment;    //
    explicit OptType(const algo::strptr&            in_opt_type
        ,const algo::strptr&            in_sep
        ,const algo::Comment&           in_comment);
    OptType();
};

bool                 OptType_ReadFieldMaybe(dev::OptType &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::OptType from an ascii string.
// The format of the string is an ssim Tuple
bool                 OptType_ReadStrptrMaybe(dev::OptType &parent, algo::strptr in_str);
// print string representation of dev::OptType to string LHS, no header -- cprint:dev.OptType.String
void                 OptType_Print(dev::OptType & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Readme
struct Readme { // dev.Readme
    algo::Smallstr200   gitfile;   //
    algo::Comment       comment;   //
    Readme();
};

bool                 Readme_ReadFieldMaybe(dev::Readme &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Readme from an ascii string.
// The format of the string is an ssim Tuple
bool                 Readme_ReadStrptrMaybe(dev::Readme &parent, algo::strptr in_str);
// print string representation of dev::Readme to string LHS, no header -- cprint:dev.Readme.String
void                 Readme_Print(dev::Readme & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Scriptfile
struct Scriptfile { // dev.Scriptfile
    algo::Smallstr200   gitfile;   //
    algo::Smallstr100   args;      //
    algo::Comment       comment;   //
    Scriptfile();
};

bool                 Scriptfile_ReadFieldMaybe(dev::Scriptfile &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Scriptfile from an ascii string.
// The format of the string is an ssim Tuple
bool                 Scriptfile_ReadStrptrMaybe(dev::Scriptfile &parent, algo::strptr in_str);
// print string representation of dev::Scriptfile to string LHS, no header -- cprint:dev.Scriptfile.String
void                 Scriptfile_Print(dev::Scriptfile & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Srcfile
struct Srcfile { // dev.Srcfile: Source file or header (key is pathname)
    algo::Smallstr200   srcfile;   //
    Srcfile();
};

algo::Smallstr10     ext_Get(dev::Srcfile& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr10     Srcfile_ext_Get(strptr arg) __attribute__((nothrow));

bool                 Srcfile_ReadFieldMaybe(dev::Srcfile &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Srcfile from an ascii string.
// The format of the string is an ssim Tuple
bool                 Srcfile_ReadStrptrMaybe(dev::Srcfile &parent, algo::strptr in_str);
// print string representation of dev::Srcfile to string LHS, no header -- cprint:dev.Srcfile.String
void                 Srcfile_Print(dev::Srcfile & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Syscmd
struct Syscmd { // dev.Syscmd: System command to execute
    i64             syscmd;        //   0  Step number
    algo::cstring   command;       // Command to execute
    i32             pid;           //   0  PID, if running
    i32             status;        //   0  Exit status (if command has completed)
    i32             nprereq;       //   0  Number of live pre-requisites
    bool            fail_prereq;   //   false  Set if one of pre-requisites fails
    bool            completed;     //   false  Completed?
    i32             maxtime;       //   0  Optional max running time (used to use SIGALRM)
    explicit Syscmd(i64                            in_syscmd
        ,const algo::strptr&            in_command
        ,i32                            in_pid
        ,i32                            in_status
        ,i32                            in_nprereq
        ,bool                           in_fail_prereq
        ,bool                           in_completed
        ,i32                            in_maxtime);
    Syscmd();
};

i64                  execkey_Get(dev::Syscmd& parent) __attribute__((__warn_unused_result__, nothrow));
void                 execkey_Set(dev::Syscmd& parent, i64 rhs) __attribute__((nothrow));

bool                 Syscmd_ReadFieldMaybe(dev::Syscmd &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Syscmd from an ascii string.
// The format of the string is an ssim Tuple
bool                 Syscmd_ReadStrptrMaybe(dev::Syscmd &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 Syscmd_Init(dev::Syscmd& parent);
// print string representation of dev::Syscmd to string LHS, no header -- cprint:dev.Syscmd.String
void                 Syscmd_Print(dev::Syscmd & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Syscmddep
struct Syscmddep { // dev.Syscmddep: Dependency between two commands
    i64   child;    //   0
    i64   parent;   //   0
    explicit Syscmddep(i64                            in_child
        ,i64                            in_parent);
    Syscmddep();
};

algo::RspaceStr16    syscmddep_Get(dev::Syscmddep& parent) __attribute__((__warn_unused_result__, nothrow));
void                 syscmddep_Set(dev::Syscmddep& parent, const algo::strptr& rhs) __attribute__((nothrow));

bool                 Syscmddep_ReadFieldMaybe(dev::Syscmddep &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Syscmddep from an ascii string.
// The format of the string is an ssim Tuple
bool                 Syscmddep_ReadStrptrMaybe(dev::Syscmddep &parent, algo::strptr in_str);
// Set all fields to initial values.
void                 Syscmddep_Init(dev::Syscmddep& parent);
// print string representation of dev::Syscmddep to string LHS, no header -- cprint:dev.Syscmddep.String
void                 Syscmddep_Print(dev::Syscmddep & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Syslib
struct Syslib { // dev.Syslib
    algo::Smallstr50   syslib;    //
    algo::Comment      comment;   //
    Syslib();
};

bool                 Syslib_ReadFieldMaybe(dev::Syslib &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Syslib from an ascii string.
// The format of the string is an ssim Tuple
bool                 Syslib_ReadStrptrMaybe(dev::Syslib &parent, algo::strptr in_str);
// print string representation of dev::Syslib to string LHS, no header -- cprint:dev.Syslib.String
void                 Syslib_Print(dev::Syslib & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Targdep
struct Targdep { // dev.Targdep: Dependency between targets
    algo::Smallstr50   targdep;   //
    algo::Comment      comment;   //
    explicit Targdep(const algo::strptr&            in_targdep
        ,const algo::Comment&           in_comment);
    Targdep();
};

algo::Smallstr16     target_Get(dev::Targdep& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr16     Targdep_target_Get(strptr arg) __attribute__((nothrow));

algo::Smallstr16     parent_Get(dev::Targdep& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr16     Targdep_parent_Get(strptr arg) __attribute__((nothrow));

tempstr              Targdep_Concat_target_parent( const algo::strptr& target ,const algo::strptr& parent );
bool                 Targdep_ReadFieldMaybe(dev::Targdep &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Targdep from an ascii string.
// The format of the string is an ssim Tuple
bool                 Targdep_ReadStrptrMaybe(dev::Targdep &parent, algo::strptr in_str);
// print string representation of dev::Targdep to string LHS, no header -- cprint:dev.Targdep.String
void                 Targdep_Print(dev::Targdep & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Target
struct Target { // dev.Target: Build target
    algo::Smallstr16   target;   //
    explicit Target(const algo::strptr&            in_target);
    Target();
};

bool                 Target_ReadFieldMaybe(dev::Target &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Target from an ascii string.
// The format of the string is an ssim Tuple
bool                 Target_ReadStrptrMaybe(dev::Target &parent, algo::strptr in_str);
// print string representation of dev::Target to string LHS, no header -- cprint:dev.Target.String
void                 Target_Print(dev::Target & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Targinstall
struct Targinstall { // dev.Targinstall
    algo::Smallstr16   target;    //
    algo::Comment      comment;   //
    Targinstall();
};

bool                 Targinstall_ReadFieldMaybe(dev::Targinstall &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Targinstall from an ascii string.
// The format of the string is an ssim Tuple
bool                 Targinstall_ReadStrptrMaybe(dev::Targinstall &parent, algo::strptr in_str);
// print string representation of dev::Targinstall to string LHS, no header -- cprint:dev.Targinstall.String
void                 Targinstall_Print(dev::Targinstall & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Targsrc
struct Targsrc { // dev.Targsrc: List of sources for target
    algo::Smallstr100   targsrc;   //
    algo::Comment       comment;   //
    explicit Targsrc(const algo::strptr&            in_targsrc
        ,const algo::Comment&           in_comment);
    Targsrc();
};

algo::Smallstr16     target_Get(dev::Targsrc& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr16     Targsrc_target_Get(strptr arg) __attribute__((nothrow));

algo::Smallstr200    src_Get(dev::Targsrc& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr200    Targsrc_src_Get(strptr arg) __attribute__((nothrow));

algo::Smallstr10     ext_Get(dev::Targsrc& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr10     Targsrc_ext_Get(strptr arg) __attribute__((nothrow));

tempstr              Targsrc_Concat_target_src( const algo::strptr& target ,const algo::strptr& src );
bool                 Targsrc_ReadFieldMaybe(dev::Targsrc &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Targsrc from an ascii string.
// The format of the string is an ssim Tuple
bool                 Targsrc_ReadStrptrMaybe(dev::Targsrc &parent, algo::strptr in_str);
// print string representation of dev::Targsrc to string LHS, no header -- cprint:dev.Targsrc.String
void                 Targsrc_Print(dev::Targsrc & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Targsyslib
struct Targsyslib { // dev.Targsyslib
    algo::Smallstr50   targsyslib;   //
    algo::Smallstr50   uname;        //
    algo::Comment      comment;      //
    Targsyslib();
};

algo::Smallstr16     target_Get(dev::Targsyslib& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr16     Targsyslib_target_Get(strptr arg) __attribute__((nothrow));

algo::Smallstr50     syslib_Get(dev::Targsyslib& parent) __attribute__((__warn_unused_result__, nothrow));
algo::Smallstr50     Targsyslib_syslib_Get(strptr arg) __attribute__((nothrow));

tempstr              Targsyslib_Concat_target_syslib( const algo::strptr& target ,const algo::strptr& syslib );
bool                 Targsyslib_ReadFieldMaybe(dev::Targsyslib &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Targsyslib from an ascii string.
// The format of the string is an ssim Tuple
bool                 Targsyslib_ReadStrptrMaybe(dev::Targsyslib &parent, algo::strptr in_str);
// print string representation of dev::Targsyslib to string LHS, no header -- cprint:dev.Targsyslib.String
void                 Targsyslib_Print(dev::Targsyslib & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.ToolOpt
struct ToolOpt { // dev.ToolOpt
    algo::RspaceStr10   tool_opt;   //
    algo::Smallstr50    opt_type;   // name of variable (becomes exported makefile variable)
    algo::Smallstr100   opt;        // value of the option
    algo::Smallstr16    target;     // empty=match all. otherwise match name of target
    algo::Smallstr50    uname;      // empty=match all. otherwise match value of `uname`
    algo::Smallstr50    compiler;   // empty=match all. otherwise, match compiler name
    algo::Smallstr50    cfg;        // empty=match all. otherwise, match configuration name
    algo::Smallstr50    arch;       // empty=match all. otherwise, match value of `arch`
    algo::Comment       comment;    //
    explicit ToolOpt(const algo::strptr&            in_tool_opt
        ,const algo::strptr&            in_opt_type
        ,const algo::strptr&            in_opt
        ,const algo::strptr&            in_target
        ,const algo::strptr&            in_uname
        ,const algo::strptr&            in_compiler
        ,const algo::strptr&            in_cfg
        ,const algo::strptr&            in_arch
        ,const algo::Comment&           in_comment);
    ToolOpt();
};

bool                 ToolOpt_ReadFieldMaybe(dev::ToolOpt &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::ToolOpt from an ascii string.
// The format of the string is an ssim Tuple
bool                 ToolOpt_ReadStrptrMaybe(dev::ToolOpt &parent, algo::strptr in_str);
// print string representation of dev::ToolOpt to string LHS, no header -- cprint:dev.ToolOpt.String
void                 ToolOpt_Print(dev::ToolOpt & row, algo::cstring &str) __attribute__((nothrow));

// --- dev.Uname
struct Uname { // dev.Uname
    algo::Smallstr50   uname;     //
    algo::Comment      comment;   //
    explicit Uname(const algo::strptr&            in_uname
        ,const algo::Comment&           in_comment);
    Uname();
};

bool                 Uname_ReadFieldMaybe(dev::Uname &parent, algo::strptr field, algo::strptr strval) __attribute__((nothrow));
// Read fields of dev::Uname from an ascii string.
// The format of the string is an ssim Tuple
bool                 Uname_ReadStrptrMaybe(dev::Uname &parent, algo::strptr in_str);
// print string representation of dev::Uname to string LHS, no header -- cprint:dev.Uname.String
void                 Uname_Print(dev::Uname & row, algo::cstring &str) __attribute__((nothrow));
} // end namespace dev
namespace algo {
inline algo::cstring &operator <<(algo::cstring &str, const dev::Badline &row);// cfmt:dev.Badline.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::FieldId &row);// cfmt:dev.FieldId.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Gitfile &row);// cfmt:dev.Gitfile.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Include &row);// cfmt:dev.Include.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Linelim &row);// cfmt:dev.Linelim.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Readme &row);// cfmt:dev.Readme.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Scriptfile &row);// cfmt:dev.Scriptfile.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Srcfile &row);// cfmt:dev.Srcfile.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Syscmd &row);// cfmt:dev.Syscmd.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Syscmddep &row);// cfmt:dev.Syscmddep.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Syslib &row);// cfmt:dev.Syslib.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Targdep &row);// cfmt:dev.Targdep.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Target &row);// cfmt:dev.Target.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Targinstall &row);// cfmt:dev.Targinstall.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Targsrc &row);// cfmt:dev.Targsrc.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Targsyslib &row);// cfmt:dev.Targsyslib.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::ToolOpt &row);// cfmt:dev.ToolOpt.String
inline algo::cstring &operator <<(algo::cstring &str, const dev::Uname &row);// cfmt:dev.Uname.String
}
