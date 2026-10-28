// rea decompile_all
// name: FUN_03fd5b38
// address: 0x3fd5b38
// body: available
// range: 0x3fd5b38-0x3fd5c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd5c14 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fd5b38(ulong param_1,ulong *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  
  plVar5 = (long *)(&DAT_097440c8 + (param_1 >> 0x16 & 0x7ff) * 8);
  do {
    lVar3 = *plVar5;
    plVar5 = (long *)(lVar3 + 0x2018);
  } while (*(ulong *)(lVar3 + 0x2010) != param_1 >> 0x16 && lVar3 != DAT_09535c90);
  uVar4 = *(ulong *)(*(long *)(lVar3 + (param_1 >> 0xc & 0x3ff) * 8) + 0x20);
  plVar5 = (long *)((param_1 + (uVar4 & 0xfffffffffffffff8)) - 8);
  lVar3 = *plVar5;
  puVar2 = param_2;
  if (lVar3 != 0) {
    puVar1 = (ulong *)FUN_03fd5cb8(param_1,lVar3,param_2,param_3 + -0x10);
    if (puVar1 == (ulong *)0x0) {
      if (param_2 == (ulong *)0x0) {
        (*(code *)PTR_FUN_09515620)("Bad mark_stack_ptr");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      DAT_09748758 = 1;
      puVar2 = param_2 + 2;
      *puVar2 = param_1;
    }
    else {
      uVar4 = 8;
      puVar2 = puVar1 + 2;
      *puVar2 = (ulong)plVar5;
      param_2 = puVar1;
    }
    param_2[3] = uVar4;
  }
  return puVar2;
}

