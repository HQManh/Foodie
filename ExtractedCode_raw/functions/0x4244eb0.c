// rea decompile_all
// name: AnhPD.FoodOrder.IngGridLayout.<EnabledCells>d__25$$MoveNext
// address: 0x4244eb0
// body: available
// range: 0x4244eb0-0x4244f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4244f5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_IngGridLayout_<EnabledCells>d__25__MoveNext(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    goto LAB_04244f10;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  iVar2 = 0;
  while (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x20) <= iVar2) {
      return 0;
    }
    iVar2 = *(int *)(lVar3 + 0x24);
    while( true ) {
      iVar2 = iVar2 + -1;
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 < 0) break;
      if (lVar3 == 0) goto LAB_04244f5c;
      uVar4 = CONCAT44(iVar2,*(int *)(param_1 + 0x28));
      uVar1 = AnhPD_FoodOrder_IngGridLayout__IsCellEnabled(lVar3,uVar4);
      if ((uVar1 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x14) = uVar4;
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
LAB_04244f10:
      iVar2 = *(int *)(param_1 + 0x2c);
    }
    iVar2 = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x28) = iVar2;
  }
LAB_04244f5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

