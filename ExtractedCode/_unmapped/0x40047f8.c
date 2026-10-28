// rea decompile_all
// name: std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_put
// address: 0x40047f8
// body: available
// range: 0x40047f8-0x40049eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40049e8 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_put<char, std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_put(std::__ndk1::ostreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::ios_base&, char, bool) const */

long * __thiscall
std::__ndk1::num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_put(num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 **ppuVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 **local_60;
  ulong local_58;
  undefined1 *local_50;
  long local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  if ((*(byte *)(param_3 + 8) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x04004844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar7 = (long *)(**(code **)(*(long *)this + 0x30))(this,param_2,param_3,param_4,param_5 & 1);
    return plVar7;
  }
  ios_base::getloc();
  local_40 = numpunct<char>::id;
  if (numpunct<char>::id._0_8_ != -1) {
    local_60 = &local_40;
    local_38 = (undefined1 *)&local_60;
    __call_once((ulong *)numpunct<char>::id,&local_38,FUN_0402d4a0);
  }
  if (((long)(int)numpunct<char>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_48 + 0x18) - *(long *)(local_48 + 0x10) >> 3)) &&
     (plVar7 = *(long **)(*(long *)(local_48 + 0x10) +
                         ((long)(int)numpunct<char>::id._8_4_ - 1U) * 8), plVar7 != (long *)0x0)) {
    locale::~locale((locale *)&local_48);
    lVar1 = 0x30;
    if ((param_5 & 1) == 0) {
      lVar1 = 0x38;
    }
    (**(code **)(*plVar7 + lVar1))(&local_60,plVar7);
    bVar5 = ((ulong)local_60 & 1) != 0;
    uVar2 = (ulong)local_60 >> 1 & 0x7f;
    if (bVar5) {
      uVar2 = local_58;
    }
    ppuVar4 = local_60;
    if (uVar2 != 0) {
      puVar10 = (undefined1 *)((ulong)&local_60 | 1);
      if (bVar5) {
        puVar10 = local_50;
      }
      do {
        if (param_2 != (long *)0x0) {
          puVar9 = (undefined1 *)param_2[6];
          uVar3 = *puVar10;
          if (puVar9 == (undefined1 *)param_2[7]) {
            iVar6 = (**(code **)(*param_2 + 0x68))(param_2);
            if (iVar6 == -1) {
              param_2 = (long *)0x0;
            }
          }
          else {
            param_2[6] = (long)(puVar9 + 1);
            *puVar9 = uVar3;
          }
        }
        ppuVar4 = (undefined1 **)((ulong)local_60 & 0xff);
        puVar9 = (undefined1 *)((ulong)&local_60 | 1);
        if (((ulong)local_60 & 1) != 0) {
          puVar9 = local_50;
        }
        puVar10 = puVar10 + 1;
        uVar2 = (ulong)ppuVar4 >> 1;
        if (((ulong)local_60 & 1) != 0) {
          uVar2 = local_58;
        }
      } while (puVar10 != puVar9 + uVar2);
    }
    if (((ulong)ppuVar4 & 1) != 0) {
      operator_delete(local_50);
    }
    return param_2;
  }
  uVar8 = FUN_03ff9c28();
  locale::~locale((locale *)&local_48);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar8);
}

