// rea decompile_all
// name: MessagePack.LZ4.LZ4Codec$$Decode
// address: 0x73b0548
// body: available
// range: 0x73b0548-0x73b06c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73b06c4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong MessagePack_LZ4_LZ4Codec__Decode
                (undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = param_3;
  local_38 = param_4;
  local_30 = param_1;
  local_28 = param_2;
  if ((DAT_09520bcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187588);
    FUN_03f5c2a4(&DAT_091b9768);
    FUN_03f5c2a4(&DAT_091b9798);
    FUN_03f5c2a4(&DAT_091ba908);
    FUN_03f5c2a4(&DAT_091ba928);
    DAT_09520bcb = 1;
  }
  if ((int)param_4 == 0) {
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09209f70;
  }
  else {
    uVar3 = FUN_05ff5c10(&local_30,DAT_091b9768);
    uVar4 = FUN_061083c4(&local_40,DAT_091ba908);
    iVar2 = System_IntPtr__get_Size(0);
    uVar1 = local_38;
    if (iVar2 == 4) {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = MessagePack_LZ4_LZ4Codec__LZ4_uncompress_32(uVar3,uVar4,uVar1 & 0xffffffff);
    }
    else {
      if (*(int *)(DAT_09187588 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = MessagePack_LZ4_LZ4Codec__LZ4_uncompress_64(uVar3,uVar4,uVar1 & 0xffffffff);
    }
    if (iVar2 == (int)local_28) {
      return local_38 & 0xffffffff;
    }
    thunk_FUN_03fc39d4(&DAT_09188180);
    uVar3 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092068c8;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar5);
  MessagePack_MessagePackSerializationException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d2120);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

