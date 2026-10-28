// rea decompile_all
// name: MessagePack.Formatters.ByteReadOnlySequenceFormatter$$Serialize
// address: 0x73d8bcc
// body: available
// range: 0x73d8bcc-0x73d8d47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d8d44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_Formatters_ByteReadOnlySequenceFormatter__Serialize
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((DAT_09520cfb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c44f0);
    FUN_03f5c2a4(&DAT_091a2470);
    FUN_03f5c2a4(&DAT_091a2478);
    FUN_03f5c2a4(&DAT_091b9650);
    FUN_03f5c2a4(&DAT_091b96e8);
    FUN_03f5c2a4(&DAT_091b9720);
    FUN_03f5c2a4(&DAT_0917e560);
    DAT_09520cfb = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = FUN_05fdc318(param_3,DAT_091b9720);
  if (lVar1 < 0x80000000) {
    MessagePack_MessagePackWriter__WriteBinHeader(param_2,lVar1,0);
    FUN_05fdde6c(&local_70,param_3,DAT_091b96e8);
    uVar2 = FUN_07195480(&local_70,DAT_091a2470);
    local_80 = local_48;
    uStack_78 = uStack_40;
    while ((uVar2 & 1) != 0) {
      local_48 = local_80;
      uStack_40 = uStack_78;
      auVar4 = FUN_04a6d544(&local_80,DAT_091b9650);
      MessagePack_MessagePackWriter__WriteRaw(param_2,auVar4._0_8_,auVar4._8_8_,0);
      uVar2 = FUN_07195480(&local_70,DAT_091a2470);
      local_80 = local_48;
      uStack_78 = uStack_40;
    }
    return;
  }
  uVar3 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,DAT_091c44f0);
}

