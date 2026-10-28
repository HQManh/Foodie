// rea decompile_all
// name: MessagePack.MessagePackPrimitives$$TryWrite
// address: 0x73875b0
// body: available
// range: 0x73875b0-0x73876cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73875ec to 0x73876cc MessagePack.MessagePackPrimitives$$TryWrite (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7387620 to 0x73874fc MessagePack.MessagePackPrimitives$$TryWriteInt16 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7387670 to 0x73877c0 MessagePack.MessagePackPrimitives$$TryWriteInt32 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_MessagePackPrimitives__TryWrite
          (undefined1 *param_1,undefined8 param_2,uint param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  
  if (-1 < (int)param_3) {
    uVar1 = MessagePack_MessagePackPrimitives__TryWrite(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (0xffffff7f < param_3) {
    if (param_3 < 0xffffffe0) {
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
  if (0xffff7fff < param_3) {
    uVar1 = MessagePack_MessagePackPrimitives__TryWriteInt16();
    return uVar1;
  }
  uVar1 = MessagePack_MessagePackPrimitives__TryWriteInt32(param_1,param_2,param_3,param_4);
  return uVar1;
}

