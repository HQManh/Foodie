// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryWriteUInt16
// address: 0x7387c3c
// body: available
// range: 0x7387c3c-0x7387cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7387cec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool MessagePack_MessagePackPrimitives__TryWriteUInt16
               (undefined1 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  if ((DAT_09520a4b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ba910);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520a4b = 1;
  }
  *param_4 = 3;
  if (2 < param_2) {
    *param_1 = 0xcd;
    if ((*(ushort *)(*(long *)(DAT_091ba910 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    if ((param_2 - 1U & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(ushort *)(param_1 + 1) = (ushort)(param_3 >> 8) & 0xff | (ushort)((param_3 & 0xff00ff) << 8);
  }
  return 2 < param_2;
}

