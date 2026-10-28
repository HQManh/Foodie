// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$<TryWrite>g__SlowPath|35_0
// address: 0x7387910
// body: available
// range: 0x7387910-0x7387a7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x738797c to 0x73877c0 MessagePack.MessagePackPrimitives$$TryWriteInt32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73879e4 to 0x7387ab8 MessagePack.MessagePackPrimitives$$TryWriteInt64 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7387a08 to 0x738787c MessagePack.MessagePackPrimitives$$TryWrite (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7387a28 to 0x73874fc MessagePack.MessagePackPrimitives$$TryWriteInt16 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__<TryWrite>g__SlowPath_35_0
          (undefined1 *param_1,undefined8 param_2,ulong param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if ((DAT_09520a57 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3460);
    DAT_09520a57 = 1;
  }
  if ((long)param_3 < -0x8000) {
    if (0xffffffff7fffffff < param_3) {
      uVar1 = MessagePack_MessagePackPrimitives__TryWriteInt32
                        (param_1,param_2,param_3 & 0xffffffff,param_4);
      return uVar1;
    }
    uVar1 = MessagePack_MessagePackPrimitives__TryWriteInt64(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if ((long)param_3 < -0x20) {
    if (param_3 < 0xffffffffffffff80) {
      uVar1 = MessagePack_MessagePackPrimitives__TryWriteInt16
                        (param_1,param_2,param_3 & 0xffffffff,param_4);
      return uVar1;
    }
    if ((DAT_09520a46 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091ba928);
      DAT_09520a46 = 1;
    }
    *param_4 = 2;
    if ((int)param_2 < 2) {
      return 0;
    }
    param_1[1] = (char)param_3;
    *param_1 = 0xd0;
  }
  else {
    if (-1 < (long)param_3) {
      uVar1 = MessagePack_MessagePackPrimitives__TryWrite(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    if ((DAT_09520a56 & 1) == 0) {
      FUN_03f5c2a4(&DAT_091ba928);
      DAT_09520a56 = 1;
    }
    *param_4 = 1;
    if ((int)param_2 < 1) {
      return 0;
    }
    *param_1 = (char)param_3;
  }
  return 1;
}

