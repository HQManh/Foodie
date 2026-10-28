// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$ReadReference
// address: 0x7719f14
// body: available
// range: 0x7719f14-0x771a0cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771a0cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Bson_BsonReader__ReadReference(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  
  if ((DAT_095229e8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f71a8);
    FUN_03f5c2a4(&DAT_091f71e8);
    DAT_095229e8 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x9c) == 3) {
      uVar2 = Newtonsoft_Json_Bson_BsonReader__ReadBytes(param_1,0xc);
      uVar3 = 0x11;
    }
    else {
      if (*(int *)(param_1 + 0x9c) != 2) goto LAB_0771a060;
      uVar2 = Newtonsoft_Json_Bson_BsonReader__ReadLengthString(param_1);
      uVar3 = 9;
    }
    Newtonsoft_Json_JsonReader__SetToken(param_1,uVar3,uVar2,0);
  }
  else {
    if (iVar1 == 8) {
      if (*(int *)(param_1 + 0x9c) == 3) {
        Newtonsoft_Json_JsonReader__SetToken(param_1,0xd,0);
        *(undefined4 *)(param_1 + 0x9c) = 0;
        return 1;
      }
      if (*(int *)(param_1 + 0x9c) != 2) {
LAB_0771a060:
        local_38 = thunk_FUN_03fc39d4(&DAT_0918e988);
        local_28 = *(int *)(param_1 + 0x9c);
LAB_0771a07c:
        uStack_30 = 0xffffffffffffffff;
        uVar2 = System_Enum__ToString(&local_38,0);
        uVar3 = thunk_FUN_03fc39d4(&DAT_09211e20);
        uVar2 = System_String__Concat(uVar3,uVar2,0);
        uVar2 = Newtonsoft_Json_JsonReaderException__Create(param_1,uVar2,0);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091c41a0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar2,uVar3);
      }
      Newtonsoft_Json_JsonReader__SetToken(param_1,4,DAT_091f71a8,0);
      uVar4 = 3;
    }
    else {
      if (iVar1 != 3) {
        local_38 = thunk_FUN_03fc39d4(&DAT_09191fb8);
        local_28 = iVar1;
        goto LAB_0771a07c;
      }
      Newtonsoft_Json_JsonReader__SetToken(param_1,4,DAT_091f71e8,0);
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar4;
  }
  return 1;
}

