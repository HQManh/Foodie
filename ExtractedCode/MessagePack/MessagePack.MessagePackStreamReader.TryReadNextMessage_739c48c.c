// rea decompile_all
// name: MessagePack.MessagePackStreamReader$$TryReadNextMessage
// address: 0x739c48c
// body: available
// range: 0x739c48c-0x739c6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x739c6bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 MessagePack_MessagePackStreamReader__TryReadNextMessage(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [144];
  
  if ((DAT_09520b2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b73d8);
    FUN_03f5c2a4(&DAT_091b96f8);
    FUN_03f5c2a4(&DAT_0917e560);
    FUN_03f5c2a4(&DAT_091ba040);
    FUN_03f5c2a4(&DAT_091ba048);
    FUN_03f5c2a4(&DAT_0917e6a0);
    DAT_09520b2c = 1;
  }
  memset(auStack_d0,0,0x90);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar1 = FUN_060c8ebc(*(long *)(param_1 + 0x28),DAT_091ba040);
  if (0 < lVar1) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060c901c(&local_108,uVar3,DAT_091ba048);
    uStack_e8 = uStack_100;
    local_f0 = local_108;
    local_e0 = local_f8;
    memset(&local_198,0,0x90);
    MessagePack_MessagePackReader___ctor(&local_198,&local_f0);
    memcpy(auStack_d0,&local_198,0x90);
    uVar2 = MessagePack_MessagePackReader__TrySkip(auStack_d0);
    if ((uVar2 & 1) != 0) {
      auVar4 = MessagePack_MessagePackReader__get_Position(auStack_d0);
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      FUN_05c3713c(&local_198,auVar4._0_8_,auVar4._8_8_,DAT_091b73d8);
      *(undefined8 *)(param_1 + 0x38) = uStack_190;
      *(undefined8 *)(param_1 + 0x30) = local_198;
      *(undefined8 *)(param_1 + 0x40) = local_188;
      thunk_FUN_03f5d7b8(param_1 + 0x38,0);
      MessagePack_MessagePackReader__get_Sequence(&local_108,auStack_d0);
      uStack_e8 = uStack_100;
      local_f0 = local_108;
      local_e0 = local_f8;
      auVar4 = MessagePack_MessagePackReader__get_Position(auStack_d0);
      if (*(int *)(DAT_0917e560 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_05fdd64c(&local_1b0,&local_f0,0,auVar4._0_8_,auVar4._8_8_,DAT_091b96f8);
      param_2[1] = uStack_1a8;
      *param_2 = local_1b0;
      param_2[2] = local_1a0;
      thunk_FUN_03f5d7b8(param_2,0);
      return 1;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return 0;
}

