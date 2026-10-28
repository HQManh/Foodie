// rea decompile_all
// name: std::__ndk1::num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
// address: 0x4006020
// body: available
// range: 0x4006020-0x40061eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40061e8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_put<wchar_t, std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_put(std::__ndk1::ostreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, wchar_t, bool) const */

long * __thiscall
std::__ndk1::
num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_put
          (num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
           *this,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 **ppuVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined1 **ppuVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 **local_60;
  ulong local_58;
  int *piStack_50;
  long local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0400606c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    return plVar6;
  }
  ios_base::getloc();
  local_40 = numpunct<wchar_t>::id;
  if (numpunct<wchar_t>::id._0_8_ != -1) {
    local_60 = &local_40;
    local_38 = (undefined1 *)&local_60;
    __call_once((ulong *)numpunct<wchar_t>::id,&local_38,FUN_0402d4a0);
  }
  if (((long)(int)numpunct<wchar_t>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_48 + 0x18) - *(long *)(local_48 + 0x10) >> 3)) &&
     (plVar6 = *(long **)(*(long *)(local_48 + 0x10) +
                         ((long)(int)numpunct<wchar_t>::id._8_4_ - 1U) * 8), plVar6 != (long *)0x0))
  {
    locale::~locale((locale *)&local_48);
    lVar1 = 0x30;
    if ((param_5 & 1) == 0) {
      lVar1 = 0x38;
    }
    (**(code **)(*plVar6 + lVar1))(&local_60,plVar6);
    ppuVar9 = (undefined1 **)((ulong)local_60 & 0xff);
    bVar4 = ((ulong)local_60 & 1) != 0;
    uVar10 = (ulong)local_60 >> 1 & 0x7f;
    if (bVar4) {
      uVar10 = local_58;
    }
    piVar7 = piStack_50;
    ppuVar3 = local_60;
    if (uVar10 != 0) {
      uVar10 = local_58;
      piVar12 = (int *)((ulong)&local_60 | 4);
      if (bVar4) {
        piVar12 = piStack_50;
      }
      do {
        if (param_2 != (long *)0x0) {
          piVar7 = (int *)param_2[6];
          iVar5 = *piVar12;
          if (piVar7 == (int *)param_2[7]) {
            iVar5 = (**(code **)(*param_2 + 0x68))(param_2);
          }
          else {
            *piVar7 = iVar5;
            param_2[6] = (long)(piVar7 + 1);
          }
          if (iVar5 == -1) {
            param_2 = (long *)0x0;
          }
          ppuVar9 = (undefined1 **)((ulong)local_60 & 0xff);
          piVar7 = piStack_50;
          uVar10 = local_58;
        }
        piVar11 = (int *)((ulong)&local_60 | 4);
        if (((ulong)ppuVar9 & 1) != 0) {
          piVar11 = piVar7;
        }
        piVar12 = piVar12 + 1;
        uVar2 = (ulong)ppuVar9 >> 1;
        if (((ulong)ppuVar9 & 1) != 0) {
          uVar2 = uVar10;
        }
        ppuVar3 = ppuVar9;
      } while (piVar12 != piVar11 + uVar2);
    }
    if (((ulong)ppuVar3 & 1) != 0) {
      operator_delete(piVar7);
    }
    return param_2;
  }
  uVar8 = FUN_03ff9c28();
  locale::~locale((locale *)&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar8);
}

