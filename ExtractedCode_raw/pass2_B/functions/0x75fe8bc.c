// rea decompile_all
// name: System.ConsoleDriver$$get_IsConsole
// address: 0x75fe8bc
// body: available
// range: 0x75fe8bc-0x75fe9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte System_ConsoleDriver__get_IsConsole(void)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09521fd1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a38);
    FUN_03f5c2a4(&DAT_09188380);
    DAT_09521fd1 = 1;
  }
  if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(DAT_09182a38 + 0xb8);
  if (*(char *)(lVar4 + 9) == '\0') {
    if (*(int *)(DAT_09188380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = thunk_FUN_03f8d254(0);
    if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182a38);
    }
    uVar3 = FUN_03f72694(uVar2);
    if ((uVar3 & 1) == 0) {
      bVar1 = 0;
    }
    else {
      if (*(int *)(DAT_09188380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = thunk_FUN_03f8d1f8(0);
      if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182a38);
      }
      bVar1 = FUN_03f72694(uVar2);
    }
    if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(DAT_09182a38 + 0xb8);
    *(byte *)(lVar4 + 8) = bVar1 & 1;
    *(undefined1 *)(lVar4 + 9) = 1;
  }
  else {
    if (*(int *)(DAT_09182a38 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar4 = *(long *)(DAT_09182a38 + 0xb8);
    }
    bVar1 = *(char *)(lVar4 + 8) != '\0';
  }
  return bVar1 & 1;
}

