// rea decompile_all
// name: AnhPD.FoodOrder.UISandwichStackDisplay$$Display
// address: 0x4161568
// body: available
// range: 0x4161568-0x416185b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4161834 to 0x8670204 UnityEngine.Transform$$SetSiblingIndex (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4161854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4161858 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UISandwichStackDisplay__Display(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  
  if ((DAT_09516536 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516536 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar9 == 0) goto LAB_04161854;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (0 < (int)uVar1) {
    uVar10 = 0;
    do {
      if (uVar1 <= uVar10) goto LAB_04161858;
      lVar11 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_04161854;
      uVar7 = *(undefined8 *)(lVar11 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(lVar11 + 0x10) == 0) ||
           (lVar11 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x10),0), lVar11 == 0)
           ) goto LAB_04161854;
        UnityEngine_GameObject__SetActive(lVar11,0,0);
      }
      uVar1 = *(uint *)(lVar9 + 0x18);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar1);
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar5 & 1) == 0) {
    iVar8 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x28),0), lVar9 == 0))
    goto LAB_04161854;
    UnityEngine_GameObject__SetActive(lVar9,0 < iVar3,0);
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar9 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0), lVar9 == 0))
    goto LAB_04161854;
    UnityEngine_Transform__SetSiblingIndex(lVar9,0,0);
    iVar8 = 1;
  }
  lVar9 = AnhPD_FoodOrder_UISandwichStackDisplay__get_OrderedFillings(param_1);
  if (lVar9 != 0) {
    uVar1 = *(uint *)(lVar9 + 0x18);
    if (0 < (int)uVar1) {
      uVar10 = 0;
      do {
        if (uVar1 <= uVar10) {
LAB_04161858:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = *(long *)(lVar9 + (long)(int)uVar10 * 8 + 0x20);
        if (lVar11 == 0) goto LAB_04161854;
        uVar7 = *(undefined8 *)(lVar11 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar5 & 1) != 0) {
          uVar2 = *(undefined4 *)(lVar11 + 0x18);
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar2,0);
          if (iVar4 != 0) {
            if ((*(long *)(lVar11 + 0x10) == 0) ||
               (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar11 + 0x10),0),
               lVar6 == 0)) goto LAB_04161854;
            UnityEngine_GameObject__SetActive(lVar6,1,0);
            if ((*(long *)(lVar11 + 0x10) == 0) ||
               (lVar11 = UnityEngine_Component__get_transform(*(long *)(lVar11 + 0x10),0),
               lVar11 == 0)) goto LAB_04161854;
            UnityEngine_Transform__SetSiblingIndex(lVar11,iVar8,0);
            iVar8 = iVar8 + 1;
          }
        }
        uVar1 = *(uint *)(lVar9 + 0x18);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar1);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (lVar9 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x30),0), lVar9 != 0)) {
      UnityEngine_GameObject__SetActive(lVar9,0 < iVar3,0);
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar9 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x30),0), lVar9 != 0)) {
        UnityEngine_Transform__SetSiblingIndex(lVar9,iVar8,0);
        return;
      }
    }
  }
LAB_04161854:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

