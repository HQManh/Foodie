// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerView$$CompleteDish
// address: 0x44d3c68
// body: available
// range: 0x44d3c68-0x44d40ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d40ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingCustomerView__CompleteDish
               (long param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long local_58;
  
  if ((DAT_095182d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c63b0);
    FUN_03f5c2a4(&DAT_091c63b8);
    FUN_03f5c2a4(&DAT_091c63c0);
    FUN_03f5c2a4(&DAT_0919d668);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091e6ad0);
    FUN_03f5c2a4(&DAT_0918eeb0);
    DAT_095182d7 = 1;
  }
  local_58 = 0;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x108) == 0)) goto LAB_044d40ec;
  uVar1 = FUN_053d8048(*(long *)(param_1 + 0x108),*(undefined4 *)(param_2 + 0x20),DAT_091a82b0);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0xd0);
      uVar5 = CookOrder_Cooking_Implement_CookingCustomerView__Target
                        (param_1,*(undefined4 *)(param_2 + 0x20));
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      lVar2 = FUN_04c35338(uVar6,uVar5,DAT_091d4bc0);
      if (lVar2 == 0) goto LAB_044d40ec;
      UnityEngine_GameObject__SetActive(lVar2,1,0);
      plVar3 = (long *)UnityEngine_GameObject__get_transform(lVar2,0);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)0x0;
      }
      else if (*plVar3 != DAT_09189c98) {
        plVar3 = (long *)0x0;
      }
      uVar1 = UnityEngine_Object__op_Implicit(plVar3,0);
      if ((uVar1 & 1) != 0) {
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        if (plVar3 == (long *)0x0) goto LAB_044d40ec;
        UnityEngine_RectTransform__set_anchoredPosition
                  (**(undefined4 **)(DAT_0918cb68 + 0xb8),(*(undefined4 **)(DAT_0918cb68 + 0xb8))[1]
                   ,plVar3,0);
      }
      lVar2 = UnityEngine_GameObject__get_transform(lVar2,0);
      if (lVar2 == 0) goto LAB_044d40ec;
      UnityEngine_Transform__SetAsLastSibling(lVar2,0);
    }
    if (*(long *)(param_1 + 0x100) == 0) {
LAB_044d40ec:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = FUN_06ef1fe8(*(long *)(param_1 + 0x100),*(undefined4 *)(param_2 + 0x20),&local_58,
                         DAT_0919d668);
    lVar2 = local_58;
    if ((uVar1 & 1) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x110);
      uVar5 = *(undefined8 *)(param_2 + 0x28);
      if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
      lVar7 = puVar4[6];
      if (lVar7 == 0) {
        if (*(int *)(DAT_0918eeb0 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar4 = *(undefined8 **)(DAT_0918eeb0 + 0xb8);
        }
        uVar8 = *puVar4;
        lVar7 = thunk_FUN_03f9944c(DAT_09178620);
        FUN_053239c8(lVar7,uVar8,DAT_091e6ad0,0);
        plVar3 = (long *)(*(long *)(DAT_0918eeb0 + 0xb8) + 0x30);
        *plVar3 = lVar7;
        thunk_FUN_03f5d7b8(plVar3,lVar7);
      }
      uVar5 = FUN_04af6d6c(uVar5,lVar7,DAT_091ca340);
      uVar5 = FUN_04b0462c(uVar5,DAT_091cae30);
      if ((lVar2 == 0) ||
         (CookOrder_Cooking_Implement_CookingDishRenderer__Draw(lVar2,uVar6,param_3,uVar5,1,1,1,0),
         local_58 == 0)) goto LAB_044d40ec;
      uVar5 = UnityEngine_Component__get_transform(local_58,0);
      DG_Tweening_ShortcutExtensions__DOPunchScale(0,0x3e99999a,0,0x3e99999a,0x3f19999a,uVar5,6,0);
      uVar1 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                        (*(undefined8 *)(param_1 + 0xe0));
      if ((uVar1 & 1) != 0) {
        lVar2 = *(long *)(param_1 + 0xe0);
        uVar5 = thunk_FUN_03f9944c(DAT_09177ab8);
        FUN_053007d8(uVar5,param_1,DAT_091c63b0,0);
        uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar6,param_1,DAT_091c63b8,0);
        if (lVar2 == 0) goto LAB_044d40ec;
        CookOrder_Cooking_Implement_CookingCustomerHandle__Eat(lVar2,uVar5,uVar6);
      }
      uVar1 = CookOrder_Cooking_Implement_CookingCustomerView__get_AllDishesPresented(param_1);
      if ((uVar1 & 1) != 0) {
        uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091c63c0,0);
        uVar5 = DG_Tweening_DOVirtual__DelayedCall(0x3e99999a,uVar5,1,0);
        FUN_04d9642c(uVar5,param_1,DAT_091dbfe0);
      }
    }
  }
  return;
}

