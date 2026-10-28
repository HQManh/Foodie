// rea decompile_all
// name: Utilities.ObjectScatterGroup$$GetRandomAngles
// address: 0x45174c0
// body: available
// range: 0x45174c0-0x45175cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45175c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45175c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectScatterGroup__GetRandomAngles(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  if ((DAT_09518571 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09518571 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
    lVar4 = FUN_03f5c394(DAT_09180528,uVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar3 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
      if (-1 < (int)(iVar3 - 1U)) {
        iVar6 = iVar3 * 0x61;
        uVar5 = (ulong)(iVar3 - 1U);
        do {
          iVar6 = iVar6 + -0x61;
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_045175c4;
          iVar3 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
          if (*(char *)(param_1 + 0x54) == '\0') {
            uVar2 = UnityEngine_Random__Range
                              (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),0);
          }
          else {
            uVar2 = Utilities_RandomUtility__GetRange
                              (*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60),
                               iVar3 + iVar6,*(undefined4 *)(param_1 + 0x58),0);
          }
          if (lVar4 == 0) goto LAB_045175c4;
          if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(undefined4 *)(lVar4 + 0x20 + uVar5 * 4) = uVar2;
          bVar1 = 0 < (long)uVar5;
          uVar5 = uVar5 - 1;
        } while (bVar1);
      }
      return lVar4;
    }
  }
LAB_045175c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

