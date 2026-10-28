// rea decompile_all
// name: _GAME.StageRace.StageRacePlayerUICtrl$$ShowEffectChangePoint
// address: 0x77f4ac0
// body: available
// range: 0x77f4ac0-0x77f4c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f4c34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_StageRace_StageRacePlayerUICtrl__ShowEffectChangePoint(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09523158 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b04b0);
    FUN_03f5c2a4(&DAT_091b04b8);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_091dbe38);
    DAT_09523158 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < 0) {
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x34) <= *(int *)(lVar2 + 0x3c)) {
        return 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
        if (lVar2 == 0) goto LAB_077f4c34;
      }
      iVar1 = *(int *)(lVar2 + 0x34);
LAB_077f4bf0:
      uVar3 = DG_Tweening_DOTweenModuleUI__DOValue((float)iVar1,0x3f000000,uVar3,0,0);
      FUN_04d95c7c(0x3f000000,uVar3,DAT_091dbe38);
      return 1;
    }
  }
  else {
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) != 0)) {
      if (*(int *)(*(long *)(lVar2 + 0x48) + 0x18) <= iVar1) {
        return 0;
      }
      if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar2 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
        if (lVar2 == 0) goto LAB_077f4c34;
      }
      if ((*(long *)(lVar2 + 0x48) != 0) &&
         (lVar2 = FUN_057e0998(*(long *)(lVar2 + 0x48),*(undefined4 *)(param_1 + 0x20),DAT_091b04b8)
         , lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x2c);
        if (iVar1 <= *(int *)(lVar2 + 0x30)) {
          return 0;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        goto LAB_077f4bf0;
      }
    }
  }
LAB_077f4c34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

