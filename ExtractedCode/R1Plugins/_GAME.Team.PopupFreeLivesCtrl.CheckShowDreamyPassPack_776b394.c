// rea decompile_all
// name: _GAME.Team.PopupFreeLivesCtrl$$CheckShowDreamyPassPack
// address: 0x776b394
// body: available
// range: 0x776b394-0x776b49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776b498 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776b49c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupFreeLivesCtrl__CheckShowDreamyPassPack(long param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09522c83 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_09189938);
    DAT_09522c83 = 1;
  }
  plVar3 = *(long **)(param_1 + 0x108);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x188))(plVar3,100,*(undefined8 *)(*plVar3 + 400));
    uVar6 = *(undefined8 *)(param_1 + 0x108);
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_R1Features__IsEventEnabled(0,0);
    bVar2 = false;
    if ((uVar4 & 1) != 0) {
      uVar4 = _GAME_DreamyPass_DreamyPassManager__get_IsUnlocked(0,0);
      if ((uVar4 & 1) == 0) {
        bVar2 = false;
      }
      else {
        if (**(long **)(DAT_09183d58 + 0xb8) == 0) goto LAB_0776b49c;
        bVar2 = *(char *)(**(long **)(DAT_09183d58 + 0xb8) + 0x20) == '\0';
      }
    }
    _GAME_Utils_HelperMonoBehaviour__SetActive(uVar6,bVar2,0);
    lVar1 = *(long *)(param_1 + 0x110);
    uVar4 = _GAME_Utils_HelperMonoBehaviour__ActiveSelf(*(undefined8 *)(param_1 + 0x108),0);
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 0x120);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x118);
    }
    if ((lVar5 != 0) && (UnityEngine_Transform__get_position(lVar5,0), lVar1 != 0)) {
      UnityEngine_Transform__set_position(lVar1,0);
      return;
    }
  }
LAB_0776b49c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

