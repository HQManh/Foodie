// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamDecorLayout$$Display
// address: 0x414bee4
// body: available
// range: 0x414bee4-0x414c22b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414c1fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c224 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414c228 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamDecorLayout__Display(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  
  if ((DAT_09516452 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b2fc0);
    FUN_03f5c2a4(&DAT_091b2f90);
    FUN_03f5c2a4(&DAT_091b2fa8);
    FUN_03f5c2a4(&DAT_091b2f98);
    FUN_03f5c2a4(&DAT_091b2fb0);
    FUN_03f5c2a4(&DAT_091b2fc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516452 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (lVar4 != 0) {
    iVar8 = 0;
    do {
      if ((*(int *)(lVar4 + 0x18) <= iVar8) || (2 < *(int *)(param_1 + 0x48))) {
        *(undefined4 *)(param_1 + 0x4c) = 0x7fffffff;
        AnhPD_FoodOrder_IceCreamDecorLayout__Search(param_1,0,0,0);
        lVar4 = *(long *)(param_1 + 0x20);
        if (lVar4 != 0) {
          iVar8 = 0;
          goto LAB_0414c07c;
        }
        break;
      }
      lVar4 = FUN_057e0998(lVar4,iVar8,DAT_091b2f98);
      if (lVar4 != 0) {
        uVar1 = *(undefined4 *)(lVar4 + 0x10);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
        if (0 < iVar3) {
          uVar2 = *(uint *)(param_1 + 0x48);
          plVar10 = *(long **)(param_1 + 0x30);
          *(uint *)(param_1 + 0x48) = uVar2 + 1;
          if (plVar10 == (long *)0x0) break;
          lVar5 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar5 == 0) {
            uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar7,0);
          }
          if (*(uint *)(plVar10 + 3) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar10[(long)(int)uVar2 + 4] = lVar4;
          thunk_FUN_03f5d7b8(plVar10 + (long)(int)uVar2 + 4,lVar4);
        }
      }
      lVar4 = *(long *)(param_1 + 0x20);
      iVar8 = iVar8 + 1;
    } while (lVar4 != 0);
  }
  goto LAB_0414c1fc;
  while( true ) {
    lVar4 = FUN_057e0998(lVar4,iVar8,DAT_091b2f98);
    if (lVar4 != 0) {
      iVar3 = AnhPD_FoodOrder_IceCreamDecorLayout__ChosenSlot(param_1,lVar4);
      lVar5 = *(long *)(lVar4 + 0x18);
      if (lVar5 == 0) break;
      iVar9 = 0;
      while (iVar9 < *(int *)(lVar5 + 0x18)) {
        lVar5 = FUN_057e0998(lVar5,iVar9,DAT_091b2fc8);
        if (lVar5 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar5 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar6 & 1) != 0) {
          if ((lVar5 == 0) || (*(long *)(lVar5 + 0x10) == 0)) goto LAB_0414c1fc;
          UnityEngine_GameObject__SetActive(*(long *)(lVar5 + 0x10),iVar3 == iVar9,0);
        }
        lVar5 = *(long *)(lVar4 + 0x18);
        iVar9 = iVar9 + 1;
        if (lVar5 == 0) goto LAB_0414c1fc;
      }
    }
    lVar4 = *(long *)(param_1 + 0x20);
    iVar8 = iVar8 + 1;
    if (lVar4 == 0) break;
LAB_0414c07c:
    if (*(int *)(lVar4 + 0x18) <= iVar8) {
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        iVar8 = 0;
        goto LAB_0414c160;
      }
      break;
    }
  }
  goto LAB_0414c1fc;
LAB_0414c160:
  do {
    if (*(int *)(lVar4 + 0x18) <= iVar8) {
      return;
    }
    lVar4 = FUN_057e0998(lVar4,iVar8,DAT_091b2fb0);
    if (lVar4 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar4 + 0x18);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar6 & 1) != 0) {
      if (lVar4 == 0) break;
      lVar5 = *(long *)(lVar4 + 0x18);
      uVar1 = *(undefined4 *)(lVar4 + 0x10);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar1,0);
      if (lVar5 == 0) break;
      UnityEngine_GameObject__SetActive(lVar5,0 < iVar3,0);
    }
    lVar4 = *(long *)(param_1 + 0x28);
    iVar8 = iVar8 + 1;
  } while (lVar4 != 0);
LAB_0414c1fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

