// rea decompile_all
// name: FUN_03fd5cb8
// address: 0x3fd5cb8
// body: available
// range: 0x3fd5cb8-0x3fd5ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd5dd8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fd5cb8(long param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  for (; lVar1 = *param_2, lVar1 == 3; param_2 = (long *)param_2[2]) {
    lVar1 = FUN_03fd5c18(param_2[1]);
    param_3 = (long *)FUN_03fd5cb8(param_1,param_2[1],param_3,param_4);
    if (param_3 == (long *)0x0) {
      return (long *)0x0;
    }
    param_1 = param_1 + lVar1;
  }
  if (lVar1 == 2) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    lVar3 = FUN_03fd5c18(lVar2);
    while ((lVar1 != 0 &&
           (param_3 = (long *)FUN_03fd5cb8(param_1,lVar2,param_3,param_4), param_3 != (long *)0x0)))
    {
      lVar1 = lVar1 + -1;
      param_1 = param_1 + lVar3;
    }
  }
  else {
    if (lVar1 == 1) {
      lVar1 = param_2[2];
      if (lVar1 < param_4 - (long)param_3 >> 4) {
        if (lVar1 == 0) {
          return param_3;
        }
        lVar2 = param_2[3];
        lVar3 = param_2[1];
        do {
          plVar4 = param_3 + 2;
          *plVar4 = param_1;
          param_3[3] = lVar2;
          lVar1 = lVar1 + -1;
          param_1 = param_1 + lVar3;
          param_3 = plVar4;
        } while (lVar1 != 0);
        return plVar4;
      }
    }
    else if (PTR_thunk_FUN_03fcb048_09515630 != (undefined *)0xffffffffffffffff) {
      (*(code *)PTR_FUN_09515620)("Bad complex descriptor");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_3 = (long *)0x0;
  }
  return param_3;
}

