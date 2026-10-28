// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$GetCombinedPatterns
// address: 0x750379c
// body: available
// range: 0x750379c-0x75038d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75038cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75038d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__GetCombinedPatterns
               (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  if ((DAT_09521694 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521694 = 1;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar1 = FUN_03f5c394(DAT_091805f8,*(int *)(param_2 + 0x18) * *(int *)(param_1 + 0x18));
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (0 < (int)uVar4) {
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      uVar5 = 0;
      iVar6 = 0;
      do {
        if (0 < (int)uVar3) {
          uVar7 = 0;
          do {
            if ((*(uint *)(param_1 + 0x18) <= uVar5) || (uVar3 <= uVar7)) {
LAB_075038cc:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar4 = System_String__Concat
                              (*(undefined8 *)(param_1 + uVar5 * 8 + 0x20),param_3,
                               *(undefined8 *)(param_2 + 0x20 + uVar7 * 8),0);
            if (lVar1 == 0) goto LAB_075038d0;
            uVar2 = iVar6 + (int)uVar7;
            if (*(uint *)(lVar1 + 0x18) <= uVar2) goto LAB_075038cc;
            *(undefined8 *)(lVar1 + (long)(int)uVar2 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8(lVar1 + 0x20 + (long)(int)uVar2 * 8);
            uVar3 = (ulong)*(uint *)(param_2 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(param_2 + 0x18));
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          iVar6 = iVar6 + (int)uVar7;
        }
        uVar5 = uVar5 + 1;
      } while ((long)uVar5 < (long)(int)uVar4);
    }
    return lVar1;
  }
LAB_075038d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

