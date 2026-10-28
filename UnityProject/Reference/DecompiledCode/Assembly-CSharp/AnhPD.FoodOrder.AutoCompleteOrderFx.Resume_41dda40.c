// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$Resume
// address: 0x41dda40
// body: available
// range: 0x41dda40-0x41ddecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ddcc0 to 0x41dd36c AnhPD.FoodOrder.AutoCompleteOrderFx$$Finish (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ddecc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__Resume
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_09516ad2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_091e5c98);
    FUN_03f5c2a4(&DAT_0918e6b8);
    FUN_03f5c2a4(&DAT_09222ae0);
    FUN_03f5c2a4(&DAT_09213b40);
    DAT_09516ad2 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918e6b8);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass52_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    puVar7 = (undefined8 *)(lVar3 + 0x18);
    *puVar7 = param_2;
    thunk_FUN_03f5d7b8(puVar7,param_2);
    puVar8 = (undefined4 *)(lVar3 + 0x20);
    *puVar8 = param_3;
    uVar6 = param_4[1];
    uVar5 = *param_4;
    *(undefined8 *)(lVar3 + 0x38) = param_4[2];
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    puVar10 = (undefined8 *)(param_1 + 0x68);
    *puVar10 = 0;
    thunk_FUN_03f5d7b8(puVar10,0);
    plVar9 = (long *)(param_1 + 0x38);
    if ((*plVar9 == 0) ||
       (uVar4 = AnhPD_FoodOrder_ServeTicket__get_IsValid(*plVar9,0), (uVar4 & 1) == 0)) {
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_041ddecc;
      AnhPD_FoodOrder_ServeService__Release
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_03f5d7b8(plVar9,0);
      uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__PickOrder(param_1,*puVar7,puVar8,lVar3 + 0x28);
      if ((uVar4 & 1) == 0) {
LAB_041ddca4:
        AnhPD_FoodOrder_AutoCompleteOrderFx__Finish(param_1);
        return;
      }
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_041ddecc;
      uVar4 = AnhPD_FoodOrder_ServeService__TryReserveOrder
                        (*(long *)(param_1 + 0x28),param_1,*puVar7,*puVar8,plVar9,0);
      if ((uVar4 & 1) == 0) goto LAB_041ddca4;
    }
    uStack_78 = *(undefined8 *)(lVar3 + 0x30);
    local_80 = *(undefined8 *)(lVar3 + 0x28);
    local_70 = *(undefined8 *)(lVar3 + 0x38);
    iVar1 = AnhPD_FoodOrder_AutoCompleteOrderFx__TakePlateDish
                      (param_1,&local_80,&local_48,&local_60);
    uVar5 = DAT_0918c148;
    if (iVar1 == 2) {
      if (*(float *)(param_1 + 0x60) < 4.0) {
        *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x60) + 0.1;
        uVar5 = thunk_FUN_03f9944c(uVar5);
        DG_Tweening_TweenCallback___ctor(uVar5,lVar3,DAT_091e5c98,0);
        uVar5 = DG_Tweening_DOVirtual__DelayedCall(0x3dcccccd,uVar5,1,0);
        uVar5 = FUN_04d9656c(uVar5,0,DAT_091dc040);
        *(undefined8 *)(param_1 + 0x68) = uVar5;
        thunk_FUN_03f5d7b8(puVar10,uVar5);
        return;
      }
      local_84 = 0x40800000;
      uVar5 = FUN_03f5c42c(DAT_09535450,&local_84);
      uVar5 = System_String__Format(DAT_09213b40,uVar5,0);
      uVar5 = System_String__Concat(uVar5,DAT_09222ae0,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar5,0);
      if (*(long *)(param_1 + 0x28) == 0) goto LAB_041ddecc;
      AnhPD_FoodOrder_ServeService__Release
                (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38),0);
      *(undefined8 *)(param_1 + 0x38) = 0;
      thunk_FUN_03f5d7b8(plVar9,0);
      if ((*(char *)(param_1 + 0x70) == '\0') &&
         (uVar4 = AnhPD_FoodOrder_AutoCompleteOrderFx__TryPickReadyOrder
                            (param_1,*puVar7,puVar8,lVar3 + 0x28), (uVar4 & 1) != 0)) {
        uVar5 = *puVar7;
        uVar2 = *puVar8;
        *(undefined1 *)(param_1 + 0x70) = 1;
        uStack_98 = *(undefined8 *)(lVar3 + 0x30);
        local_a0 = *(undefined8 *)(lVar3 + 0x28);
        local_90 = *(undefined8 *)(lVar3 + 0x38);
        AnhPD_FoodOrder_AutoCompleteOrderFx__Resume(param_1,uVar5,uVar2,&local_a0);
        return;
      }
    }
    else {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_b0 = local_50;
      uStack_b8 = uStack_58;
      local_c0 = local_60;
      AnhPD_FoodOrder_PieceSet__Subtract(auStack_d8,lVar3 + 0x28,&local_c0);
      uVar5 = local_48;
      uVar2 = AnhPD_FoodOrder_AutoCompleteOrderFx__DishOf(param_1,*puVar7,*puVar8);
      uVar6 = AnhPD_FoodOrder_AutoCompleteOrderFx__OrderSequence(param_1,*puVar7,*puVar8);
      lVar3 = AnhPD_FoodOrder_AutoCompleteOrderFx__GatherIngredients
                        (param_1,auStack_d8,uVar5,uVar2,uVar6);
      uVar5 = local_48;
      if (lVar3 == 0) goto LAB_041ddecc;
      if (*(int *)(lVar3 + 0x18) != 0) {
        AnhPD_FoodOrder_AutoCompleteOrderFx__PlayGather(param_1,*puVar7,*puVar8);
        return;
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar4 & 1) != 0) {
        if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_041ddecc;
        AnhPD_FoodOrder_DragInteractionSystem__HandleDropFallback
                  (*(undefined8 *)(**(long **)(DAT_091881a0 + 0xb8) + 0x148),local_48,0);
      }
      AnhPD_FoodOrder_AutoCompleteOrderFx__Fallback(param_1);
    }
    AnhPD_FoodOrder_AutoCompleteOrderFx__Finish(param_1);
    return;
  }
LAB_041ddecc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

