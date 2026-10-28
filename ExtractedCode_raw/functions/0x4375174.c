// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameControllerAbstract$$ApplyUnscaledTime
// address: 0x4375174
// body: available
// range: 0x4375174-0x437529b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4375294 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4375298 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameControllerAbstract__ApplyUnscaledTime
               (undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_28;
  
  if ((DAT_095178fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c57f8);
    FUN_03f5c2a4(&DAT_091c5840);
    DAT_095178fe = 1;
  }
  local_28 = 0;
  lVar2 = FUN_04a6ac70(param_1,1,DAT_091c57f8);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) goto LAB_04375298;
        lVar3 = *(long *)(lVar2 + 0x20 + lVar4 * 8);
        if (lVar3 == 0) goto LAB_04375294;
        UnityEngine_Animator__set_updateMode(lVar3,2,0);
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    lVar2 = FUN_04a6ac70(param_1,1,DAT_091c5840);
    if (lVar2 != 0) {
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          if (uVar1 <= (uint)lVar4) {
LAB_04375298:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar3 = *(long *)(lVar2 + 0x20 + lVar4 * 8);
          if (lVar3 == 0) goto LAB_04375294;
          local_28 = UnityEngine_ParticleSystem__get_main(lVar3,0);
          UnityEngine_ParticleSystem_MainModule__set_useUnscaledTime(&local_28,1,0);
          uVar1 = *(uint *)(lVar2 + 0x18);
          lVar4 = lVar4 + 1;
        } while ((int)lVar4 < (int)uVar1);
      }
      return;
    }
  }
LAB_04375294:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

