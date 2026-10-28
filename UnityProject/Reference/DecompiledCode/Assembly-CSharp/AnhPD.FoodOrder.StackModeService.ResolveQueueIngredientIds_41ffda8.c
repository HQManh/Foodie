// rea decompile_all
// name: AnhPD.FoodOrder.StackModeService$$ResolveQueueIngredientIds
// address: 0x41ffda8
// body: available
// range: 0x41ffda8-0x4200007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4200000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4200004 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_StackModeService__ResolveQueueIngredientIds
               (long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if ((DAT_09516be0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0578);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516be0 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0400(lVar3,DAT_091b0558);
  if (param_1 != 0) {
    lVar4 = AnhPD_FoodOrder_StackModeService__ResolveQueues(param_1);
    if (lVar4 == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = UnityEngine_Object__op_Implicit(param_3,0);
      if ((uVar12 & 1) != 0) {
        if ((param_3 == (long *)0x0) ||
           (uVar5 = (**(code **)(*param_3 + 0x1d8))
                              (param_3,*(undefined8 *)(param_1 + 0x98),
                               *(undefined8 *)(*param_3 + 0x1e0)), lVar3 == 0)) {
LAB_04200000:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e0e78(lVar3,uVar5,DAT_091b0578);
      }
    }
    else if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
      uVar12 = 0;
      uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
      do {
        if (uVar6 <= uVar12) {
LAB_04200004:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar4 + uVar12 * 8 + 0x20);
        if (lVar7 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar7 + 0x10);
        }
        lVar7 = AnhPD_FoodOrder_StackModeService__BuildCellsFromQueue(uVar5,param_2);
        if (lVar7 == 0) goto LAB_04200000;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (0 < (int)uVar1) {
          uVar6 = 0;
          do {
            if (uVar1 <= uVar6) goto LAB_04200004;
            lVar8 = *(long *)(lVar7 + uVar6 * 8 + 0x20);
            if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x10), lVar8 == 0)) goto LAB_04200000;
            if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
              uVar13 = 0;
              uVar9 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
              do {
                lVar2 = DAT_091b0570;
                if (uVar9 <= uVar13) goto LAB_04200004;
                lVar11 = *(long *)(lVar8 + 0x20 + uVar13 * 8);
                if (lVar11 != 0) {
                  if (lVar3 == 0) goto LAB_04200000;
                  lVar10 = *(long *)(lVar3 + 0x10);
                  uVar5 = *(undefined8 *)(lVar11 + 0x10);
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_04200000;
                  uVar1 = *(uint *)(lVar3 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar3,uVar5,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
                uVar13 = uVar13 + 1;
              } while ((long)uVar13 < (long)(int)*(uint *)(lVar8 + 0x18));
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar1);
        }
        uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(lVar4 + 0x18));
    }
  }
  return lVar3;
}

