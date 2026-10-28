// rea decompile_all
// name: FUN_03fcee4c
// address: 0x3fcee4c
// body: available
// range: 0x3fcee4c-0x3fcf0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fcee4c(code *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  clock_t cVar4;
  clock_t cVar5;
  int iVar6;
  ulong uVar7;
  
  DAT_09748768 = 1;
  if (DAT_09535be0 == 0) {
    cVar4 = 0;
  }
  else {
    cVar4 = clock();
  }
  FUN_03fcf85c();
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(6);
  }
  FUN_03fcf9a0();
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(7);
  }
  if (DAT_09535be0 != 0) {
    FUN_03fcb51c("\n--> Marking for collection #%lu after %lu allocated bytes\n",DAT_09748118 + 1,
                 DAT_09535c28);
  }
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(1);
  }
  FUN_03f5c2c8();
  FUN_03fcf9ec();
  iVar3 = (*param_1)();
  iVar6 = 0;
  while( true ) {
    if (iVar3 != 0) {
      if (DAT_09535be0 != 0) {
        FUN_03fcb51c("Abandoned stopped marking after %u iterations\n",iVar6);
      }
      DAT_097485a0 = iVar6;
      if (DAT_09748598 != (code *)0x0) {
        (*DAT_09748598)(8);
      }
      FUN_03fcfa80();
      if (DAT_09748598 != (code *)0x0) {
        (*DAT_09748598)(9);
      }
      return 0;
    }
    iVar3 = FUN_03fcf594(&stack0xffffffffffffffc0);
    if (iVar3 != 0) break;
    iVar6 = iVar6 + 1;
    iVar3 = (*param_1)();
  }
  DAT_09748118 = DAT_09748118 + 1;
  if (DAT_09535be0 != 0) {
    FUN_03fcb51c("GC #%lu freed %ld bytes, heap %lu KiB (+ %lu KiB unmapped)\n",DAT_09748118,
                 DAT_097485b8,(DAT_09535be8 - DAT_09535c88) + 0x1ffU >> 10,
                 DAT_09535c88 + 0x1ffU >> 10);
  }
  if (DAT_097480f4 != 0) {
    (*DAT_097485a8)();
  }
  if ((DAT_09748598 != (code *)0x0) && ((*DAT_09748598)(2), DAT_09748598 != (code *)0x0)) {
    (*DAT_09748598)(8);
  }
  FUN_03fcfa80();
  if (DAT_09748598 != (code *)0x0) {
    (*DAT_09748598)(9);
  }
  if (DAT_09535be0 != 0) {
    cVar5 = clock();
    bVar1 = (int)DAT_097485c0 < 0 || 999 < DAT_097485c4;
    uVar7 = (ulong)(cVar5 - cVar4) / 1000;
    iVar6 = (int)uVar7;
    if (0x1f3fffffc17 < (ulong)(cVar5 - cVar4)) {
      iVar6 = 0x7fffffff;
    }
    DAT_097485c0 = (DAT_097485c0 >> bVar1) + iVar6;
    DAT_097485c4 = (DAT_097485c4 >> (ulong)bVar1) + 1;
    uVar2 = 0;
    if (DAT_097485c4 != 0) {
      uVar2 = DAT_097485c0 / DAT_097485c4;
    }
    FUN_03fcb51c("World-stopped marking took %lu msecs (%u in average)\n",uVar7,uVar2);
  }
  return 1;
}

