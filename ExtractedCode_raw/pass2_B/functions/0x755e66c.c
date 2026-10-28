// rea decompile_all
// name: System.Collections.Hashtable$$CopyValues
// address: 0x755e66c
// body: available
// range: 0x755e66c-0x755e71b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x755e714 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x755e718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_Hashtable__CopyValues(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = *(int *)(lVar3 + 0x18) - 1;
    if (-1 < (int)uVar2) {
      do {
        puVar1 = (undefined8 *)(lVar3 + 0x28 + (ulong)uVar2 * 0x18);
        uVar4 = (ulong)uVar2;
        while( true ) {
          if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558(auVar5._0_8_,auVar5._8_8_,param_3);
          }
          if ((puVar1[-1] != 0) && (puVar1[-1] != *(long *)(param_1 + 0x10))) break;
          uVar4 = uVar4 - 1;
          puVar1 = puVar1 + -3;
          if ((int)uVar4 < 0) {
            return;
          }
        }
        if (param_2 == 0) goto LAB_0755e718;
        auVar5 = System_Array__SetValue(param_2,*puVar1,param_3,0);
        uVar2 = (int)uVar4 - 1;
        param_3 = (ulong)((int)param_3 + 1);
      } while (-1 < (int)uVar2);
    }
    return;
  }
LAB_0755e718:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

