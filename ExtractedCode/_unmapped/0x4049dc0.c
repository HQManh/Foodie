// rea decompile_all
// name: __cxa_end_catch
// address: 0x4049dc0
// body: available
// range: 0x4049dc0-0x4049ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cxa_end_catch(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    if (*(ulong *)(lVar3 + 0x60) >> 8 != 0x434c4e47432b2b) {
      FUN_0404c4bc((ulong *)(lVar3 + 0x60));
      *plVar2 = 0;
      return;
    }
    iVar1 = *(int *)(lVar3 + 0x38);
    if (iVar1 < 0) {
      *(int *)(lVar3 + 0x38) = iVar1 + 1;
      if (iVar1 == -1) {
        *plVar2 = *(long *)(lVar3 + 0x30);
        return;
      }
    }
    else {
      *(int *)(lVar3 + 0x38) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *plVar2 = *(long *)(lVar3 + 0x30);
        lVar4 = lVar3;
        if (*(char *)(lVar3 + 0x60) == '\x01') {
          lVar4 = *(long *)(lVar3 + 8) + -0x80;
          FUN_0404a4f4(lVar3);
        }
        lVar3 = FUN_0404c020(0xffffffffffffffff,lVar4 + 8);
        if (lVar3 == 1) {
          if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
            (**(code **)(lVar4 + 0x18))(lVar4 + 0x80);
          }
          FUN_0404a4f4(lVar4);
        }
      }
    }
  }
  return;
}

