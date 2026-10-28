// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$ReadCodeWScope
// address: 0x771a0d0
// body: available
// range: 0x771a0d0-0x771a2b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771a2b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Bson_BsonReader__ReadCodeWScope(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_095229e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918e990);
    FUN_03f5c2a4(&DAT_091f7200);
    FUN_03f5c2a4(&DAT_091f7178);
    DAT_095229e7 = 1;
  }
  iVar1 = *(int *)((long)param_1 + 0x9c);
  if (iVar1 < 6) {
    if (iVar1 == 4) {
      Newtonsoft_Json_JsonReader__SetToken(param_1,4,DAT_091f7178,0);
      uVar2 = 5;
    }
    else {
      if (iVar1 != 5) goto LAB_0771a284;
      Newtonsoft_Json_Bson_BsonReader__ReadInt32(param_1);
      uVar5 = Newtonsoft_Json_Bson_BsonReader__ReadLengthString(param_1);
      Newtonsoft_Json_JsonReader__SetToken(param_1,9,uVar5,0);
      uVar2 = 6;
    }
  }
  else {
    if (iVar1 == 6) {
      if (*(int *)((long)param_1 + 0x24) == 8) {
        Newtonsoft_Json_JsonReader__SetToken(param_1,4,DAT_091f7200,0);
        return 1;
      }
      Newtonsoft_Json_JsonReader__SetToken(param_1,1,0);
      *(undefined4 *)((long)param_1 + 0x9c) = 7;
      lVar4 = thunk_FUN_03f9944c(DAT_0918e990);
      System_Object___ctor(lVar4,0);
      *(undefined1 *)(lVar4 + 0x10) = 3;
      Newtonsoft_Json_Bson_BsonReader__PushContext(param_1,lVar4);
      uVar2 = Newtonsoft_Json_Bson_BsonReader__ReadInt32(param_1);
      *(undefined4 *)(lVar4 + 0x14) = uVar2;
      return 1;
    }
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        Newtonsoft_Json_JsonReader__SetToken(param_1,0xd,0);
        *(undefined4 *)((long)param_1 + 0x9c) = 0;
        return 1;
      }
LAB_0771a284:
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      System_ArgumentOutOfRangeException___ctor(uVar5,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091c4190);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    uVar3 = Newtonsoft_Json_Bson_BsonReader__ReadNormal(param_1);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
    if (iVar1 != 0xd) {
      return 1;
    }
    uVar2 = 8;
  }
  *(undefined4 *)((long)param_1 + 0x9c) = uVar2;
  return 1;
}

