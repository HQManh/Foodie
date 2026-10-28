// rea decompile_all
// name: CakeOrder.MapIngredientLookupTable$$BuildByNode
// address: 0x4266dcc
// body: available
// range: 0x4266dcc-0x4266f07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4266f00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4266f04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_MapIngredientLookupTable__BuildByNode(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((DAT_09516fb6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d100);
    FUN_03f5c2a4(&DAT_0919d110);
    FUN_03f5c2a4(&DAT_091762e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516fb6 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091762e8);
  FUN_06fd76bc(lVar1,DAT_0919d100);
  if ((param_1 != 0) && (0 < (int)*(ulong *)(param_1 + 0x18))) {
    uVar5 = 0;
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar3 = *(long *)(param_1 + 0x20 + uVar5 * 8);
      if (lVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if ((lVar3 == 0) || (lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd8440(lVar1,*(undefined8 *)(lVar3 + 0x10),lVar3,DAT_0919d110);
      }
      uVar2 = (ulong)*(uint *)(param_1 + 0x18);
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  return lVar1;
}

