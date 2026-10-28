// rea decompile_all
// name: MessagePack.MessagePackSerializer$$ConvertToJson
// address: 0x73931f0
// body: available
// range: 0x73931f0-0x7393427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7393418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7393420 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7393424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0739341c) */

void MessagePack_MessagePackSerializer__ConvertToJson(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 *puStack_118;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [128];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  
  if ((DAT_09520ae6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188188);
    FUN_03f5c2a4(&DAT_091ba048);
    FUN_03f5c2a4(&DAT_0917e6a0);
    DAT_09520ae6 = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  memset(auStack_e0,0,0x90);
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_108 = 0;
  uVar1 = MessagePack_MessagePackReader__get_End(param_1);
  if ((uVar1 & 1) == 0) {
    if (param_3 == 0) {
      if (*(int *)(DAT_09188188 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_3 = MessagePack_MessagePackSerializer__get_DefaultOptions();
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(int *)(param_3 + 0x18) == 0) {
      if (*(int *)(DAT_09188188 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_MessagePackSerializer__ToJsonCore(param_1,param_2,param_3);
    }
    else {
      if (*(long *)(param_3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_50 = MessagePack_SequencePool__Rent(*(long *)(param_3 + 0x30),0);
      uVar2 = local_50._8_8_;
      puStack_118 = local_50;
      local_120 = 0;
      if (*(int *)(DAT_09188188 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188188);
      }
      uVar1 = MessagePack_MessagePackSerializer__TryDecompress(param_1,uVar2);
      uVar2 = local_50._8_8_;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_09188188 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        MessagePack_MessagePackSerializer__ToJsonCore(param_1,param_2,param_3);
      }
      else {
        if (*(int *)(DAT_0917e6a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060c901c(&local_1b0,uVar2,DAT_091ba048);
        uStack_f8 = uStack_1a8;
        local_100 = local_1b0;
        local_f0 = local_1a0;
        memset(&local_1b0,0,0x90);
        MessagePack_MessagePackReader___ctor(&local_1b0,&local_100);
        uVar2 = *(undefined8 *)(param_1 + 0x80);
        memcpy(auStack_e0,&local_1b0,0x80);
        uStack_58 = local_128;
        local_60 = uVar2;
        uVar1 = MessagePack_MessagePackReader__get_End(auStack_e0);
        if ((uVar1 & 1) == 0) {
          if (*(int *)(DAT_09188188 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          MessagePack_MessagePackSerializer__ToJsonCore(auStack_e0,param_2,param_3);
        }
      }
      MessagePack_SequencePool_Rental__Dispose(local_50,0);
    }
  }
  return;
}

