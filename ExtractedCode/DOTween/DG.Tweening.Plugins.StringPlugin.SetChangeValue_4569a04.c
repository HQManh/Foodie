// rea decompile_all
// name: DG.Tweening.Plugins.StringPlugin$$SetChangeValue
// address: 0x4569a04
// body: available
// range: 0x4569a04-0x4569c87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4569c84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_StringPlugin__SetChangeValue(undefined8 param_1,long param_2)

{
  bool bVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  
  if ((DAT_09518861 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189db0);
    FUN_03f5c2a4(&DAT_091fa5a8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09518861 = 1;
  }
  if (param_2 == 0) goto LAB_04569c84;
  *(undefined8 *)(param_2 + 0x138) = *(undefined8 *)(param_2 + 0x130);
  thunk_FUN_03f5d7b8(param_2 + 0x138);
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x128),0);
  uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x138),0);
  if ((uVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x128);
    if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_Text_RegularExpressions_Regex__Replace(uVar9,DAT_091fa5a8,DAT_091f5700,0);
    if (lVar5 == 0) goto LAB_04569c84;
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(param_2 + 0x150) = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x138);
    if (*(int *)(DAT_09189db0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = System_Text_RegularExpressions_Regex__Replace(uVar9,DAT_091fa5a8,DAT_091f5700,0);
    if (lVar5 == 0) goto LAB_04569c84;
    uVar6 = *(undefined4 *)(lVar5 + 0x10);
  }
  else {
    uVar6 = 0;
  }
  *(undefined4 *)(param_2 + 0x154) = uVar6;
  if ((uVar3 & 1) == 0) {
    if (*(long *)(param_2 + 0x128) == 0) goto LAB_04569c84;
    iVar8 = *(int *)(*(long *)(param_2 + 0x128) + 0x10);
    if ((uVar4 & 1) == 0) goto LAB_04569b58;
LAB_04569b40:
    iVar7 = 0;
  }
  else {
    iVar8 = 0;
    if ((uVar4 & 1) != 0) goto LAB_04569b40;
LAB_04569b58:
    if (*(long *)(param_2 + 0x138) == 0) goto LAB_04569c84;
    iVar7 = *(int *)(*(long *)(param_2 + 0x138) + 0x10);
  }
  if (3 < iVar8) {
    if (*(long *)(param_2 + 0x128) == 0) goto LAB_04569c84;
    sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x128),iVar8 + -1,0);
    if (sVar2 == 0x3e) {
      iVar8 = iVar8 + -3;
      do {
        if (*(long *)(param_2 + 0x128) == 0) goto LAB_04569c84;
        sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x128),iVar8,0);
        if (sVar2 == 0x3c) {
          if (*(long *)(param_2 + 0x128) == 0) goto LAB_04569c84;
          sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x128),iVar8 + 1,0);
          if (sVar2 != 0x2f) {
            *(int *)(param_2 + 0x150) = *(int *)(param_2 + 0x150) + 1;
          }
          break;
        }
        bVar1 = 0 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar1);
    }
  }
  if (3 < iVar7) {
    if (*(long *)(param_2 + 0x138) == 0) {
LAB_04569c84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x138),iVar7 + -1,0);
    if (sVar2 == 0x3e) {
      iVar8 = iVar7 + -3;
      do {
        if (*(long *)(param_2 + 0x138) == 0) goto LAB_04569c84;
        sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x138),iVar8,0);
        if (sVar2 == 0x3c) {
          if (*(long *)(param_2 + 0x138) != 0) {
            sVar2 = System_String__get_Chars(*(long *)(param_2 + 0x138),iVar8 + 1,0);
            if (sVar2 == 0x2f) {
              return;
            }
            *(int *)(param_2 + 0x154) = *(int *)(param_2 + 0x154) + 1;
            return;
          }
          goto LAB_04569c84;
        }
        bVar1 = 0 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar1);
    }
  }
  return;
}

