// rea decompile_all
// name: FUN_03fa7590
// address: 0x3fa7590
// body: available
// range: 0x3fa7590-0x3fa763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa7590(long *param_1)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  plVar1 = *(long **)*param_1;
  lVar3 = ((long *)*param_1)[2];
  plVar5 = (long *)*plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(lVar3 + 0x10) = plVar1 + 3;
  if (plVar1 + 3 == plVar5) {
    plVar1 = (long *)plVar1[2];
    if (plVar1 == (long *)0x0) {
      return;
    }
    plVar5 = (long *)*plVar1;
    *(long **)(lVar3 + 8) = plVar1;
    *(long **)(lVar3 + 0x10) = plVar1 + 3;
    if (plVar1 + 3 == plVar5) {
      return;
    }
  }
  *(long **)(lVar3 + 0x10) = plVar1 + 4;
  puVar2 = (ulong *)plVar1[3];
  do {
    if (puVar2 == (ulong *)0x0) {
      return;
    }
    *puVar2 = *puVar2 & 0xfffffffffffffffe;
    lVar3 = *(long *)(*param_1 + 0x10);
    plVar1 = *(long **)(lVar3 + 0x10);
    if (plVar1 == (long *)**(undefined8 **)(lVar3 + 8)) {
      puVar4 = (undefined8 *)(*(undefined8 **)(lVar3 + 8))[2];
      if (puVar4 == (undefined8 *)0x0) {
        return;
      }
      plVar1 = puVar4 + 3;
      plVar5 = (long *)*puVar4;
      *(undefined8 **)(lVar3 + 8) = puVar4;
      *(long **)(lVar3 + 0x10) = plVar1;
      if (plVar1 == plVar5) {
        return;
      }
      plVar5 = puVar4 + 4;
    }
    else {
      plVar5 = plVar1 + 1;
    }
    *(long **)(lVar3 + 0x10) = plVar5;
    puVar2 = (ulong *)*plVar1;
  } while( true );
}

