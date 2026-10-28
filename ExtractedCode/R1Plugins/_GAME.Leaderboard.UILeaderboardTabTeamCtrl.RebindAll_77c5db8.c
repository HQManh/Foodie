// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardTabTeamCtrl$$RebindAll
// address: 0x77c5db8
// body: available
// range: 0x77c5db8-0x77c6033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c602c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c6030 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardTabTeamCtrl__RebindAll(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 in_d3;
  float fVar9;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if ((DAT_09522f60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dd48);
    FUN_03f5c2a4(&DAT_0919dd50);
    FUN_03f5c2a4(&DAT_091a6120);
    FUN_03f5c2a4(&DAT_091a6128);
    FUN_03f5c2a4(&DAT_091a6130);
    FUN_03f5c2a4(&DAT_091a9538);
    FUN_03f5c2a4(&DAT_091a9540);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522f60 = 1;
  }
  local_60 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_06ef0948(&local_a8,*(long *)(param_1 + 0xa0),DAT_0919dd50);
    local_60 = local_88;
    puStack_78 = puStack_a0;
    local_80 = local_a8;
    local_68 = uStack_90;
    local_70 = local_98;
    local_a8 = 0;
    puStack_a0 = &local_80;
    while( true ) {
      uVar2 = FUN_072556b0(&local_80,DAT_091a6128);
      fVar8 = (float)in_d3;
      if ((uVar2 & 1) == 0) break;
      _GAME_Leaderboard_UILeaderboardTabTeamCtrl__Park(param_1,local_70 & 0xffffffff,local_68);
    }
    FUN_072557d4(&local_80,DAT_091a6120);
    if (*(long *)(param_1 + 0xa0) != 0) {
      FUN_06ef0694(*(long *)(param_1 + 0xa0),DAT_0919dd48);
      bVar1 = DAT_09522f58;
      *(undefined8 *)(param_1 + 0xa8) = 0xffffffff00000000;
      if ((bVar1 & 1) == 0) {
        FUN_03f5c2a4(&DAT_091b0c20);
        DAT_09522f58 = 1;
      }
      if (*(long *)(param_1 + 0x90) == 0) {
        fVar9 = 530.0;
      }
      else {
        fVar9 = (float)*(int *)(*(long *)(param_1 + 0x90) + 0x18) * 182.0 + 30.0 + 500.0;
      }
      lVar4 = *(long *)(param_1 + 0x70);
      if (lVar4 != 0) {
        UnityEngine_RectTransform__get_sizeDelta(lVar4,0);
        fVar6 = fVar9;
        UnityEngine_RectTransform__set_sizeDelta(lVar4,0);
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (plVar3 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_1 + 0x70),0),
           plVar3 != (long *)0x0)) {
          if (*plVar3 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          UnityEngine_RectTransform__get_rect(plVar3,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_1 + 0x70) != 0) {
            uVar5 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_1 + 0x70),0);
            if (*(long *)(param_1 + 0x70) != 0) {
              fVar7 = 0.0;
              if (0.0 <= fVar9 - fVar8) {
                fVar7 = fVar9 - fVar8;
              }
              if (fVar6 <= fVar7) {
                fVar7 = fVar6;
              }
              fVar8 = 0.0;
              if (0.0 <= fVar6) {
                fVar8 = fVar7;
              }
              UnityEngine_RectTransform__set_anchoredPosition
                        (uVar5,fVar8,*(long *)(param_1 + 0x70),0);
              _GAME_Leaderboard_UILeaderboardTabTeamCtrl__UpdateRowWindow(param_1);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

