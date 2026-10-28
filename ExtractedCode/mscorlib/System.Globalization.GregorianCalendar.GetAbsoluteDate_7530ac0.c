// rea decompile_all
// name: System.Globalization.GregorianCalendar$$GetAbsoluteDate
// address: 0x7530ac0
// body: available
// range: 0x7530ac0-0x7530c8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7530c84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7530c88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7530c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_GregorianCalendar__GetAbsoluteDate(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_0952185b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184eb0);
    DAT_0952185b = 1;
  }
  if (0xffffd8f0 < param_1 - 10000) {
    if (0xfffffff3 < param_2 - 0xd) {
      if (((param_1 & 3) == 0) &&
         ((0x28f5c28 < ((param_1 & 0xffff) * -0x3d70a3d7 >> 2 | param_1 * 0x40000000) ||
          ((param_1 & 0xffff) + ((param_1 & 0xffff) / 400) * -400 == 0)))) {
        if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)(*(long *)(DAT_09184eb0 + 0xb8) + 8);
      }
      else {
        if (*(int *)(DAT_09184eb0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = *(long **)(DAT_09184eb0 + 0xb8);
      }
      if (0 < param_3) {
        lVar5 = *plVar4;
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(uint *)(lVar5 + 0x18) <= param_2) || (*(uint *)(lVar5 + 0x18) <= param_2 - 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        iVar1 = *(int *)(lVar5 + 0x20 + (ulong)(param_2 - 1) * 4);
        if (param_3 <= *(int *)(lVar5 + 0x20 + (ulong)param_2 * 4) - iVar1) {
          param_1 = param_1 - 1;
          return (long)(int)(((param_1 >> 2 & 0x3fff) / 0x19 ^ 0xffffffff) +
                             param_3 + param_1 * 0x16d + (param_1 >> 2) +
                             (param_1 >> 4 & 0xfff) / 0x19 + iVar1);
        }
      }
    }
  }
  uVar2 = thunk_FUN_03fc39d4(&DAT_09213858);
  uVar2 = System_Environment__GetResourceString(uVar2,0);
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  System_ArgumentOutOfRangeException___ctor(uVar3,0,uVar2,0);
  uVar2 = thunk_FUN_03fc39d4(&DAT_091ce258);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

