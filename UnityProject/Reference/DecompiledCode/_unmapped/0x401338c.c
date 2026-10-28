// rea decompile_all
// name: std::__ndk1::money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
// address: 0x401338c
// body: available
// range: 0x401338c-0x40136af inclusive
// range: 0x40136e4-0x4013703 inclusive
// range: 0x4013714-0x401374b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4013700 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4013748 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::money_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, bool, std::__ndk1::ios_base&, wchar_t,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&) const */

undefined8 __thiscall
std::__ndk1::
money_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_put(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,undefined4 param_5,
      byte *param_6)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  wchar_t *pwVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ctype *pcVar11;
  undefined ***__ptr;
  undefined ***pppuVar12;
  wchar_t *local_270;
  wchar_t *pwStack_268;
  undefined **local_260 [50];
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  undefined *local_b0;
  ulong local_a8;
  void *local_a0;
  undefined ***local_98;
  undefined8 uStack_90;
  void *local_88;
  wchar_t local_7c;
  wchar_t wStack_78;
  pattern apStack_74 [4];
  long local_70 [2];
  
  ios_base::getloc();
  local_b0 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_260[0] = &local_b0;
    local_98 = local_260;
    __call_once((ulong *)ctype<wchar_t>::id,&local_98,FUN_0402d4a0);
  }
  if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_70[0] + 0x18) - *(long *)(local_70[0] + 0x10) >> 3)) &&
     (pcVar11 = *(ctype **)
                 (*(long *)(local_70[0] + 0x10) + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8),
     pcVar11 != (ctype *)0x0)) {
    bVar7 = *param_6;
    uVar3 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar3 = *(ulong *)(param_6 + 8);
    }
    if (uVar3 == 0) {
      bVar8 = false;
    }
    else {
      pbVar2 = param_6 + 4;
      if ((bVar7 & 1) != 0) {
        pbVar2 = *(byte **)(param_6 + 0x10);
      }
      iVar6 = *(int *)pbVar2;
      iVar9 = (**(code **)(*(long *)pcVar11 + 0x58))(pcVar11,0x2d);
      bVar8 = iVar6 == iVar9;
    }
    local_98 = (undefined ***)0x0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (void *)0x0;
    __money_put<wchar_t>::__gather_info
              ((bool)(param_3 & 1),bVar8,(locale *)local_70,apStack_74,&wStack_78,&local_7c,
               (basic_string *)&local_98,(basic_string *)&local_b0,(basic_string *)&local_c8,
               &local_cc);
    bVar7 = *param_6;
    uVar3 = (ulong)(bVar7 >> 1);
    if ((bVar7 & 1) != 0) {
      uVar3 = *(ulong *)(param_6 + 8);
    }
    if (local_cc < (int)uVar3) {
      uVar1 = (ulong)((byte)local_c8._0_1_ >> 1);
      if ((local_c8 & 1) != 0) {
        uVar1 = local_c0;
      }
      uVar4 = (ulong)((byte)local_b0._0_1_ >> 1);
      if (((ulong)local_b0 & 1) != 0) {
        uVar4 = local_a8;
      }
      uVar1 = (uVar3 * 2 - (long)local_cc) + uVar1 + uVar4 + 1;
    }
    else {
      uVar1 = (ulong)((byte)local_c8._0_1_ >> 1);
      if ((local_c8 & 1) != 0) {
        uVar1 = local_c0;
      }
      uVar4 = (ulong)((byte)local_b0._0_1_ >> 1);
      if (((ulong)local_b0 & 1) != 0) {
        uVar4 = local_a8;
      }
      uVar1 = (long)local_cc + uVar1 + uVar4 + 2;
    }
    if (uVar1 < 0x65) {
      __ptr = (undefined ***)0x0;
      pppuVar12 = local_260;
    }
    else {
      __ptr = malloc(uVar1 << 2);
      pppuVar12 = __ptr;
      if (__ptr == (undefined ***)0x0) goto LAB_0401369c;
    }
    pwVar5 = (wchar_t *)(param_6 + 4);
    if ((bVar7 & 1) != 0) {
      pwVar5 = *(wchar_t **)(param_6 + 0x10);
    }
    __money_put<wchar_t>::__format
              ((wchar_t *)pppuVar12,&pwStack_268,&local_270,*(uint *)(param_4 + 8),pwVar5,
               pwVar5 + uVar3,pcVar11,bVar8,apStack_74,wStack_78,local_7c,(basic_string *)&local_98,
               (basic_string *)&local_b0,(basic_string *)&local_c8,local_cc);
    uVar10 = FUN_040076fc(param_2,pppuVar12,pwStack_268,local_270,param_4,param_5);
    if (__ptr != (undefined ***)0x0) {
      free(__ptr);
    }
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    locale::~locale((locale *)local_70);
    return uVar10;
  }
  FUN_03ff9c28();
LAB_0401369c:
  uVar10 = __throw_bad_alloc();
  if ((local_c8 & 1) != 0) {
    operator_delete(local_b8);
  }
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if (((ulong)local_98 & 1) == 0) {
    locale::~locale((locale *)local_70);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar10);
  }
  operator_delete(local_88);
  locale::~locale((locale *)local_70);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar10);
}

