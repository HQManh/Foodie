// rea decompile_all
// name: Utilities.RandomUtility$$GetWeightedRandomIndexesUseWeightSort
// address: 0x4509ab0
// body: available
// range: 0x4509ab0-0x4509c3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4509c38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4509c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_RandomUtility__GetWeightedRandomIndexesUseWeightSort(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 uVar7;
  
  if ((DAT_095184f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0738);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_095184f0 = 1;
  }
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x18)) {
      uVar1 = param_2;
    }
    lVar3 = FUN_03f5c394(DAT_091801b8);
    lVar4 = FUN_03f5c394(DAT_09180528,*(undefined4 *)(param_1 + 0x18));
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      if (lVar3 == 0) goto LAB_04509c3c;
      uVar6 = 0;
      uVar5 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      do {
        if ((*(uint *)(lVar3 + 0x18) <= uVar6) ||
           (*(int *)(lVar3 + 0x20 + uVar6 * 4) = (int)uVar6, uVar5 <= uVar6)) goto LAB_04509c38;
        uVar7 = UnityEngine_Random__Range(0,*(undefined4 *)(param_1 + 0x20 + uVar6 * 4),0);
        if (lVar4 == 0) goto LAB_04509c3c;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04509c38;
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar5 = (ulong)uVar2;
        *(undefined4 *)(lVar4 + 0x20 + uVar6 * 4) = uVar7;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
    FUN_04950c9c(lVar4,lVar3,DAT_091c0738);
    lVar4 = FUN_03f5c394(DAT_091801b8,(ulong)uVar1);
    if (0 < (int)uVar1) {
      if (lVar3 == 0) goto LAB_04509c3c;
      uVar2 = *(uint *)(lVar3 + 0x18);
      uVar6 = 0;
      do {
        if (uVar2 == uVar6) {
LAB_04509c38:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar4 == 0) goto LAB_04509c3c;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_04509c38;
        *(undefined4 *)(lVar4 + 0x20 + uVar6 * 4) = *(undefined4 *)(lVar3 + 0x20 + uVar6 * 4);
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    return;
  }
LAB_04509c3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

