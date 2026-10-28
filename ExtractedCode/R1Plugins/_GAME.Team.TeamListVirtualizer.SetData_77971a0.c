// rea decompile_all
// name: _GAME.Team.TeamListVirtualizer$$SetData
// address: 0x77971a0
// body: available
// range: 0x77971a0-0x77973a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77973a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamListVirtualizer__SetData
               (undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4)

{
  float fVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  if ((DAT_09522dce & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dd48);
    FUN_03f5c2a4(&DAT_0919dd50);
    FUN_03f5c2a4(&DAT_091a6120);
    FUN_03f5c2a4(&DAT_091a6128);
    FUN_03f5c2a4(&DAT_091a6130);
    FUN_03f5c2a4(&DAT_091a9540);
    DAT_09522dce = 1;
  }
  plVar4 = (long *)(param_3 + 0x38);
  *plVar4 = param_4;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  thunk_FUN_03f5d7b8(plVar4,param_4);
  if (*(long *)(param_3 + 0x48) != 0) {
    FUN_06ef0948(&local_90,*(long *)(param_3 + 0x48),DAT_0919dd50);
    while( true ) {
      uVar3 = FUN_072556b0(&local_90,DAT_091a6128);
      fVar7 = (float)param_2;
      if ((uVar3 & 1) == 0) break;
      _GAME_Team_TeamListVirtualizer__Park(param_3,local_78);
    }
    FUN_072557d4(&local_90,DAT_091a6120);
    if (*(long *)(param_3 + 0x48) != 0) {
      FUN_06ef0694(*(long *)(param_3 + 0x48),DAT_0919dd48);
      bVar2 = DAT_09522dcb;
      fVar9 = *(float *)(param_3 + 0x28);
      fVar8 = *(float *)(param_3 + 0x2c);
      *(undefined8 *)(param_3 + 0x50) = 0xffffffff00000000;
      if ((bVar2 & 1) == 0) {
        FUN_03f5c2a4(&DAT_091b0c20);
        DAT_09522dcb = 1;
      }
      if (*plVar4 == 0) {
        fVar10 = 0.0;
      }
      else {
        fVar10 = (float)*(int *)(*plVar4 + 0x18);
      }
      if (*(long *)(param_3 + 0x20) != 0) {
        fVar11 = *(float *)(param_3 + 0x30);
        UnityEngine_RectTransform__get_offsetMin(*(long *)(param_3 + 0x20),0);
        lVar5 = *(long *)(param_3 + 0x18);
        if (lVar5 != 0) {
          fVar1 = 0.0;
          if (fVar7 <= -0.0) {
            fVar1 = -fVar7;
          }
          uVar6 = UnityEngine_RectTransform__get_sizeDelta(lVar5,0);
          UnityEngine_RectTransform__set_sizeDelta
                    (uVar6,fVar8 + fVar9 * fVar10 + fVar11 + fVar1,lVar5,0);
          lVar5 = *(long *)(param_3 + 0x18);
          if (lVar5 != 0) {
            uVar6 = UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
            UnityEngine_RectTransform__set_anchoredPosition(uVar6,0,lVar5,0);
            _GAME_Team_TeamListVirtualizer__UpdateWindow(param_3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

