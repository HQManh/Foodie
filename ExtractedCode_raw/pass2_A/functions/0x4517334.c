// rea decompile_all
// name: Utilities.ObjectScatterGroup$$GetRandomPosition
// address: 0x4517334
// body: available
// range: 0x4517334-0x45174bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45174b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45174bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ObjectScatterGroup__GetRandomPosition(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    iVar4 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
    iVar6 = *(int *)(param_1 + 0x44);
    iVar3 = *(int *)(param_1 + 0x48);
    lVar7 = *(long *)(param_1 + 0x28);
    uVar1 = param_2;
    if ((int)(iVar4 - 1U) <= (int)param_2) {
      uVar1 = iVar4 - 1U;
    }
    uVar2 = 0;
    if (-1 < (int)param_2) {
      uVar2 = uVar1;
    }
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (*(char *)(param_1 + 0x54) == '\0') {
      if (lVar7 == 0) goto LAB_045174b8;
      uVar9 = *(undefined4 *)(param_1 + 0x4c);
      uVar8 = *(undefined4 *)(param_1 + 0x50);
      uVar5 = UnityEngine_Transform__get_childCount(lVar7,0);
      lVar7 = Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
                        (uVar9,uVar8,CONCAT44(iVar3,iVar6),uVar5,0);
    }
    else {
      if (lVar7 == 0) goto LAB_045174b8;
      uVar9 = *(undefined4 *)(param_1 + 0x4c);
      uVar8 = *(undefined4 *)(param_1 + 0x50);
      uVar5 = UnityEngine_Transform__get_childCount(lVar7,0);
      lVar7 = Utilities_RandomUtility__GetRandomPositionsInDividedAreaNormalized
                        (uVar9,uVar8,CONCAT44(iVar3,iVar6),uVar5,iVar6 * 0x59 + iVar3 * 0x61,
                         *(undefined4 *)(param_1 + 0x58),0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      iVar6 = UnityEngine_Transform__get_childCount(*(long *)(param_1 + 0x28),0);
      if (*(long *)(param_1 + 0x28) != 0) {
        UnityEngine_Transform__GetChild(*(long *)(param_1 + 0x28),uVar2,0);
        if (*(char *)(param_1 + 0x54) == '\0') {
          UnityEngine_Random__get_insideUnitCircle(0);
        }
        else {
          Utilities_RandomUtility__RandomInsideInitCircle
                    (iVar6 + uVar2 * 0x61,*(undefined4 *)(param_1 + 0x58),0);
        }
        if (lVar7 != 0) {
          if (*(uint *)(lVar7 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          return;
        }
      }
    }
  }
LAB_045174b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

