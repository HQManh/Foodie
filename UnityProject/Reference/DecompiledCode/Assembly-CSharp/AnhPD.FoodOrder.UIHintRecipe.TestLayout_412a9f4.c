// rea decompile_all
// name: AnhPD.FoodOrder.UIHintRecipe$$TestLayout
// address: 0x412a9f4
// body: available
// range: 0x412a9f4-0x412adcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412ac78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412adc8 to 0x412a690 AnhPD.FoodOrder.UIHintRecipe$$LayoutRects (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintRecipe__TestLayout
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if ((DAT_095162f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5550);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af728);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_0917ca48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095162f9 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0400(lVar3,DAT_091af728);
  lVar4 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0400(lVar4,DAT_091af728);
  lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
  if (lVar5 != 0) {
    iVar10 = 0;
    do {
      iVar2 = UnityEngine_Transform__get_childCount(lVar5,0);
      if (iVar2 <= iVar10) {
        if (lVar3 == 0) break;
        if (*(int *)(lVar3 + 0x18) == 0) {
          return;
        }
        lVar5 = FUN_057e0998(lVar3,0,DAT_091af778);
        if (lVar5 == 0) break;
        UnityEngine_RectTransform__get_rect(lVar5,0);
        uVar11 = param_3;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = FUN_057e0998(lVar3,0,DAT_091af778);
        if ((lVar5 == 0) || (UnityEngine_RectTransform__get_rect(lVar5,0), lVar4 == 0)) break;
        uVar13 = 0;
        if (*(int *)(lVar4 + 0x18) < 1) {
          uVar11 = 0;
        }
        else {
          uVar12 = param_4;
          lVar5 = FUN_057e0998(lVar4,0,DAT_091af778);
          if (lVar5 == 0) break;
          UnityEngine_RectTransform__get_rect(lVar5,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (0 < *(int *)(lVar4 + 0x18)) {
            lVar5 = FUN_057e0998(lVar4,0,DAT_091af778);
            if (lVar5 == 0) break;
            UnityEngine_RectTransform__get_rect(lVar5,0);
            uVar13 = uVar12;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
          }
        }
        AnhPD_FoodOrder_UIHintRecipe__LayoutRects(param_3,param_4,uVar11,uVar13,param_5,lVar3,lVar4)
        ;
        return;
      }
      lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
      if (lVar5 == 0) break;
      plVar6 = (long *)UnityEngine_Transform__GetChild(lVar5,iVar10,0);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else if (*plVar6 != DAT_09189c98) {
        plVar6 = (long *)0x0;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = UnityEngine_Object__op_Implicit(plVar6,0);
      if ((uVar7 & 1) != 0) {
        if ((plVar6 == (long *)0x0) ||
           (lVar5 = UnityEngine_Component__get_gameObject(plVar6,0), lVar5 == 0)) break;
        uVar7 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
        if ((uVar7 & 1) != 0) {
          uVar8 = FUN_04a6a14c(plVar6,DAT_091c5550);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar7 = UnityEngine_Object__op_Implicit(uVar8,0);
          lVar5 = DAT_091af738;
          if ((uVar7 & 1) == 0) {
            if (lVar4 == 0) break;
            lVar9 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (*(uint *)(lVar9 + 0x18) <= uVar1) {
              lVar9 = *(long *)(lVar5 + 0x20);
              lVar5 = lVar4;
              goto LAB_0412ac58;
            }
            lVar9 = lVar9 + (long)(int)uVar1 * 8;
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          }
          else {
            if (lVar3 == 0) break;
            lVar9 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar9 == 0) break;
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (*(uint *)(lVar9 + 0x18) <= uVar1) {
              lVar9 = *(long *)(lVar5 + 0x20);
              lVar5 = lVar3;
LAB_0412ac58:
              FUN_057e0c68(lVar5,plVar6,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
              goto LAB_0412ac68;
            }
            lVar9 = lVar9 + (long)(int)uVar1 * 8;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          }
          *(undefined8 *)(lVar9 + 0x20) = plVar6;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x20),plVar6);
        }
      }
LAB_0412ac68:
      iVar10 = iVar10 + 1;
      lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

