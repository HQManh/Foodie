// rea decompile_all
// name: AnhPD.FoodOrder.AutoCompleteOrderFx$$FlyOnPlate
// address: 0x41e481c
// body: available
// range: 0x41e481c-0x41e4aaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41e4aa8 to 0x40bcb94 AnhPD.FoodOrder.ServePlate$$ServeTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41e4aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AutoCompleteOrderFx__FlyOnPlate
               (long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09516af2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e5c70);
    FUN_03f5c2a4(&DAT_091e5c78);
    FUN_03f5c2a4(&DAT_091e5c80);
    FUN_03f5c2a4(&DAT_0918e6a0);
    DAT_09516af2 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918e6a0);
  AnhPD_FoodOrder_AutoCompleteOrderFx_<>c__DisplayClass109_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar8 = (long *)(lVar1 + 0x10);
    *plVar8 = param_2;
    thunk_FUN_03f5d7b8(plVar8,param_2);
    *(undefined8 *)(lVar1 + 0x18) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_5);
    *(undefined8 *)(lVar1 + 0x28) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_4);
    *(long *)(lVar1 + 0x30) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x30),param_1);
    *(undefined8 *)(lVar1 + 0x38) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38),param_6);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),0);
    lVar9 = *plVar8;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar9,0);
    uVar6 = 0;
    if ((uVar2 & 1) != 0) {
      if (*plVar8 == 0) goto LAB_041e4aac;
      uVar6 = AnhPD_FoodOrder_FCustomerLine__GetOrderTarget(*plVar8,param_3,0);
    }
    puVar7 = (undefined8 *)(lVar1 + 0x20);
    *puVar7 = uVar6;
    thunk_FUN_03f5d7b8(puVar7);
    uVar6 = *puVar7;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar9 = *plVar8;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar9,0);
      if ((uVar2 & 1) != 0) {
        if (*plVar8 == 0) goto LAB_041e4aac;
        uVar6 = AnhPD_FoodOrder_FCustomerLine__get_targetPos(*plVar8,0);
        *puVar7 = uVar6;
        thunk_FUN_03f5d7b8(puVar7,uVar6);
      }
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    lVar9 = *(long *)(lVar1 + 0x28);
    uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar3,lVar1,DAT_091e5c70,0);
    uVar4 = thunk_FUN_03f9944c(DAT_09177ab8);
    FUN_053007d8(uVar4,lVar1,DAT_091e5c78,0);
    uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar5,lVar1,DAT_091e5c80,0);
    if (lVar9 != 0) {
      AnhPD_FoodOrder_ServePlate__ServeTo(lVar9,uVar6,uVar3,0,uVar4,uVar5,0);
      return;
    }
  }
LAB_041e4aac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

