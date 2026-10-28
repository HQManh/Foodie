// rea decompile_all
// name: System.Console$$.cctor
// address: 0x75fe188
// body: available
// range: 0x75fe188-0x75fe34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Console___cctor(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint local_14;
  
  if ((DAT_09521fa0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182a20);
    FUN_03f5c2a4(&DAT_09183fc0);
    FUN_03f5c2a4(&DAT_0918ed60);
    FUN_03f5c2a4(&DAT_091f9558);
    FUN_03f5c2a4(&DAT_091f9550);
    DAT_09521fa0 = 1;
  }
  local_14 = 0;
  uVar3 = System_IO_File__Exists(DAT_091f9550,0);
  if ((uVar3 & 1) == 0) {
    bVar1 = System_IO_File__Exists(DAT_091f9558,0);
  }
  else {
    bVar1 = 1;
  }
  *(byte *)(*(long *)(DAT_09182a20 + 0xb8) + 0x18) = bVar1 & 1;
  iVar2 = FUN_03f72cfc();
  if (iVar2 < 4) {
    if (*(int *)(DAT_0918ed60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Console_WindowsConsole__GetInputCodePage();
    uVar4 = System_Text_Encoding__GetEncoding(uVar4,0);
    *(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x20) = uVar4;
    thunk_FUN_03f5d7b8();
    uVar4 = System_Console_WindowsConsole__GetOutputCodePage();
    uVar4 = System_Text_Encoding__GetEncoding(uVar4,0);
    *(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x28) = uVar4;
    thunk_FUN_03f5d7b8();
  }
  else {
    local_14 = 0;
    if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Text_EncodingHelper__InternalCodePage(&local_14,0);
    if ((local_14 == 0xffffffff) || (((local_14 & 0xfffffff) != 3 && ((local_14 >> 0x1c & 1) == 0)))
       ) {
      uVar4 = System_Text_Encoding__get_Default(0);
    }
    else {
      if (*(int *)(DAT_09183fc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Text_EncodingHelper__get_UTF8Unmarked(0);
    }
    puVar5 = (undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x28);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
    puVar5 = (undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x20);
    *puVar5 = uVar4;
    thunk_FUN_03f5d7b8(puVar5,uVar4);
  }
  System_Console__SetupStreams
            (*(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x20),
             *(undefined8 *)(*(long *)(DAT_09182a20 + 0xb8) + 0x28));
  return;
}

