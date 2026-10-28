// rea decompile_all
// name: CakeOrder.RecipePieceConfig$$Clone
// address: 0x426c740
// body: available
// range: 0x426c740-0x426c823 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x426c7e8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x426c820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_RecipePieceConfig__Clone(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_09516ff5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09189c18);
    DAT_09516ff5 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09189c18);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_03f5d7b8();
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar3 = System_Array__Clone(*(long *)(param_1 + 0x18),0), uVar1 = DAT_091801b8, lVar3 == 0))
    {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_03f99350(lVar3,DAT_091801b8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(lVar3,uVar1);
      }
    }
    *(long *)(lVar2 + 0x18) = lVar4;
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

