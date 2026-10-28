// rea decompile_all
// name: FUN_03f98818
// address: 0x3f98818
// body: available
// range: 0x3f98818-0x3f98973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f98818(char *param_1)

{
  size_t __n;
  size_t __n_00;
  ulong uVar1;
  void *__dest;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uStack_21;
  
  __n_00 = strlen(param_1);
  plVar4 = DAT_09534fb0;
  if (DAT_09534fb0 != DAT_09534fb8) {
    do {
      uVar1 = FUN_03f947e4(&uStack_21,param_1,*(undefined8 *)(*plVar4 + 0x18));
      if ((uVar1 & 1) != 0) {
        return *plVar4;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != DAT_09534fb8);
  }
  uVar1 = FUN_03f98974(param_1,&DAT_01a42571);
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_03f98974(param_1,&DAT_01a67e1f), (uVar1 & 1) == 0)) {
    __dest = operator_new__(__n_00 + 5);
    __n = 5;
    if (0xfffffffffffffffa < __n_00) {
      __n = 0;
    }
    memset((void *)((long)__dest + __n_00),0,__n);
    memcpy(__dest,param_1,__n_00);
    *(undefined4 *)((long)__dest + __n_00) = 0x6c6c642e;
    lVar2 = FUN_03f98818(__dest);
    if (lVar2 == 0) {
      *(undefined4 *)((long)__dest + __n_00) = 0x6578652e;
      lVar2 = FUN_03f98818(__dest);
    }
    operator_delete__(__dest);
  }
  else {
    plVar3 = DAT_09534fb0;
    if (DAT_09534fb0 != plVar4) {
      do {
        uVar1 = FUN_03f947e4(&uStack_21,param_1,**(undefined8 **)*plVar3);
        if ((uVar1 & 1) != 0) {
          return *plVar3;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != DAT_09534fb8);
    }
    lVar2 = 0;
  }
  return lVar2;
}

