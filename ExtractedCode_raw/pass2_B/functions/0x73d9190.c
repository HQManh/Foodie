// rea decompile_all
// name: MessagePack.Formatters.ByteListFormatter$$Deserialize
// address: 0x73d9190
// body: available
// range: 0x73d9190-0x73d9323 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73d927c to 0x563b1d8 FUN_0563b1d8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73d9320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
MessagePack_Formatters_ByteListFormatter__Deserialize
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09520d02 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_09182148);
    FUN_03f5c2a4(&DAT_091aa2f0);
    FUN_03f5c2a4(&DAT_091ab718);
    FUN_03f5c2a4(&DAT_0917bdb8);
    FUN_03f5c2a4(&DAT_091b6930);
    FUN_03f5c2a4(&DAT_091b6938);
    DAT_09520d02 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  cVar1 = MessagePack_MessagePackReader__get_NextMessagePackType(param_2,0);
  if (cVar1 != '\a') {
    MessagePack_MessagePackReader__ReadBytes(&local_40,param_2,0);
    if ((char)local_40 == '\0') {
      uVar3 = 0;
    }
    else {
      FUN_05c25078(&local_78,&local_40,DAT_091b6938);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      uVar4 = FUN_04a58db0(&local_60,DAT_091c4278);
      uVar3 = thunk_FUN_03f9944c(DAT_0917bdb8);
      FUN_05721058(uVar3,uVar4,DAT_091ab718);
    }
    return uVar3;
  }
  if (*(int *)(DAT_09182148 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_09182148 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = FUN_0563b1d8(lVar2,param_2,param_3,DAT_091aa2f0);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

