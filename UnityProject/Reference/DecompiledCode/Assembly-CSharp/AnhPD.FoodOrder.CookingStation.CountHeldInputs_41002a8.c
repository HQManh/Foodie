// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$CountHeldInputs
// address: 0x41002a8
// body: available
// range: 0x41002a8-0x41003c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41003c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41003c4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_CookingStation__CountHeldInputs(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  
  lVar2 = AnhPD_FoodOrder_CookingStation__get_WorkingResultId();
  if (lVar2 != 0) {
    return 0;
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    uVar7 = 0;
    iVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar7) {
        return iVar6;
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar7) {
LAB_041003c4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + uVar7 * 8 + 0x20);
      if ((lVar2 != 0) && (lVar8 = *(long *)(lVar2 + 0x10), lVar8 != 0)) {
        if (param_3 != 0) {
          uVar3 = (**(code **)(*param_1 + 0x228))
                            (param_1,uVar7 & 0xffffffff,*(undefined8 *)(*param_1 + 0x230));
          uVar4 = System_String__op_Inequality(uVar3,param_3,0);
          if ((uVar4 & 1) != 0) goto LAB_041003b4;
          lVar8 = *(long *)(lVar2 + 0x10);
          if (lVar8 == 0) break;
        }
        if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
          uVar4 = 0;
          uVar5 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
          do {
            if (uVar5 <= uVar4) goto LAB_041003c4;
            lVar2 = *(long *)(lVar8 + 0x20 + uVar4 * 8);
            if ((lVar2 != 0) && (*(char *)(lVar2 + 0x24) != '\0')) {
              uVar1 = System_String__op_Equality(*(undefined8 *)(lVar2 + 0x10),param_2,0);
              iVar6 = iVar6 + (uVar1 & 1);
            }
            uVar5 = (ulong)*(uint *)(lVar8 + 0x18);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)(int)*(uint *)(lVar8 + 0x18));
        }
      }
LAB_041003b4:
      lVar2 = param_1[0xb];
      uVar7 = uVar7 + 1;
    } while (lVar2 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

