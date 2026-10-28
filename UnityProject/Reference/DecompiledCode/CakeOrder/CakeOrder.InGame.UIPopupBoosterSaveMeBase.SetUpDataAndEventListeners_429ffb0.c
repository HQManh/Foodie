// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$SetUpDataAndEventListeners
// address: 0x429ffb0
// body: available
// range: 0x429ffb0-0x42a05af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a059c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a05a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a05ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__SetUpDataAndEventListeners
               (long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_09517292 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c458);
    FUN_03f5c2a4(&DAT_09226200);
    FUN_03f5c2a4(&DAT_09225c90);
    DAT_09517292 = 1;
  }
  param_1[0x31] = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x31,param_2);
  param_1[0x2d] = param_3;
  thunk_FUN_03f5d7b8(param_1 + 0x2d,param_3);
  param_1[0x2e] = param_4;
  thunk_FUN_03f5d7b8(param_1 + 0x2e,param_4);
  param_1[0x2f] = param_5;
  thunk_FUN_03f5d7b8(param_1 + 0x2f,param_5);
  param_1[0x30] = param_6;
  thunk_FUN_03f5d7b8(param_1 + 0x30,param_6);
  if (param_1[0x2d] == 0) goto LAB_042a059c;
  plVar8 = (long *)param_1[0x1b];
  uVar2 = System_Int32__ToString(param_1[0x2d] + 0x20,0);
  if (plVar8 == (long *)0x0) goto LAB_042a059c;
  (**(code **)(*plVar8 + 0x558))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x560));
  param_1[0x34] = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x34,0);
  uVar3 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_IsPackPurchase(param_1);
  if ((uVar3 & 1) == 0) {
LAB_042a00fc:
    bVar11 = true;
LAB_042a0100:
    lVar9 = param_1[0x1c];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar3 & 1) != 0) {
      if ((param_1[0x1c] == 0) ||
         (lVar9 = UnityEngine_GameObject__get_gameObject(param_1[0x1c],0), lVar9 == 0))
      goto LAB_042a059c;
      UnityEngine_GameObject__SetActive(lVar9,0,0);
    }
  }
  else {
    if (param_1[0x2d] == 0) goto LAB_042a059c;
    if ((*(char *)(param_1[0x2d] + 0x1c) != '\0') ||
       (uVar3 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HasItem(param_1), (uVar3 & 1) != 0))
    goto LAB_042a00fc;
    lVar9 = param_1[0x1c];
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
    if ((uVar3 & 1) == 0) {
      bVar11 = false;
      goto LAB_042a0100;
    }
    if ((param_1[0x1c] == 0) ||
       (lVar9 = UnityEngine_GameObject__get_gameObject(param_1[0x1c],0), lVar9 == 0))
    goto LAB_042a059c;
    UnityEngine_GameObject__SetActive(lVar9,1,0);
    if (param_1[0x2d] == 0) goto LAB_042a059c;
    local_44 = *(undefined4 *)(param_1[0x2d] + 0x50);
    plVar8 = (long *)param_1[0x1e];
    uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
    uVar2 = System_String__Format(DAT_09225c90,uVar2,0);
    if (plVar8 == (long *)0x0) goto LAB_042a059c;
    (**(code **)(*plVar8 + 0x558))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x560));
    lVar9 = param_1[0x1d];
    uVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_ItemSO(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_ItemSO(param_1,0);
      if (lVar4 == 0) goto LAB_042a059c;
      uVar2 = *(undefined8 *)(lVar4 + 0x38);
    }
    if (lVar9 == 0) goto LAB_042a059c;
    UnityEngine_UI_Image__set_sprite(lVar9,uVar2,0);
    bVar11 = false;
  }
  if (param_1[0x2d] == 0) goto LAB_042a059c;
  iVar1 = *(int *)(param_1[0x2d] + 0x40);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x20) = iVar1;
  }
  lVar9 = param_1[0x26];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((uVar3 & 1) != 0) {
    lVar9 = param_1[0x26];
    uVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_ItemSO(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar2,0,0);
    uVar2 = 0;
    if ((uVar3 & 1) != 0) {
      lVar4 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_ItemSO(param_1,0);
      if (lVar4 == 0) goto LAB_042a059c;
      uVar2 = *(undefined8 *)(lVar4 + 0x38);
    }
    if (lVar9 == 0) goto LAB_042a059c;
    UnityEngine_UI_Image__set_sprite(lVar9,uVar2,0);
  }
  lVar9 = param_1[0x22];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((uVar3 & 1) != 0) {
    if (param_1[0x2d] == 0) goto LAB_042a059c;
    uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1[0x2d] + 0x38),0);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = System_String__IsNullOrEmpty(param_1[0x24],0), (uVar3 & 1) == 0)) {
      lVar9 = param_1[0x2d];
      if (lVar9 == 0) goto LAB_042a059c;
      lVar4 = *(long *)(lVar9 + 0x58);
      if ((lVar4 == 0) || (*(long *)(lVar4 + 0x18) == 0)) {
        uVar10 = 0;
      }
      else {
        if ((int)*(long *)(lVar4 + 0x18) == 0) goto LAB_042a05a0;
        uVar10 = *(undefined4 *)(lVar4 + 0x20);
      }
      plVar8 = (long *)param_1[0x22];
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar9 + 0x38),0);
      if ((uVar3 & 1) == 0) {
        if (param_1[0x2d] == 0) goto LAB_042a059c;
        uVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__FormatSafe
                          (*(undefined8 *)(param_1[0x2d] + 0x38),uVar10);
      }
      else {
        lVar4 = param_1[0x24];
        plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
        local_48 = uVar10;
        lVar9 = FUN_03f5c42c(DAT_09535420,&local_48);
        if (plVar5 == (long *)0x0) goto LAB_042a059c;
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,0);
        }
        if ((int)plVar5[3] == 0) {
LAB_042a05a0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar5[4] = lVar9;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar9);
        if (*(int *)(DAT_09182278 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = CakeOrder_Localization_CakeLocalization__TrFormat(lVar4,plVar5,0);
      }
      if (plVar8 == (long *)0x0) goto LAB_042a059c;
      (**(code **)(*plVar8 + 0x558))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x560));
    }
  }
  lVar9 = param_1[0x21];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar9,0);
  if ((uVar3 & 1) != 0) {
    if (param_1[0x2d] != 0) {
      uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1[0x2d] + 0x30),0);
      if (((uVar3 & 1) != 0) &&
         (uVar3 = System_String__IsNullOrEmpty(param_1[0x23],0), (uVar3 & 1) != 0))
      goto LAB_042a0434;
      if (param_1[0x2d] != 0) {
        uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1[0x2d] + 0x30),0);
        if ((uVar3 & 1) == 0) {
          if (param_1[0x2d] == 0) goto LAB_042a059c;
          uVar2 = *(undefined8 *)(param_1[0x2d] + 0x30);
        }
        else {
          lVar9 = param_1[0x23];
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = CakeOrder_Localization_CakeLocalization__Tr(lVar9,0);
        }
        plVar8 = (long *)param_1[0x21];
        if (!bVar11) {
          if (param_1[0x2d] == 0) goto LAB_042a059c;
          local_4c = *(undefined4 *)(param_1[0x2d] + 0x50);
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_4c);
          uVar2 = System_String__Format(DAT_09226200,uVar2,uVar7,0);
        }
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x558))(plVar8,uVar2,*(undefined8 *)(*plVar8 + 0x560));
          goto LAB_042a0434;
        }
      }
    }
LAB_042a059c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042a0434:
  (**(code **)(*param_1 + 0x2e8))(param_1,*(undefined8 *)(*param_1 + 0x2f0));
  lVar9 = **(long **)(DAT_0918c458 + 0xb8);
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),param_1,*(undefined8 *)(lVar9 + 0x28))
    ;
  }
  return;
}

