// rea decompile_all
// name: AnhPD.FoodOrder.UIHintRecipe$$ApplyLayout
// address: 0x412a230
// body: available
// range: 0x412a230-0x412a68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412a658 to 0x412a690 AnhPD.FoodOrder.UIHintRecipe$$LayoutRects (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x412a67c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412a684 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412a68c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintRecipe__ApplyLayout
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,
               undefined4 param_4,long param_5,int param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if ((DAT_095162f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd9f8);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af730);
    FUN_03f5c2a4(&DAT_091acd88);
    FUN_03f5c2a4(&DAT_091b13e8);
    FUN_03f5c2a4(&DAT_0917ca48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095162f8 = 1;
  }
  if (param_6 == 0) {
    return;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0478(lVar2,param_6,DAT_091af730);
  if (0 < param_6) {
    iVar9 = 0;
    do {
      if (((*(long *)(param_5 + 0x48) == 0) ||
          (lVar3 = FUN_057e0998(*(long *)(param_5 + 0x48),iVar9,DAT_091b13e8), lVar3 == 0)) ||
         (plVar4 = (long *)UnityEngine_Component__get_transform(lVar3,0), lVar3 = DAT_091af738,
         lVar2 == 0)) goto LAB_0412a67c;
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) goto LAB_0412a680;
      lVar7 = *(long *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      if (lVar7 == 0) goto LAB_0412a67c;
      uVar1 = *(uint *)(lVar2 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar5,plVar4);
      }
      else {
        FUN_057e0c68(lVar2,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar9 = iVar9 + 1;
    } while (param_6 != iVar9);
  }
  iVar9 = *(int *)(param_5 + 0x30);
  if (DAT_095163ce == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  fVar10 = (float)param_6 / (float)iVar9;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar9 = -0x80000000;
  if ((float)(int)fVar10 != INFINITY) {
    iVar9 = (int)fVar10;
  }
  param_6 = param_6 - iVar9;
  lVar3 = thunk_FUN_03f9944c(DAT_0917ca48);
  FUN_057e0478(lVar3,param_6,DAT_091af730);
  if (0 < param_6) {
    iVar9 = 0;
    do {
      if (((*(long *)(param_5 + 0x50) == 0) ||
          (lVar7 = FUN_057e0998(*(long *)(param_5 + 0x50),iVar9,DAT_091acd88), lVar7 == 0)) ||
         (plVar4 = (long *)UnityEngine_GameObject__get_transform(lVar7,0), lVar7 = DAT_091af738,
         lVar3 == 0)) goto LAB_0412a67c;
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) {
LAB_0412a680:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar4);
      }
      lVar8 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_0412a67c;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar5 = (long)plVar4;
        thunk_FUN_03f5d7b8(plVar5,plVar4);
      }
      else {
        FUN_057e0c68(lVar3,plVar4,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
        ;
      }
      iVar9 = iVar9 + 1;
    } while (param_6 != iVar9);
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    plVar4 = (long *)UnityEngine_Component__get_transform(*(long *)(param_5 + 0x20),0);
    if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4);
    }
    if (*(long *)(param_5 + 0x28) != 0) {
      lVar7 = FUN_04b7c324(*(long *)(param_5 + 0x28),DAT_091cd9f8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar7,0);
      uVar11 = 0;
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) goto LAB_0412a67c;
        UnityEngine_RectTransform__get_rect(lVar7,0);
        uVar11 = param_3;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar7,0);
      uVar12 = 0;
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) goto LAB_0412a67c;
        UnityEngine_RectTransform__get_rect(lVar7,0);
        uVar12 = param_4;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
      }
      if (plVar4 != (long *)0x0) {
        UnityEngine_RectTransform__get_rect(plVar4,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_RectTransform__get_rect(plVar4,0);
        AnhPD_FoodOrder_UIHintRecipe__LayoutRects(param_3,param_4,uVar11,uVar12,param_5,lVar2,lVar3)
        ;
        return;
      }
    }
  }
LAB_0412a67c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

