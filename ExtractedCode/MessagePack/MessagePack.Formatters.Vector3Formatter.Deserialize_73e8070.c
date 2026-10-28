// rea decompile_all
// name: MessagePack.Formatters.Vector3Formatter$$Deserialize
// address: 0x73e8070
// body: available
// range: 0x73e8070-0x73e813f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73e813c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
MessagePack_Formatters_Vector3Formatter__Deserialize(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 local_30;
  undefined4 local_28;
  
  iVar1 = MessagePack_MessagePackReader__ReadArrayHeader(param_2,0);
  if (iVar1 == 3) {
    uVar4 = MessagePack_MessagePackReader__ReadSingle(param_2,0);
    uVar5 = MessagePack_MessagePackReader__ReadSingle(param_2,0);
    uVar6 = MessagePack_MessagePackReader__ReadSingle(param_2,0);
    local_30 = 0;
    local_28 = 0;
    System_Numerics_Vector3___ctor(uVar4,uVar5,uVar6,&local_30,0);
    return (undefined4)local_30;
  }
  thunk_FUN_03fc39d4(&DAT_09188180);
  uVar2 = thunk_FUN_03f9944c();
  uVar3 = thunk_FUN_03fc39d4(&DAT_09205448);
  MessagePack_MessagePackSerializationException___ctor(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091debf8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar3);
}

