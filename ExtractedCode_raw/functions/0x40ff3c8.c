// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$get_IsViewIntakeBusy
// address: 0x40ff3c8
// body: available
// range: 0x40ff3c8-0x40ff4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ff4b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ff4b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_CookingStation__get_IsViewIntakeBusy(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  
  if ((DAT_0951616e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951616e = 1;
  }
  lVar7 = *(long *)(param_1 + 0x58);
  if (lVar7 != 0) {
    iVar4 = (int)*(ulong *)(lVar7 + 0x18);
    bVar8 = 0 < iVar4;
    if (0 < iVar4) {
      uVar9 = 0;
      uVar5 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar7 + 0x20 + uVar9 * 8);
        if (lVar6 != 0) {
          uVar2 = AnhPD_FoodOrder_StationInteractGroup__get_View(lVar6);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar5 = UnityEngine_Object__op_Implicit(uVar2,0);
          if ((uVar5 & 1) != 0) {
            plVar3 = (long *)AnhPD_FoodOrder_StationInteractGroup__get_View(lVar6);
            if (plVar3 == (long *)0x0) goto LAB_040ff4b8;
            uVar5 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
            if ((uVar5 & 1) != 0) {
              return bVar8;
            }
          }
        }
        uVar1 = *(uint *)(lVar7 + 0x18);
        uVar5 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
        bVar8 = (long)uVar9 < (long)(int)uVar1;
      } while ((long)uVar9 < (long)(int)uVar1);
    }
    return bVar8;
  }
LAB_040ff4b8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

