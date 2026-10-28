// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$ResizeChatViewport
// address: 0x7795ad0
// body: available
// range: 0x7795ad0-0x7795d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7795d3c to 0x7794800 _GAME.Team.TeamChatInputBarUICtrl$$FitChatPadding (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7795d40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__ResizeChatViewport
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09522dbb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522dbb = 1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(uVar3,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_5 + 0x78) != 0) {
    plVar2 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_5 + 0x78),0);
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*plVar2 != DAT_09189c98) {
      return;
    }
    lVar4 = *(long *)(param_5 + 0x60);
    if (lVar4 != 0) {
      fVar5 = (float)UnityEngine_RectTransform__get_rect(lVar4,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_5 + 0x60) != 0) {
        UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x60),0);
        param_2 = param_4 + param_2;
        UnityEngine_Transform__TransformPoint(fVar5 + param_3 * 0.5,param_2,0,lVar4,0);
        UnityEngine_Transform__InverseTransformPoint(plVar2,0);
        fVar5 = param_2;
        UnityEngine_RectTransform__get_rect(plVar2,0);
        fVar7 = fVar5;
        UnityEngine_RectTransform__get_rect(plVar2,0);
        if (*(long *)(param_5 + 0x78) != 0) {
          fVar11 = param_4;
          UnityEngine_RectTransform__get_anchorMin(*(long *)(param_5 + 0x78),0);
          fVar13 = *(float *)(param_5 + 0x84);
          fVar6 = fVar7;
          UnityEngine_RectTransform__get_rect(plVar2,0);
          fVar8 = fVar6;
          UnityEngine_RectTransform__get_rect(plVar2,0);
          if (*(long *)(param_5 + 0x78) != 0) {
            UnityEngine_RectTransform__get_anchorMax(*(long *)(param_5 + 0x78),0);
            if (*(long *)(param_5 + 0x78) != 0) {
              fVar9 = fVar8;
              UnityEngine_RectTransform__get_offsetMax(*(long *)(param_5 + 0x78),0);
              if (*(long *)(param_5 + 0x78) != 0) {
                fVar5 = fVar5 + param_4 * fVar7;
                fVar12 = *(float *)(param_5 + 0x80);
                fVar10 = -1.0;
                fVar13 = fVar13 + fVar5;
                fVar6 = fVar6 + fVar11 * fVar8 + fVar9 + -1.0;
                fVar7 = fVar13;
                if (fVar13 <= fVar6) {
                  fVar7 = fVar6;
                }
                if (param_2 <= fVar7) {
                  fVar7 = param_2;
                }
                if (fVar13 <= param_2) {
                  fVar13 = fVar7;
                }
                fVar13 = fVar13 - fVar5;
                fVar5 = (float)UnityEngine_RectTransform__get_offsetMin(*(long *)(param_5 + 0x78),0)
                ;
                fVar5 = fVar5 - fVar12;
                fVar10 = fVar10 - fVar13;
                if (0.001 < fVar5 * fVar5 + fVar10 * fVar10) {
                  if (*(long *)(param_5 + 0x78) == 0) goto LAB_07795d40;
                  UnityEngine_RectTransform__set_offsetMin
                            (fVar12,fVar13,*(long *)(param_5 + 0x78),0);
                }
                _GAME_Team_TeamChatInputBarUICtrl__FitChatPadding(param_5);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_07795d40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

