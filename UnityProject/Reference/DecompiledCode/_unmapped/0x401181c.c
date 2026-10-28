// rea decompile_all
// name: std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x401181c
// body: available
// range: 0x401181c-0x4011c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4011c00 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<char, std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> > >::do_put(std::__ndk1::ostreambuf_iterator<char,
   std::__ndk1::char_traits<char> >, bool, std::__ndk1::ios_base&, char, long double) const */

undefined8 __thiscall
std::__ndk1::money_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(char *param_1,undefined8 param_2,long param_3,byte param_4,long param_5,undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  char *__ptr;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined ***__ptr_00;
  ctype *pcVar10;
  undefined ***pppuVar11;
  char *local_230;
  char *local_218;
  char *pcStack_210;
  undefined **local_208 [12];
  int local_1a4;
  ulong local_1a0;
  ulong local_198;
  void *local_190;
  undefined *local_188;
  ulong local_180;
  void *local_178;
  undefined ***local_170;
  undefined8 uStack_168;
  void *local_160;
  char local_154 [4];
  char local_150 [4];
  pattern apStack_14c [4];
  long local_148;
  char acStack_13c [100];
  char *local_d8;
  char local_cc [108];
  
  local_d8 = local_cc;
  uVar4 = snprintf(local_cc,100,"%.0Lf");
  if (uVar4 < 100) {
    __ptr = (char *)0x0;
    local_230 = (char *)0x0;
    lVar7 = param_3;
    pcVar9 = acStack_13c;
    goto LAB_040118e0;
  }
  local_230 = param_1;
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04011ba0;
  do {
    uVar4 = FUN_04011ce0(local_230,&local_d8,p_Ram000000000974a4b0,&UNK_01a60027);
    local_230 = local_d8;
    if (uVar4 == 0xffffffff) {
      __throw_bad_alloc();
LAB_04011be4:
      __throw_bad_alloc();
LAB_04011be8:
      uVar6 = __throw_bad_alloc();
      __cxa_guard_abort(0x974a4b8);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar6);
    }
    __ptr = malloc((long)(int)uVar4);
    lVar7 = param_3;
    pcVar9 = __ptr;
    if (__ptr == (char *)0x0) goto LAB_04011be4;
LAB_040118e0:
    ios_base::getloc();
    param_3 = local_148;
    local_188 = ctype<char>::id;
    if (ctype<char>::id._0_8_ != -1) {
      local_208[0] = &local_188;
      local_170 = local_208;
      __call_once((ulong *)ctype<char>::id,&local_170,FUN_0402d4a0);
    }
    if (((long)(int)ctype<char>::id._8_4_ - 1U <
         (ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3)) &&
       (pcVar10 = *(ctype **)
                   (*(long *)(param_3 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
       pcVar10 != (ctype *)0x0)) {
      lVar8 = (long)(int)uVar4;
      (**(code **)(*(long *)pcVar10 + 0x40))(pcVar10,local_d8,local_d8 + lVar8,pcVar9);
      if ((int)uVar4 < 1) {
        bVar3 = false;
      }
      else {
        bVar3 = *local_d8 == '-';
      }
      local_170 = (undefined ***)0x0;
      uStack_168 = 0;
      local_160 = (void *)0x0;
      local_188 = (undefined1 *)0x0;
      local_180 = 0;
      local_178 = (void *)0x0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = (void *)0x0;
      __money_put<char>::__gather_info
                ((bool)(param_4 & 1),bVar3,(locale *)&local_148,apStack_14c,local_150,local_154,
                 (basic_string *)&local_170,(basic_string *)&local_188,(basic_string *)&local_1a0,
                 &local_1a4);
      if (local_1a4 < (int)uVar4) {
        uVar1 = (ulong)((byte)local_1a0._0_1_ >> 1);
        if ((local_1a0 & 1) != 0) {
          uVar1 = local_198;
        }
        uVar2 = (ulong)((byte)local_188._0_1_ >> 1);
        if (((ulong)local_188 & 1) != 0) {
          uVar2 = local_180;
        }
        uVar1 = (lVar8 * 2 - (long)local_1a4) + uVar1 + uVar2 + 1;
      }
      else {
        uVar1 = (ulong)((byte)local_1a0._0_1_ >> 1);
        if ((local_1a0 & 1) != 0) {
          uVar1 = local_198;
        }
        uVar2 = (ulong)((byte)local_188._0_1_ >> 1);
        if (((ulong)local_188 & 1) != 0) {
          uVar2 = local_180;
        }
        uVar1 = (long)local_1a4 + uVar1 + uVar2 + 2;
      }
      if (uVar1 < 0x65) {
        __ptr_00 = (undefined ***)0x0;
        pppuVar11 = local_208;
      }
      else {
        __ptr_00 = malloc(uVar1);
        pppuVar11 = __ptr_00;
        if (__ptr_00 == (undefined ***)0x0) goto LAB_04011be8;
      }
      __money_put<char>::__format
                ((char *)pppuVar11,&pcStack_210,&local_218,*(uint *)(param_5 + 8),pcVar9,
                 pcVar9 + lVar8,pcVar10,bVar3,apStack_14c,local_150[0],local_154[0],
                 (basic_string *)&local_170,(basic_string *)&local_188,(basic_string *)&local_1a0,
                 local_1a4);
      uVar6 = FUN_03f64a5c(lVar7,pppuVar11,pcStack_210,local_218,param_5,param_6);
      if (__ptr_00 != (undefined ***)0x0) {
        free(__ptr_00);
      }
      if ((local_1a0 & 1) != 0) {
        operator_delete(local_190);
      }
      if (((ulong)local_188 & 1) != 0) {
        operator_delete(local_178);
      }
      if (((ulong)local_170 & 1) == 0) {
        locale::~locale((locale *)&local_148);
      }
      else {
        operator_delete(local_160);
        locale::~locale((locale *)&local_148);
      }
      if (__ptr != (char *)0x0) {
        free(__ptr);
      }
      if (local_230 != (char *)0x0) {
        free(local_230);
      }
      return uVar6;
    }
    FUN_03ff9c28();
LAB_04011ba0:
    iVar5 = __cxa_guard_acquire(0x974a4b8);
    if (iVar5 != 0) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
  } while( true );
}

