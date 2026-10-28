// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$LateUpdate
// address: 0x7794a54
// body: available
// range: 0x7794a54-0x7794ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7794b58 to 0x7794ef4 _GAME.Team.TeamChatInputBarUICtrl$$RestoreLayout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7794ee8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7794ef0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_68;
  float local_54;
  
  if ((DAT_09522dba & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184280);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522dba = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x48);
  local_54 = 0.0;
  local_68 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) != 0) goto LAB_07794b38;
  if (*(long *)(param_4 + 0x20) == 0) goto LAB_07794ee8;
  uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_4 + 0x20),0);
  if ((uVar2 & 1) == 0) {
LAB_07794b38:
    _GAME_Team_TeamChatInputBarUICtrl__RestoreLayout(param_4);
    return;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x68);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar2 & 1) != 0) goto LAB_07794b38;
  if (*(long *)(param_4 + 0x48) == 0) goto LAB_07794ee8;
  if (*(char *)(*(long *)(param_4 + 0x48) + 0x260) != '\0') {
    if (*(int *)(DAT_09184280 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_EventSystems_EventSystem__get_current(0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09184280 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = UnityEngine_EventSystems_EventSystem__get_current(0);
      if ((lVar3 == 0) || (*(long *)(param_4 + 0x38) == 0)) goto LAB_07794ee8;
      uVar7 = *(undefined8 *)(lVar3 + 0x40);
      uVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x38),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar7,uVar6,0);
      if ((uVar2 & 1) == 0) {
        if (*(long *)(param_4 + 0x40) == 0) goto LAB_07794ee8;
        uVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x40),0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar2 = UnityEngine_Object__op_Equality(uVar7,uVar6,0);
        if ((uVar2 & 1) == 0) goto LAB_07794c6c;
      }
      plVar4 = *(long **)(param_4 + 0x48);
      if (plVar4 == (long *)0x0) goto LAB_07794ee8;
      (**(code **)(*plVar4 + 0x398))(plVar4,*(undefined8 *)(*plVar4 + 0x3a0));
    }
  }
LAB_07794c6c:
  if (*(long *)(param_4 + 0x58) != 0) {
    plVar4 = (long *)UnityEngine_Transform__GetParent(*(long *)(param_4 + 0x58),0);
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else if (*plVar4 != DAT_09189c98) {
      plVar4 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(plVar4,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if ((*(long *)(param_4 + 0x68) != 0) &&
       (lVar3 = UnityEngine_Canvas__get_rootCanvas(*(long *)(param_4 + 0x68),0), lVar3 != 0)) {
      iVar1 = UnityEngine_Canvas__get_renderMode(lVar3,0);
      if (iVar1 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = UnityEngine_Canvas__get_worldCamera(lVar3,0);
      }
      lVar3 = *(long *)(param_4 + 0x60);
      if (lVar3 != 0) {
        fVar8 = (float)UnityEngine_RectTransform__get_rect(lVar3,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(long *)(param_4 + 0x60) != 0) {
          UnityEngine_RectTransform__get_rect(*(long *)(param_4 + 0x60),0);
          fVar12 = 0.0;
          uVar9 = UnityEngine_Transform__TransformPoint(fVar8 + param_3 * 0.5,lVar3,0);
          if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar8 = fVar12;
          uVar10 = UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar9,param_2,uVar6,0);
          if ((*(long *)(param_4 + 0x48) != 0) &&
             (plVar5 = (long *)UnityEngine_Component__get_transform(*(long *)(param_4 + 0x48),0),
             plVar5 != (long *)0x0)) {
            if (*plVar5 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar5);
            }
            fVar11 = (float)UnityEngine_RectTransform__get_rect(plVar5,0);
            fVar8 = fVar8 * 0.5;
            fVar11 = fVar11 + fVar8;
            UnityEngine_RectTransform__get_rect(plVar5,0);
            UnityEngine_Transform__TransformPoint(fVar11,plVar5,0);
            UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar6,0);
            uVar2 = _GAME_Team_TeamChatInputBarUICtrl__TryGetKeyboardTop(param_4,&local_54);
            fVar11 = fVar8;
            if (fVar8 <= local_54) {
              fVar11 = local_54;
            }
            if ((uVar2 & 1) == 0) {
              fVar11 = fVar8;
            }
            if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                              (uVar10,fVar11,plVar4,uVar6,&local_68,0);
            if ((uVar2 & 1) == 0) {
              return;
            }
            if (plVar4 != (long *)0x0) {
              UnityEngine_Transform__InverseTransformPoint(uVar9,param_2,fVar12,plVar4,0);
              lVar3 = *(long *)(param_4 + 0x58);
              if (lVar3 != 0) {
                fVar8 = param_2;
                fVar12 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                UnityEngine_RectTransform__set_anchoredPosition
                          (fVar12 + 0.0,fVar8 + (local_68._4_4_ - param_2),lVar3,0);
                _GAME_Team_TeamChatInputBarUICtrl__ResizeChatViewport(param_4);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_07794ee8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

