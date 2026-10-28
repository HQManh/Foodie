// rea decompile_all
// name: MessagePack.MessagePackReader$$ReadNil
// address: 0x738b4b8
// body: available
// range: 0x738b4b8-0x738b54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738b544 to 0x738e178 MessagePack.MessagePackReader$$ThrowNotEnoughBytesException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 MessagePack_MessagePackReader__ReadNil(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  char local_24 [4];
  
  if ((DAT_09520a8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188850);
    FUN_03f5c2a4(&DAT_091b9fb8);
    DAT_09520a8b = 1;
  }
  local_24[0] = '\0';
  uVar2 = FUN_0739d370(param_1,local_24,DAT_091b9fb8);
  if ((uVar2 & 1) != 0) {
    if (local_24[0] == -0x40) {
      return **(undefined1 **)(DAT_09188850 + 0xb8);
    }
    uVar3 = MessagePack_MessagePackReader__ThrowInvalidCode();
    if ((DAT_09520a8c & 1) == 0) {
      FUN_03f5c2a4(&DAT_091b9f90);
      DAT_09520a8c = 1;
    }
    cVar1 = MessagePack_MessagePackReader__get_NextCode(uVar3);
    if (cVar1 == -0x40) {
      FUN_042658c0(uVar3,1,DAT_091b9f90);
    }
    return cVar1 == -0x40;
  }
                    /* WARNING: Subroutine does not return */
  MessagePack_MessagePackReader__ThrowNotEnoughBytesException();
}

