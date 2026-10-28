// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardTabPlayerCtrl$$Bind
// address: 0x77c507c
// body: available
// range: 0x77c507c-0x77c5263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c525c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c5260 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardTabPlayerCtrl__Bind(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09522f4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919db98);
    FUN_03f5c2a4(&DAT_0919db08);
    FUN_03f5c2a4(&DAT_0919dba0);
    FUN_03f5c2a4(&DAT_091aae20);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09522f4c = 1;
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar2 = _GAME_Leaderboard_UILeaderboardTabPlayerCtrl__Take(param_1,param_2);
  if ((lVar2 != 0) &&
     (plVar3 = (long *)UnityEngine_Component__get_transform(lVar2,0), plVar3 != (long *)0x0)) {
    if (*plVar3 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    UnityEngine_RectTransform__set_anchoredPosition
              (0,-((float)param_2 * 225.0 + 30.0 + 112.5),plVar3,0);
    lVar5 = *(long *)(lVar2 + 0x20);
    iVar1 = _GAME_Leaderboard_UILeaderboardTabPlayerCtrl__get_SelfIndex(param_1);
    if (lVar5 != 0) {
      UnityEngine_GameObject__SetActive(lVar5,iVar1 != param_2,0);
      if (*(long *)(param_1 + 0xd0) != 0) {
        uVar4 = FUN_06ef59e0(*(long *)(param_1 + 0xd0),param_2,&local_70,DAT_0919db98);
        if ((uVar4 & 1) == 0) {
          if (*(long *)(param_1 + 0xb0) == 0) goto LAB_077c525c;
          lVar6 = *(long *)(param_1 + 0xd0);
          lVar5 = FUN_057e0998(*(long *)(param_1 + 0xb0),param_2,DAT_091aae20);
          if (lVar5 == 0) goto LAB_077c525c;
          _GAME_Leaderboard_ABIServerRankPlayerItemModel__GetPreviewEnvelope(&local_90);
          uStack_68 = uStack_88;
          local_70 = local_90;
          uStack_58 = uStack_78;
          uStack_60 = uStack_80;
          if (lVar6 == 0) goto LAB_077c525c;
          uStack_48 = uStack_88;
          local_50 = local_90;
          uStack_38 = uStack_78;
          uStack_40 = uStack_80;
          FUN_06ef3de4(lVar6,param_2,&local_50,DAT_0919dba0);
        }
        if (*(long *)(lVar2 + 0x80) != local_70) {
          uStack_a8 = uStack_68;
          local_b0 = local_70;
          uStack_98 = uStack_58;
          uStack_a0 = uStack_60;
          _GAME_Leaderboard_PlayerRankItemUICtrl__UpdateUIData(lVar2,(long)(param_2 + 1),&local_b0);
        }
        if (*(long *)(param_1 + 200) != 0) {
          FUN_06ef04f8(*(long *)(param_1 + 200),param_2,lVar2,DAT_0919db08);
          return;
        }
      }
    }
  }
LAB_077c525c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

