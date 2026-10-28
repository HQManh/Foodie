// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO.<GetPieceKinds>d__16$$MoveNext
// address: 0x40bb0c4
// body: available
// range: 0x40bb0c4-0x40bb2ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40bb2f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bb2f8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40bb2fc to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_RecipeConfigSO_<GetPieceKinds>d__16__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09515f4c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bead0);
    FUN_03f5c2a4(&DAT_091f82f0);
    DAT_09515f4c = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar6 = *(int *)(param_1 + 0x48) + 1;
    *(uint *)(param_1 + 0x48) = uVar6;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      local_40 = 0;
      uStack_38 = 0;
      FUN_0655c9b4(&local_40,DAT_091f82f0,0xffffffff,DAT_091bead0);
      *(undefined8 *)(param_1 + 0x20) = uStack_38;
      *(undefined8 *)(param_1 + 0x18) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_040bb2f4;
    uVar2 = AnhPD_FoodOrder_RecipeConfigSO__ResolveEnum
                      (*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x40));
    puVar8 = (undefined8 *)(param_1 + 0x38);
    *puVar8 = uVar2;
    thunk_FUN_03f5d7b8(puVar8,uVar2);
    uVar2 = *puVar8;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__op_Equality(uVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    uVar2 = *puVar8;
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Enum__GetNames(uVar2,0);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar2);
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  plVar4 = (long *)(param_1 + 0x40);
  lVar7 = *plVar4;
  if (lVar7 != 0) {
    if ((int)*(uint *)(lVar7 + 0x18) <= (int)uVar6) {
      *plVar4 = 0;
      thunk_FUN_03f5d7b8(plVar4,0);
      return 0;
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(lVar7 + (long)(int)uVar6 * 8 + 0x20);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)System_Enum__Parse(uVar9,uVar2,0);
    local_40 = 0;
    uStack_38 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09535420 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar5 = (undefined4 *)thunk_FUN_03f99594();
      FUN_0655c9b4(&local_40,uVar2,*puVar5,DAT_091bead0);
      *(undefined8 *)(param_1 + 0x20) = uStack_38;
      *(undefined8 *)(param_1 + 0x18) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
  }
LAB_040bb2f4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

