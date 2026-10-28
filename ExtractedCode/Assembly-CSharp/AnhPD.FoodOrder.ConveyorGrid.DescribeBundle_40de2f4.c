// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$DescribeBundle
// address: 0x40de2f4
// body: available
// range: 0x40de2f4-0x40de467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40de460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40de464 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ConveyorGrid__DescribeBundle(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if ((DAT_09516049 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516049 = 1;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      return DAT_091f8a38;
    }
    plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
    System_Text_StringBuilder___ctor(plVar3,0);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      if (0 < (int)*(ulong *)(lVar7 + 0x18)) {
        uVar8 = 0;
        uVar6 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
        do {
          if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar9 = *(long *)(lVar7 + 0x20 + uVar8 * 8);
          if (lVar9 != 0) {
            if (plVar3 == (long *)0x0) goto LAB_040de460;
            iVar2 = System_Text_StringBuilder__get_Length(plVar3,0);
            puVar1 = &DAT_091f86d8;
            if (iVar2 < 1) {
              puVar1 = &DAT_091f5700;
            }
            lVar4 = System_Text_StringBuilder__Append(plVar3,*puVar1,0);
            if (((lVar4 == 0) ||
                (lVar4 = System_Text_StringBuilder__Append(lVar4,*(undefined8 *)(lVar9 + 0x10),0),
                lVar4 == 0)) ||
               (lVar4 = System_Text_StringBuilder__Append(lVar4,0x78,0), lVar4 == 0))
            goto LAB_040de460;
            System_Text_StringBuilder__Append(lVar4,*(undefined4 *)(lVar9 + 0x18),0);
          }
          uVar6 = (ulong)*(uint *)(lVar7 + 0x18);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)(int)*(uint *)(lVar7 + 0x18));
      }
      if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x040de43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        return uVar5;
      }
    }
  }
LAB_040de460:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

