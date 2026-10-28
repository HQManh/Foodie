// rea decompile_all
// name: System.Globalization.GregorianCalendarHelper$$GetDaysInMonth
// address: 0x7532b04
// body: available
// range: 0x7532b04-0x7532c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7532c34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7532c98 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7532c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_GregorianCalendarHelper__GetDaysInMonth
              (undefined8 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_09521870 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb8);
    DAT_09521870 = 1;
  }
  iVar3 = System_Globalization_GregorianCalendarHelper__GetYearOffset(param_1,param_2,param_4,1);
  uVar2 = param_3 - 1;
  if (0xb < uVar2) {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208138);
    uVar4 = System_Environment__GetResourceString(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0921f8e8);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091ce2b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar4);
  }
  uVar1 = iVar3 + param_2;
  if (((uVar1 & 3) == 0) &&
     ((0x28f5c28 < (uVar1 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar1 * 0x40000000) ||
      ((int)uVar1 % 400 == 0)))) {
    if (*(int *)(DAT_09184eb8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = (long *)(*(long *)(DAT_09184eb8 + 0xb8) + 8);
  }
  else {
    if (*(int *)(DAT_09184eb8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar7 = *(long **)(DAT_09184eb8 + 0xb8);
  }
  lVar8 = *plVar7;
  if (lVar8 != 0) {
    if ((param_3 < *(uint *)(lVar8 + 0x18)) && (uVar2 < *(uint *)(lVar8 + 0x18))) {
      return *(int *)(lVar8 + 0x20 + (ulong)param_3 * 4) - *(int *)(lVar8 + 0x20 + (ulong)uVar2 * 4)
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

