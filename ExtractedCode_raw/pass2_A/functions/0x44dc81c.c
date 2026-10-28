// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingOrderPreview$$Show
// address: 0x44dc81c
// body: available
// range: 0x44dc81c-0x44dca4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44dc9f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44dca10 to 0x44dca50 CookOrder.Cooking.Implement.CookingOrderPreview$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingOrderPreview__Show
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_09518334 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abfd0);
    FUN_03f5c2a4(&DAT_091b02d0);
    FUN_03f5c2a4(&DAT_091abfd8);
    FUN_03f5c2a4(&DAT_091b02d8);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518334 = 1;
  }
  if ((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 0x18) != 0)) {
    CookOrder_Cooking_Implement_CookingOrderPreview__Group(param_1,param_2,param_3);
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x40) + 0x18) == 0) goto LAB_044dc9f8;
      CookOrder_Cooking_Implement_CookingOrderPreview__EnsureItems(param_1);
      lVar3 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar3 != 0) {
        UnityEngine_GameObject__SetActive(lVar3,1,0);
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != 0) {
          iVar2 = 0;
          do {
            if (*(int *)(lVar3 + 0x18) <= iVar2) {
              iVar2 = CookOrder_Cooking_Implement_CookingOrderPreview__Signature(param_1);
              if (iVar2 != *(int *)(param_1 + 0x50)) {
                CookOrder_Cooking_Implement_CookingOrderPreview__Punch(param_1);
              }
              *(int *)(param_1 + 0x50) = iVar2;
              return;
            }
            uVar4 = FUN_057e0998(lVar3,iVar2,DAT_091abfd8);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
            if ((uVar5 & 1) != 0) {
              if (*(long *)(param_1 + 0x40) == 0) break;
              lVar3 = *(long *)(param_1 + 0x20);
              if (iVar2 < *(int *)(*(long *)(param_1 + 0x40) + 0x18)) {
                if (lVar3 == 0) break;
                lVar3 = FUN_057e0998(lVar3,iVar2,DAT_091abfd8);
                if (*(long *)(param_1 + 0x40) == 0) break;
                uVar4 = FUN_057e0998(*(long *)(param_1 + 0x40),iVar2,DAT_091b02d8);
                if ((*(long *)(param_1 + 0x48) == 0) ||
                   (uVar1 = FUN_05796eb0(*(long *)(param_1 + 0x48),iVar2,DAT_091add20), lVar3 == 0))
                break;
                CookOrder_Cooking_Implement_CookingOrderPreviewItem__Show(lVar3,uVar4,uVar1);
              }
              else {
                if ((lVar3 == 0) || (lVar3 = FUN_057e0998(lVar3,iVar2,DAT_091abfd8), lVar3 == 0))
                break;
                CookOrder_Cooking_Implement_CookingOrderPreviewItem__Hide();
              }
            }
            lVar3 = *(long *)(param_1 + 0x20);
            iVar2 = iVar2 + 1;
          } while (lVar3 != 0);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_044dc9f8:
  CookOrder_Cooking_Implement_CookingOrderPreview__Hide(param_1);
  return;
}

