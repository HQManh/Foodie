// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ShownTopDown
// address: 0x422e4d4
// body: available
// range: 0x422e4d4-0x422e783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422e728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422e780 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderIngredientList__ShownTopDown(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  
  if ((DAT_09516daa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175b50);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091af768);
    FUN_03f5c2a4(&DAT_091af730);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_0917ca48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5638);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516daa = 1;
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x18);
    lVar3 = thunk_FUN_03f9944c(DAT_0917ca48);
    FUN_057e0478(lVar3,uVar1,DAT_091af730);
    lVar8 = *(long *)(param_1 + 0x78);
    if (lVar8 != 0) {
      iVar10 = 0;
      while (iVar10 < *(int *)(lVar8 + 0x18)) {
        lVar8 = *(long *)(param_1 + 0x70);
        if (lVar8 == 0) goto LAB_0422e728;
        if (*(int *)(lVar8 + 0x18) <= iVar10) break;
        uVar4 = FUN_057e0998(lVar8,iVar10,DAT_091ae388);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar4,0);
        if ((uVar5 & 1) != 0) {
          if (((*(long *)(param_1 + 0x70) == 0) ||
              (lVar8 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar10,DAT_091ae388), lVar8 == 0)) ||
             (lVar8 = UnityEngine_Component__get_gameObject(lVar8,0), lVar8 == 0))
          goto LAB_0422e728;
          uVar5 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
          if ((uVar5 & 1) != 0) {
            if (((*(long *)(param_1 + 0x70) == 0) ||
                (lVar8 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar10,DAT_091ae388), lVar8 == 0))
               || (plVar6 = (long *)UnityEngine_Component__get_transform(lVar8,0),
                  lVar8 = DAT_091af738, lVar3 == 0)) goto LAB_0422e728;
            if ((plVar6 != (long *)0x0) && (*plVar6 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar6);
            }
            lVar9 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_0422e728;
            uVar2 = *(uint *)(lVar3 + 0x18);
            if (uVar2 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar2 + 1;
              plVar7 = (long *)(lVar9 + (long)(int)uVar2 * 8 + 0x20);
              *plVar7 = (long)plVar6;
              thunk_FUN_03f5d7b8(plVar7,plVar6);
            }
            else {
              FUN_057e0c68(lVar3,plVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        lVar8 = *(long *)(param_1 + 0x78);
        iVar10 = iVar10 + 1;
        if (lVar8 == 0) goto LAB_0422e728;
      }
      uVar4 = thunk_FUN_03f9944c(DAT_09175b50);
      FUN_06d4541c(uVar4,param_1,DAT_091d5638,0);
      if (lVar3 != 0) {
        FUN_057e280c(lVar3,uVar4,DAT_091af768);
        return lVar3;
      }
    }
  }
LAB_0422e728:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

