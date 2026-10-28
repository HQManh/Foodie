// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$Awake
// address: 0x7794048
// body: available
// range: 0x7794048-0x7794173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7794114 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7794170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__Awake
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_09522db8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09522db8 = 1;
  }
  plVar2 = (long *)UnityEngine_Component__get_transform(param_3,0);
  lVar1 = DAT_09189c98;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_3 + 0x58) = 0;
  }
  else if ((*plVar2 != DAT_09189c98) || (*(long **)(param_3 + 0x58) = plVar2, *plVar2 != lVar1))
  goto LAB_07794110;
  thunk_FUN_03f5d7b8(param_3 + 0x58,plVar2);
  if (*(long *)(param_3 + 0x20) != 0) {
    plVar2 = (long *)UnityEngine_GameObject__get_transform(*(long *)(param_3 + 0x20),0);
    lVar1 = DAT_09189c98;
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(param_3 + 0x60) = 0;
    }
    else if ((*plVar2 != DAT_09189c98) || (*(long **)(param_3 + 0x60) = plVar2, *plVar2 != lVar1)) {
LAB_07794110:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2);
    }
    thunk_FUN_03f5d7b8(param_3 + 0x60,plVar2);
    uVar3 = FUN_04a6a6d8(param_3,DAT_091c5630);
    *(undefined8 *)(param_3 + 0x68) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x68),uVar3);
    if (*(long *)(param_3 + 0x58) != 0) {
      uVar4 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_3 + 0x58),0);
      *(undefined4 *)(param_3 + 0x70) = uVar4;
      *(undefined4 *)(param_3 + 0x74) = param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

