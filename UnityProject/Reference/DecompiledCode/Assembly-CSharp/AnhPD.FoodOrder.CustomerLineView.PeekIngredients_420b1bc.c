// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLineView$$PeekIngredients
// address: 0x420b1bc
// body: available
// range: 0x420b1bc-0x420b4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x420b29c to 0x420b654 AnhPD.FoodOrder.CustomerLineView$$FinishPeek (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420b450 to 0x6fd8440 FUN_06fd8440 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420b4c0 to 0x420ba30 AnhPD.FoodOrder.CustomerLineView$$KeepPeekOnScreen (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x420b4c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x420b4cc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLineView__PeekIngredients
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long *param_5)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((DAT_09516c34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919ebd8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516c34 = 1;
  }
  AnhPD_FoodOrder_CustomerLineView__PlayBounce(param_4);
  uVar5 = *(undefined8 *)(param_4 + 0x110);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_4 + 0x110) == 0) goto LAB_0420b4c4;
    uVar3 = AnhPD_FoodOrder_OrderBoard__get_IsPeeking(*(long *)(param_4 + 0x110),0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_4 + 0x110) == 0) goto LAB_0420b4c4;
      uVar3 = AnhPD_FoodOrder_OrderBoard__get_PeekIsWide(*(long *)(param_4 + 0x110),0);
      if ((uVar3 & 1) != 0) {
        param_5 = *(long **)(param_4 + 0x110);
        goto LAB_0420b28c;
      }
    }
  }
  if (param_5 == (long *)0x0) {
LAB_0420b4c4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = AnhPD_FoodOrder_OrderBoard__get_IsPeeking(param_5,0);
  if ((uVar3 & 1) != 0) {
LAB_0420b28c:
    AnhPD_FoodOrder_CustomerLineView__FinishPeek(param_4,param_5,1);
    return;
  }
  AnhPD_FoodOrder_CustomerLineView__StopTimer(param_4,param_5);
  uVar5 = AnhPD_FoodOrder_CustomerLineView__NeighbourOf(param_4,param_5);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar3 & 1) == 0) {
    uVar7 = *(undefined8 *)(param_4 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar1 = UnityEngine_Object__op_Implicit(uVar7,0);
  }
  else {
    bVar1 = 0;
  }
  uVar3 = AnhPD_FoodOrder_OrderBoard__TryPeekIngredients
                    (param_5,uVar5,*(undefined8 *)(param_4 + 0x50),bVar1 & 1,0);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0420b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x208))(param_5,*(undefined8 *)(*param_5 + 0x210));
    return;
  }
  uVar3 = AnhPD_FoodOrder_OrderBoard__get_IsPeeking(param_5,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = (long *)UnityEngine_Component__get_transform(param_5,0);
    if ((plVar4 == (long *)0x0) || (*plVar4 == DAT_09189c98)) {
      AnhPD_FoodOrder_CustomerLineView__KeepPeekOnScreen(param_4,plVar4,0,0,0);
      return;
    }
  }
  else {
    bVar2 = AnhPD_FoodOrder_OrderBoard__get_PeekIsWide(param_5,0);
    if ((bVar2 & 1) == 0) {
      uVar5 = 0;
    }
    bVar1 = bVar2 & 1 & bVar1;
    if (bVar1 != 0) {
      plVar4 = (long *)UnityEngine_Component__get_transform(param_5,0);
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) goto LAB_0420b4c8;
      AnhPD_FoodOrder_CustomerLineView__GrowSpacer(param_4,plVar4);
    }
    plVar4 = (long *)UnityEngine_Component__get_transform(param_5,0);
    if ((plVar4 == (long *)0x0) || (*plVar4 == DAT_09189c98)) {
      AnhPD_FoodOrder_CustomerLineView__KeepPeekOnScreen(param_4,plVar4,uVar5,bVar1,0);
      *(long **)(param_4 + 0x110) = param_5;
      thunk_FUN_03f5d7b8(param_4 + 0x110,param_5);
      *(undefined8 *)(param_4 + 0x118) = uVar5;
      thunk_FUN_03f5d7b8(param_4 + 0x118,uVar5);
      *(byte *)(param_4 + 0x120) = bVar1;
      uVar8 = AnhPD_FoodOrder_CustomerLineView__get_LinePos(param_4);
      lVar6 = *(long *)(param_4 + 0x108);
      *(undefined4 *)(param_4 + 0x124) = uVar8;
      *(undefined4 *)(param_4 + 0x128) = param_2;
      *(undefined4 *)(param_4 + 300) = param_3;
      uVar5 = AnhPD_FoodOrder_CustomerLineView__PeekRoutine(param_4,param_5);
      uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_4,uVar5,0);
      if (lVar6 != 0) {
        FUN_06fd8440(lVar6,param_5,uVar5,DAT_0919ebd8);
        return;
      }
      goto LAB_0420b4c4;
    }
  }
LAB_0420b4c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar4);
}

