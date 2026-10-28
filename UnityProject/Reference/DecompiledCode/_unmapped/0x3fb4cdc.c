// rea decompile_all
// name: FUN_03fb4cdc
// address: 0x3fb4cdc
// body: available
// range: 0x3fb4cdc-0x3fb4dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03fb4cdc(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  char *__s1;
  long *plVar5;
  undefined1 auVar6 [16];
  
  while (plVar1 = param_2, uVar3 = param_3, plVar4 = param_4, plVar1 != param_4) {
    param_2 = plVar1 + -4;
    plVar5 = *(long **)(*param_2 + 0x20);
    if (*plVar5 != 0) {
      __s1 = (char *)plVar5[3];
      iVar2 = strcmp(__s1,"System");
      if (((iVar2 != 0) || (iVar2 = strcmp((char *)plVar5[2],"Type"), iVar2 != 0)) &&
         ((iVar2 = strcmp(__s1,"System.Reflection"), uVar3 = param_1, plVar4 = plVar1, iVar2 != 0 ||
          (iVar2 = strcmp((char *)plVar5[2],"Assembly"), iVar2 != 0)))) break;
    }
  }
  auVar6._8_8_ = plVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}

