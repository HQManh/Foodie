// rea decompile_all
// name: FUN_03fcea68
// address: 0x3fcea68
// body: available
// range: 0x3fcea68-0x3fcecbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fcea68(code *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  clock_t cVar4;
  undefined8 uVar5;
  clock_t cVar6;
  
  if (DAT_09748500 != 0) {
    return 0;
  }
  iVar2 = (*param_1)();
  if (iVar2 == 0) {
    if (DAT_09748598 != (code *)0x0) {
      (*DAT_09748598)(0);
    }
    if ((DAT_097480f0 != 0) && (DAT_09748728 != 0)) {
      if (DAT_09535be0 == 0) goto LAB_03fceb0c;
      FUN_03fcb51c("GC_try_to_collect_inner: finishing collection in progress\n");
      while (DAT_09748728 != 0) {
LAB_03fceb0c:
        iVar2 = (*param_1)();
        if (iVar2 != 0) {
          return 0;
        }
        FUN_03fcf488(1);
      }
    }
    if (DAT_09748588 != (code *)0x0) {
      (*DAT_09748588)();
    }
    cVar1 = DAT_09748528;
    iVar2 = DAT_09535be0;
    if (DAT_09535be0 == 0 && DAT_09748528 == '\0') {
      cVar4 = 0;
    }
    else {
      if (DAT_09535be0 != 0) {
        FUN_03fcb51c("Initiating full world-stop collection!\n");
      }
      cVar4 = clock();
    }
    FUN_03fcb398();
    if (((param_1 != (code *)&LAB_03fce6f8) || (DAT_09748510 != 0)) &&
       (uVar5 = FUN_03fcecbc(param_1,0), (int)uVar5 == 0)) {
      return uVar5;
    }
    DAT_09748728 = 5;
    DAT_09535c70 = DAT_09535c60 + -0x10;
    FUN_03fcca28(&LAB_03fd3854,0);
    DAT_0974875c = 0;
    DAT_09748760 = 0;
    DAT_09748728 = 5;
    DAT_09748590 = 1;
    iVar3 = FUN_03fcee4c(param_1);
    if (iVar3 != 0) {
      FUN_03fcf0b4();
      if (iVar2 != 0 || cVar1 != '\0') {
        cVar6 = clock();
        if (DAT_09748528 == '\x01') {
          DAT_09748530 = DAT_09748530 + (ulong)(cVar6 - cVar4) / 1000;
        }
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Complete collection took %lu msecs\n");
        }
      }
      if (DAT_09748598 != (code *)0x0) {
        (*DAT_09748598)(5);
      }
      return 1;
    }
    if (DAT_097480f0 == 0) {
      DAT_09748728 = 5;
      DAT_09535c70 = DAT_09535c60 + -0x10;
      if (DAT_09515628 == 0) {
        memcpy(DAT_09535bc0,DAT_09535bb8,0x40000);
      }
      memcpy(DAT_09535bd0,DAT_09535bc8,0x40000);
    }
  }
  return 0;
}

