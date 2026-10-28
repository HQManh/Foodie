// rea decompile_all
// name: MessagePack.MessagePackWriter$$FlushAndGetArray
// address: 0x73a1cc8
// body: available
// range: 0x73a1cc8-0x73a1e17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73a1e10 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73a1e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_MessagePackWriter__FlushAndGetArray(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09520b56 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4278);
    FUN_03f5c2a4(&DAT_091b9780);
    FUN_03f5c2a4(&DAT_091ba038);
    DAT_09520b56 = 1;
  }
  local_30 = 0;
  uStack_28 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uVar1 = MessagePack_BufferWriter__TryGetUncommittedSpan(param_1,&local_30,0);
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + 0x48) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar2 = thunk_FUN_03f9944c();
      uVar3 = thunk_FUN_03fc39d4(&DAT_09210658);
      System_NotSupportedException___ctor(uVar2,uVar3,0);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d36b8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar2,uVar3);
    }
    FUN_0739c994(param_1,0);
    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_060c8e44(&local_68,*(long *)(param_1 + 0x48),DAT_091ba038);
    uStack_48 = uStack_60;
    local_50 = local_68;
    local_40 = local_58;
    uVar2 = FUN_04a58db0(&local_50,DAT_091c4278);
    if (*(long *)(param_1 + 0x40) != 0) {
      MessagePack_SequencePool__Return(*(long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
  }
  else {
    uVar2 = FUN_05ff5f74(&local_30,DAT_091b9780);
  }
  return uVar2;
}

