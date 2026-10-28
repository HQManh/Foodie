// rea decompile_all
// name: std::__ndk1::money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
// address: 0x4012804
// body: available
// range: 0x4012804-0x4012bf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4012bf4 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t, long double) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(char *param_1,undefined8 param_2,long param_3,byte param_4,long param_5,undefined4 param_6)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *__ptr;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  wchar_t *pwVar9;
  undefined ***__ptr_00;
  ctype *pcVar10;
  undefined ***pppuVar11;
  char *local_480;
  wchar_t *local_470;
  wchar_t *pwStack_468;
  undefined **local_460 [50];
  int local_2cc;
  ulong local_2c8;
  ulong local_2c0;
  void *local_2b8;
  undefined *local_2b0;
  ulong local_2a8;
  void *local_2a0;
  undefined ***local_298;
  undefined8 local_290;
  void *local_288;
  wchar_t local_27c;
  wchar_t local_278;
  pattern apStack_274 [4];
  long local_270;
  wchar_t awStack_268 [100];
  char *local_d8;
  char local_cc [108];
  
  local_d8 = local_cc;
  uVar4 = snprintf(local_cc,100,"%.0Lf");
  if (uVar4 < 100) {
    __ptr = (wchar_t *)0x0;
    local_480 = (char *)0x0;
    lVar7 = param_3;
    pwVar9 = awStack_268;
    goto LAB_040128c8;
  }
  local_480 = param_1;
  if ((bRam000000000974a4b8 & 1) == 0) goto LAB_04012b94;
  do {
    uVar4 = FUN_04011ce0(local_480,&local_d8,p_Ram000000000974a4b0,&UNK_01a60027);
    local_480 = local_d8;
    if (uVar4 == 0xffffffff) {
      __throw_bad_alloc();
LAB_04012bd8:
      __throw_bad_alloc();
LAB_04012bdc:
      uVar6 = __throw_bad_alloc();
      __cxa_guard_abort(0x974a4b8);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar6);
    }
    __ptr = malloc(-(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2);
    lVar7 = param_3;
    pwVar9 = __ptr;
    if (__ptr == (wchar_t *)0x0) goto LAB_04012bd8;
LAB_040128c8:
    ios_base::getloc();
    param_3 = local_270;
    local_2b0 = ctype<wchar_t>::id;
    if (ctype<wchar_t>::id._0_8_ != -1) {
      local_460[0] = &local_2b0;
      local_298 = local_460;
      __call_once((ulong *)ctype<wchar_t>::id,&local_298,FUN_0402d4a0);
    }
    if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U <
         (ulong)(*(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10) >> 3)) &&
       (pcVar10 = *(ctype **)
                   (*(long *)(param_3 + 0x10) + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8),
       pcVar10 != (ctype *)0x0)) {
      lVar8 = (long)(int)uVar4;
      (**(code **)(*(long *)pcVar10 + 0x60))(pcVar10,local_d8,local_d8 + lVar8,pwVar9);
      if ((int)uVar4 < 1) {
        bVar3 = false;
      }
      else {
        bVar3 = *local_d8 == '-';
      }
      local_290 = 0;
      local_298 = (undefined ***)0x0;
      local_288 = (void *)0x0;
      local_2a8 = 0;
      local_2b0 = (undefined1 *)0x0;
      local_2a0 = (void *)0x0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_2b8 = (void *)0x0;
      __money_put<wchar_t>::__gather_info
                ((bool)(param_4 & 1),bVar3,(locale *)&local_270,apStack_274,&local_278,&local_27c,
                 (basic_string *)&local_298,(basic_string *)&local_2b0,(basic_string *)&local_2c8,
                 &local_2cc);
      if (local_2cc < (int)uVar4) {
        uVar1 = (ulong)((byte)local_2c8._0_1_ >> 1);
        if ((local_2c8 & 1) != 0) {
          uVar1 = local_2c0;
        }
        uVar2 = (ulong)((byte)local_2b0._0_1_ >> 1);
        if (((ulong)local_2b0 & 1) != 0) {
          uVar2 = local_2a8;
        }
        uVar1 = (lVar8 * 2 - (long)local_2cc) + uVar1 + uVar2 + 1;
      }
      else {
        uVar1 = (ulong)((byte)local_2c8._0_1_ >> 1);
        if ((local_2c8 & 1) != 0) {
          uVar1 = local_2c0;
        }
        uVar2 = (ulong)((byte)local_2b0._0_1_ >> 1);
        if (((ulong)local_2b0 & 1) != 0) {
          uVar2 = local_2a8;
        }
        uVar1 = (long)local_2cc + uVar1 + uVar2 + 2;
      }
      if (uVar1 < 0x65) {
        __ptr_00 = (undefined ***)0x0;
        pppuVar11 = local_460;
      }
      else {
        __ptr_00 = malloc(uVar1 << 2);
        pppuVar11 = __ptr_00;
        if (__ptr_00 == (undefined ***)0x0) goto LAB_04012bdc;
      }
      __money_put<wchar_t>::__format
                ((wchar_t *)pppuVar11,&pwStack_468,&local_470,*(uint *)(param_5 + 8),pwVar9,
                 pwVar9 + lVar8,pcVar10,bVar3,apStack_274,local_278,local_27c,
                 (basic_string *)&local_298,(basic_string *)&local_2b0,(basic_string *)&local_2c8,
                 local_2cc);
      uVar6 = FUN_040076fc(lVar7,pppuVar11,pwStack_468,local_470,param_5,param_6);
      if (__ptr_00 != (undefined ***)0x0) {
        free(__ptr_00);
      }
      if ((local_2c8 & 1) != 0) {
        operator_delete(local_2b8);
      }
      if (((ulong)local_2b0 & 1) != 0) {
        operator_delete(local_2a0);
      }
      if (((ulong)local_298 & 1) == 0) {
        locale::~locale((locale *)&local_270);
      }
      else {
        operator_delete(local_288);
        locale::~locale((locale *)&local_270);
      }
      if (__ptr != (wchar_t *)0x0) {
        free(__ptr);
      }
      if (local_480 != (char *)0x0) {
        free(local_480);
      }
      return uVar6;
    }
    FUN_03ff9c28();
LAB_04012b94:
    iVar5 = __cxa_guard_acquire(0x974a4b8);
    if (iVar5 != 0) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
  } while( true );
}

