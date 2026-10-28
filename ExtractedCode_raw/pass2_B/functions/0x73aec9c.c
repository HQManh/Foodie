// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$Encode
// address: 0x73aec9c
// body: available
// range: 0x73aec9c-0x73aeebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73aeeb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aeeb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73aeebc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_LZ4_LZ4Codec__Encode
               (undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_50 = param_3;
  local_48 = param_4;
  local_40 = param_1;
  local_38 = param_2;
  if ((DAT_09520bca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    FUN_03f5c2a4(&DAT_091b9768);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba908);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520bca = 1;
  }
  if ((int)param_4 == 0) {
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09209f70);
    MessagePack_MessagePackSerializationException___ctor(uVar4,uVar5,0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091d2128);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  uVar4 = FUN_05ff5c10(&local_40,DAT_091b9768);
  uVar5 = FUN_061083c4(&local_50,DAT_091ba908);
  if ((int)local_38 < 0x1000b) {
    lVar6 = MessagePack_LZ4_LZ4Codec_HashTablePool__GetUShortHashTablePool();
    if (lVar6 == 0) goto LAB_073aeeb8;
    if (*(int *)(lVar6 + 0x18) == 0) goto LAB_073aeebc;
    iVar3 = System_IntPtr__get_Size(0);
    uVar2 = local_38;
    uVar1 = local_48;
    if (iVar3 == 4) {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__LZ4_compress64kCtx_32
                (lVar6 + 0x20,uVar4,uVar5,uVar2 & 0xffffffff,uVar1 & 0xffffffff);
    }
    else {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__LZ4_compress64kCtx_64
                (lVar6 + 0x20,uVar4,uVar5,uVar2 & 0xffffffff,uVar1 & 0xffffffff);
    }
  }
  else {
    lVar6 = MessagePack_LZ4_LZ4Codec_HashTablePool__GetUIntHashTablePool();
    if (lVar6 == 0) {
LAB_073aeeb8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
LAB_073aeebc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    iVar3 = System_IntPtr__get_Size(0);
    uVar2 = local_38;
    uVar1 = local_48;
    if (iVar3 == 4) {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__LZ4_compressCtx_32
                (lVar6 + 0x20,uVar4,uVar5,uVar2 & 0xffffffff,uVar1 & 0xffffffff);
    }
    else {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      MessagePack_LZ4_LZ4Codec__LZ4_compressCtx_64
                (lVar6 + 0x20,uVar4,uVar5,uVar2 & 0xffffffff,uVar1 & 0xffffffff);
    }
  }
  return;
}

