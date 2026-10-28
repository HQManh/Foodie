// rea decompile_all
// name: AnhPD.FoodOrder.IngCell$$CanAccept
// address: 0x423fdec
// body: available
// range: 0x423fdec-0x423fef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423fef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngCell__CanAccept(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_09516e13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ac6d0);
    DAT_09516e13 = 1;
  }
  uVar5 = AnhPD_FoodOrder_IngCell__get_IsEmpty(param_1);
  if ((uVar5 & 1) == 0) {
    if (param_2 == (long *)0x0) {
LAB_0423fef0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)((long)param_2 + 0xe9) == '\0') {
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091ac6d0), lVar6 == 0))
      goto LAB_0423fef0;
      if (*(char *)(lVar6 + 0xe9) == '\0') {
        if ((*(long *)(param_1 + 0x30) == 0) ||
           (plVar7 = (long *)FUN_057e0998(*(long *)(param_1 + 0x30),0,DAT_091ac6d0),
           plVar7 == (long *)0x0)) goto LAB_0423fef0;
        uVar8 = (**(code **)(*plVar7 + 0x1b8))(plVar7,*(undefined8 *)(*plVar7 + 0x1c0));
        uVar9 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        uVar5 = System_String__op_Inequality(uVar8,uVar9,0);
        if ((uVar5 & 1) == 0) {
          iVar2 = AnhPD_FoodOrder_IngCell__get_OccupiedCount(param_1);
          iVar3 = AnhPD_FoodOrder_IngCell__WeightOf(param_2);
          iVar4 = AnhPD_FoodOrder_IngCell__get_MaxStack(param_1);
          return iVar3 + iVar2 <= iVar4;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

