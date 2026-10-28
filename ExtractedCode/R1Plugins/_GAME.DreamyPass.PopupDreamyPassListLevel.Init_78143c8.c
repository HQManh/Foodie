// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassListLevel$$Init
// address: 0x78143c8
// body: available
// range: 0x78143c8-0x7814627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7814624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassListLevel__Init(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long local_68;
  long local_58;
  
  if ((DAT_09523279 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c58e8);
    FUN_03f5c2a4(&DAT_091c59e8);
    FUN_03f5c2a4(&DAT_091d6110);
    FUN_03f5c2a4(&DAT_091d6118);
    FUN_03f5c2a4(&DAT_091ba348);
    FUN_03f5c2a4(&DAT_0917e700);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09523279 = 1;
  }
  local_58 = 0;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  local_68 = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),param_2);
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = FUN_04a6b048(*(long *)(param_1 + 0x28),&local_58,DAT_091c59e8);
    if ((uVar2 & 1) != 0) {
      if (local_58 == 0) goto LAB_07814624;
      UnityEngine_Behaviour__set_enabled(local_58,0,0);
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar2 = FUN_04a6b048(*(long *)(param_1 + 0x28),&local_68,DAT_091c58e8);
      if ((uVar2 & 1) != 0) {
        if (local_68 == 0) goto LAB_07814624;
        UnityEngine_Behaviour__set_enabled(local_68,0,0);
      }
      lVar5 = *(long *)(param_1 + 0x28);
      if (lVar5 != 0) {
        uVar6 = UnityEngine_RectTransform__get_sizeDelta(lVar5,0);
        iVar1 = _GAME_DreamyPass_PopupDreamyPassListLevel__get_RowCount();
        UnityEngine_RectTransform__set_sizeDelta
                  (uVar6,(float)iVar1 * 325.0 + 335.0 + 1261.5,lVar5,0);
        _GAME_DreamyPass_PopupDreamyPassListLevel__NormalizeRow(*(undefined8 *)(param_1 + 0x18));
        _GAME_DreamyPass_PopupDreamyPassListLevel__NormalizeRow(*(undefined8 *)(param_1 + 0x20));
        _GAME_DreamyPass_PopupDreamyPassListLevel__Park(param_1,*(undefined8 *)(param_1 + 0x20));
        uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar3,param_1,DAT_091d6118,0);
        if (*(int *)(DAT_0917e700 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = FUN_060df21c(uVar3,1,param_2,DAT_091ba348);
        uVar3 = DAT_0918c678;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0x58) = uVar6;
        uVar3 = thunk_FUN_03f9944c(uVar3);
        UnityEngine_Events_UnityAction___ctor(uVar3,param_1,DAT_091d6110,0);
        _GAME_Utils_HelperButton__AddOnClickListener(uVar4,uVar3,0);
        _GAME_DreamyPass_PopupDreamyPassListLevel__UpdateWindow(param_1);
        return;
      }
    }
  }
LAB_07814624:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

