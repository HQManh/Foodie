// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceInfoCtrl$$Open
// address: 0x77f24b8
// body: available
// range: 0x77f24b8-0x77f261b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f25f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2618 to 0x774ae44 _GAME.GameUI.PopupBaseCtrl$$Open (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceInfoCtrl__Open(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((DAT_09523101 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091dbe48);
    DAT_09523101 = 1;
  }
  lVar1 = *(long *)(param_1 + 0xe8);
  if (lVar1 != 0) {
    iVar5 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar5) {
        _GAME_GameUI_PopupBaseCtrl__Open(param_1,3,0);
        return;
      }
      lVar1 = FUN_057e0998(lVar1,iVar5,DAT_091acd88);
      if (lVar1 == 0) break;
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      lVar2 = UnityEngine_GameObject__get_transform(lVar1,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar2 == 0) break;
      puVar4 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale(*puVar4,puVar4[1],puVar4[2],lVar2,0);
      uVar3 = UnityEngine_GameObject__get_transform(lVar1,0);
      uVar3 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e4ccccd,uVar3,0);
      FUN_04d95c7c((float)iVar5 * 0.1,uVar3,DAT_091dbe48);
      lVar1 = *(long *)(param_1 + 0xe8);
      iVar5 = iVar5 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

