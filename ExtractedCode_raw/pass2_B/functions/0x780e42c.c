// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$ReloadData
// address: 0x780e42c
// body: available
// range: 0x780e42c-0x780e74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780e74c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__ReloadData(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  if ((DAT_09523243 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_091ac718);
    FUN_03f5c2a4(&DAT_091ab400);
    FUN_03f5c2a4(&DAT_0917bd08);
    DAT_09523243 = 1;
  }
  uVar5 = _GAME_DreamyPass_DreamyPassDbModel__Load();
  **(undefined8 **)(DAT_09183d58 + 0xb8) = uVar5;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183d58 + 0xb8),uVar5);
  lVar7 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar7 == 0) {
    _GAME_DreamyPass_DreamyPassManager__ResetData();
    lVar7 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar7 == 0) goto LAB_0780e74c;
  }
  plVar10 = (long *)(lVar7 + 0x30);
  if (*plVar10 == 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(lVar7,DAT_091ab3e0);
    *plVar10 = lVar7;
    thunk_FUN_03f5d7b8(plVar10,lVar7);
    lVar7 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar7 == 0) goto LAB_0780e74c;
  }
  if (*(long *)(lVar7 + 0x30) == 0) goto LAB_0780e74c;
  iVar1 = *(int *)(*(long *)(lVar7 + 0x30) + 0x18);
  lVar7 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
  if (lVar7 == 0) goto LAB_0780e74c;
  iVar2 = *(int *)(lVar7 + 0x18);
  iVar9 = iVar1;
  if (iVar1 < iVar2) {
    do {
      lVar7 = DAT_091ab3e8;
      if ((**(long **)(DAT_09183d58 + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x30), lVar6 == 0))
      goto LAB_0780e74c;
      lVar8 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0780e74c;
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        *(undefined1 *)(lVar8 + (int)uVar3 + 0x20) = 0;
      }
      else {
        FUN_0571c0e8(lVar6,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
      if (lVar7 == 0) goto LAB_0780e74c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar7 + 0x18));
  }
  lVar7 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar7 == 0) goto LAB_0780e74c;
  plVar10 = (long *)(lVar7 + 0x38);
  if (*plVar10 == 0) {
    lVar7 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(lVar7,DAT_091ab3e0);
    *plVar10 = lVar7;
    thunk_FUN_03f5d7b8(plVar10,lVar7);
    lVar7 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar7 == 0) goto LAB_0780e74c;
  }
  if (*(long *)(lVar7 + 0x38) == 0) goto LAB_0780e74c;
  iVar9 = *(int *)(*(long *)(lVar7 + 0x38) + 0x18);
  lVar7 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
  if (lVar7 == 0) goto LAB_0780e74c;
  if (iVar9 < *(int *)(lVar7 + 0x18)) {
    do {
      lVar7 = DAT_091ab3e8;
      if ((**(long **)(DAT_09183d58 + 0xb8) == 0) ||
         (lVar6 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x38), lVar6 == 0))
      goto LAB_0780e74c;
      lVar8 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0780e74c;
      uVar3 = *(uint *)(lVar6 + 0x18);
      if (uVar3 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar6 + 0x18) = uVar3 + 1;
        *(undefined1 *)(lVar8 + (int)uVar3 + 0x20) = 0;
      }
      else {
        FUN_0571c0e8(lVar6,0,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
      lVar7 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
      if (lVar7 == 0) goto LAB_0780e74c;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar7 + 0x18));
LAB_0780e6f0:
    if (**(long **)(DAT_09183d58 + 0xb8) == 0) goto LAB_0780e74c;
    _GAME_DreamyPass_DreamyPassDbModel__AddSaveAction();
  }
  else if (iVar1 < iVar2) goto LAB_0780e6f0;
  lVar7 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar7 != 0) {
    uVar4 = _GAME_DreamyPass_SODreamyPassConfig__GetPointShowUI(*(undefined4 *)(lVar7 + 0x24));
    lVar6 = DAT_09183d58;
    *(undefined4 *)(lVar7 + 0x44) = uVar4;
    lVar7 = **(long **)(lVar6 + 0xb8);
    if (lVar7 != 0) {
      uVar4 = _GAME_DreamyPass_SODreamyPassConfig__GetLevelByPoint(*(undefined4 *)(lVar7 + 0x24));
      *(undefined4 *)(lVar7 + 0x40) = uVar4;
      return;
    }
  }
LAB_0780e74c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

