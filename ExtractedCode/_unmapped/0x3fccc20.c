// rea decompile_all
// name: FUN_03fccc20
// address: 0x3fccc20
// body: available
// range: 0x3fccc20-0x3fccdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fccc20(long *param_1,long param_2,int param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  Hint_Prefetch(param_1,2,0,0);
  Hint_Prefetch(param_1 + 0x10,2,0,0);
  Hint_Prefetch(param_1 + 0x20,2,0,0);
  Hint_Prefetch((long)param_1 + 0x17a,2,0,0);
  plVar3 = param_1;
  if (param_2 == 4) {
    plVar4 = param_1 + 0x200;
    plVar5 = param_1 + 4;
    *param_1 = param_4;
    if (param_3 == 0) {
      param_1[4] = (long)param_1;
      if (param_1 + 8 < plVar4) {
        plVar3 = param_1 + 4;
        plVar5 = param_1;
        do {
          Hint_Prefetch(plVar5 + 0x48,2,0,0);
          param_1 = plVar5 + 8;
          *param_1 = (long)plVar3;
          plVar1 = plVar5 + 0x10;
          plVar2 = plVar3 + 4;
          plVar3 = plVar3 + 8;
          plVar5[0xc] = (long)plVar2;
          plVar5 = param_1;
        } while (plVar1 < plVar4);
      }
      plVar3 = param_1 + 4;
    }
    else {
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      while (plVar5 < plVar4) {
        Hint_Prefetch(plVar3 + 0x44,2,0,0);
        plVar3[4] = (long)param_1;
        param_1 = param_1 + 4;
        plVar3[6] = 0;
        plVar3[7] = 0;
        plVar3[5] = 0;
        plVar5 = plVar3 + 8;
        plVar3 = plVar3 + 4;
      }
    }
  }
  else if (param_2 == 2) {
    plVar5 = param_1 + 0x200;
    plVar3 = param_1 + 4;
    *param_1 = param_4;
    if (param_3 == 0) {
      param_1[2] = (long)param_1;
      if (plVar3 < plVar5) {
        plVar4 = param_1 + 2;
        do {
          param_1 = plVar3;
          plVar3 = plVar4 + 2;
          *param_1 = (long)plVar4;
          plVar4 = plVar4 + 4;
          param_1[2] = (long)plVar3;
          plVar3 = param_1 + 4;
        } while (param_1 + 4 < plVar5);
      }
    }
    else {
      param_1[1] = 0;
      param_1[2] = (long)param_1;
      param_1[3] = 0;
      plVar4 = plVar3;
      while (plVar1 = plVar4, plVar1 < plVar5) {
        plVar4 = plVar3 + -2;
        plVar1[2] = (long)plVar3;
        plVar1[3] = 0;
        plVar3 = plVar3 + 4;
        *plVar1 = (long)plVar4;
        plVar1[1] = 0;
        param_1 = plVar1;
        plVar4 = plVar1 + 4;
      }
    }
    plVar3 = param_1 + 2;
  }
  else {
    if (param_3 != 0) {
      memset(param_1,0,0x1000);
    }
    while (plVar3 + param_2 <= param_1 + (0x200 - param_2)) {
      plVar3[param_2] = (long)plVar3;
      plVar3 = plVar3 + param_2;
    }
    *param_1 = param_4;
  }
  return plVar3;
}

