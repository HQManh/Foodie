// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaConstants$$.cctor
// address: 0x76ced84
// body: available
// range: 0x76ced84-0x76cef8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cef88 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76cef8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Schema_JsonSchemaConstants___cctor(void)

{
  long lVar1;
  
  if ((DAT_09522744 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919faf8);
    FUN_03f5c2a4(&DAT_0919faf0);
    FUN_03f5c2a4(&DAT_09176b70);
    FUN_03f5c2a4(&DAT_091873d0);
    FUN_03f5c2a4(&DAT_092201f0);
    FUN_03f5c2a4(&DAT_09223660);
    FUN_03f5c2a4(&DAT_092176e0);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_092200a0);
    FUN_03f5c2a4(&DAT_0921d6c0);
    FUN_03f5c2a4(&DAT_092179d0);
    FUN_03f5c2a4(&DAT_09218280);
    DAT_09522744 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09176b70);
  FUN_06fcd024(lVar1,DAT_0919faf0);
  if (lVar1 != 0) {
    FUN_06fcddc0(lVar1,DAT_09223660,1,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_092201f0,0x10,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_0921d6c0,4,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_092200a0,2,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_09220040,0x40,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_09218280,8,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_092179d0,0x20,DAT_0919faf8);
    FUN_06fcddc0(lVar1,DAT_092176e0,0x7f,DAT_0919faf8);
    **(long **)(DAT_091873d0 + 0xb8) = lVar1;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_091873d0 + 0xb8),lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

