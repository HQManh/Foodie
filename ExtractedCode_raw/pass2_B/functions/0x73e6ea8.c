// rea decompile_all
// name: MessagePack.Formatters.DateTimeOffsetFormatter$$Deserialize
// address: 0x73e6ea8
// body: available
// range: 0x73e6ea8-0x73e6fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e6fe4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
MessagePack_Formatters_DateTimeOffsetFormatter__Deserialize(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((DAT_09520dbe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09520dbe = 1;
  }
  local_38 = 0;
  iVar3 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
  if (iVar3 == 2) {
    local_38 = MessagePack_MessagePackReader__ReadDateTime(param_2,0);
    sVar2 = MessagePack_MessagePackReader__ReadInt16(param_2,0);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar4 = System_DateTime__get_Ticks(&local_38,0);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918bd60);
    }
    uVar5 = System_TimeSpan__FromMinutes((double)(int)sVar2,0);
    local_30 = 0;
    uStack_28 = 0;
    System_DateTimeOffset___ctor(&local_30,uVar4,uVar5,0);
    auVar1._8_8_ = uStack_28;
    auVar1._0_8_ = local_30;
    return auVar1;
  }
  thunk_FUN_03fc39d4(&DAT_09188180);
  uVar4 = thunk_FUN_03f9944c();
  uVar5 = thunk_FUN_03fc39d4(&DAT_092051e0);
  MessagePack_MessagePackSerializationException___ctor(uVar4,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091c7ab0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

