// rea decompile_all
// name: thunk_FUN_03f68838
// address: 0x74ce900
// body: available
// range: 0x74ce900-0x74ce903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_03f68838(long *param_1,void *param_2,ulong param_3)

{
  void *__src;
  undefined8 uVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    pcVar2 = "structure";
  }
  else {
    if (param_2 != (void *)0x0) {
      lVar3 = *param_1;
      if ((*(long *)(lVar3 + 0x70) != 0) && (*(long *)(*(long *)(lVar3 + 0x70) + 8) != 0)) {
        if ((param_3 & 1) != 0) {
          FUN_03f92394(param_2);
        }
        if (*(char *)(lVar3 + 0x2a) != '\x12') {
          param_1 = (long *)FUN_03f99594(param_1);
        }
        FUN_03f92384(param_1,param_2,*(undefined8 *)(lVar3 + 0x70));
        return;
      }
      if (((*(int *)(lVar3 + 0x108) != -1) && ((*(ushort *)(lVar3 + 0x135) >> 2 & 1) == 0)) &&
         (*(char *)(lVar3 + 0x2a) != '\x0e')) {
        __src = (void *)FUN_03f99594(param_1);
        memcpy(param_2,__src,(long)*(int *)(lVar3 + 0x108));
        return;
      }
      pcVar2 = "The specified object must not be an instance of a generic type.";
      if ((*(long *)(lVar3 + 0x60) == 0) &&
         (pcVar2 = "The specified structure must be blittable or have layout information.",
         (*(ushort *)(lVar3 + 0x135) & 0x10) != 0)) {
        pcVar2 = "The specified object must not be an instance of a generic type.";
      }
      uVar1 = FUN_03fa673c("structure",pcVar2);
      goto LAB_03f6893c;
    }
    pcVar2 = "ptr";
  }
  uVar1 = FUN_03fa6794(pcVar2);
LAB_03f6893c:
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar1,0);
}

