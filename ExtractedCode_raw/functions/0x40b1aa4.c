// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade.<HopSeries>d__128$$MoveNext
// address: 0x40b1aa4
// body: available
// range: 0x40b1aa4-0x40b1cc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b1cc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_HomeCustomerParade_<HopSeries>d__128__MoveNext(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  
  if ((DAT_09515eeb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09515eeb = 1;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x20);
  if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar4 = *(int *)(param_1 + 0x34) + 1;
    *(int *)(param_1 + 0x34) = iVar4;
  }
  else {
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
        if ((uVar3 & 1) == 0) {
          if (lVar6 != 0) {
LAB_040b1c74:
            uVar7 = *(undefined4 *)(lVar6 + 0xdc);
            uVar5 = thunk_FUN_03f9944c(DAT_0918ce90);
            UnityEngine_WaitForSeconds___ctor(uVar7,uVar5,0);
            *(undefined8 *)(param_1 + 0x18) = uVar5;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
            *(undefined4 *)(param_1 + 0x10) = 2;
            return 1;
          }
        }
        else if ((*(long *)(param_1 + 0x28) != 0) &&
                (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 != 0)) {
          AnhPD_FoodOrder_Customer__ChangeState(lVar2,2,0,0,0);
          if ((*(long *)(param_1 + 0x28) != 0) &&
             ((lVar6 != 0 && (lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar2 != 0)))) {
            AnhPD_FoodOrder_Customer__Hop
                      (*(undefined4 *)(lVar6 + 0xd8),*(undefined4 *)(lVar6 + 0xdc),lVar2,0,0);
            goto LAB_040b1c74;
          }
        }
      }
      goto LAB_040b1cc4;
    }
    if (iVar4 != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 == 0) goto LAB_040b1cc4;
    iVar1 = *(int *)(lVar6 + 0x164);
    iVar4 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(int *)(lVar6 + 0x164) = iVar1 + 1;
  }
  if (iVar4 < *(int *)(param_1 + 0x30)) {
    if (*(long *)(param_1 + 0x28) == 0) goto LAB_040b1cc4;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar3 & 1) != 0) {
      if (lVar6 != 0) {
        uVar7 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0xe0),0);
        uVar5 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor(uVar7,uVar5,0);
        *(undefined8 *)(param_1 + 0x18) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      goto LAB_040b1cc4;
    }
  }
  if (lVar6 != 0) {
    *(int *)(lVar6 + 0x164) = *(int *)(lVar6 + 0x164) + -1;
    return 0;
  }
LAB_040b1cc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

