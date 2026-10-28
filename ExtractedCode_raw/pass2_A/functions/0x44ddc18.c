// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingPieceDisplay$$Display
// address: 0x44ddc18
// body: available
// range: 0x44ddc18-0x44dddaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ddd90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingPieceDisplay__Display(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  
  if ((DAT_0951833f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b25d0);
    FUN_03f5c2a4(&DAT_091b25d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951833f = 1;
  }
  iVar1 = CookOrder_Cooking_Implement_CookingPieceDisplay__CountFruitKinds(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar6 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= iVar6) {
        return;
      }
      lVar5 = FUN_057e0998(lVar5,iVar6,DAT_091b25d8);
      if (lVar5 != 0) {
        uVar2 = CookOrder_Cooking_Implement_CookingPieceDisplay_PieceVisual__WantsActive
                          (lVar5,param_2);
        if (iVar1 == 1) {
          uVar7 = *(undefined8 *)(lVar5 + 0x20);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar4 & 1) == 0) goto LAB_044ddd08;
          uVar3 = CookOrder_Cooking_Implement_CookingCafeArt__IsFruit
                            (*(undefined4 *)(lVar5 + 0x10),0);
        }
        else {
LAB_044ddd08:
          uVar3 = 0;
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x20);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar5 + 0x20) == 0) break;
          UnityEngine_GameObject__SetActive(*(long *)(lVar5 + 0x20),uVar2 & uVar3 & 1,0);
        }
        uVar7 = *(undefined8 *)(lVar5 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
        if ((uVar4 & 1) != 0) {
          if (*(long *)(lVar5 + 0x18) == 0) break;
          UnityEngine_GameObject__SetActive
                    (*(long *)(lVar5 + 0x18),uVar2 & (uVar3 ^ 0xffffffff) & 1,0);
        }
      }
      lVar5 = *(long *)(param_1 + 0x20);
      iVar6 = iVar6 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

