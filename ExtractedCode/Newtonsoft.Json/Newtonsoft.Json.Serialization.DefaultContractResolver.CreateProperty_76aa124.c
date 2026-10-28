// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateProperty
// address: 0x76aa124
// body: available
// range: 0x76aa124-0x76aa343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76aa340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Serialization_DefaultContractResolver__CreateProperty
               (long *param_1,long *param_2,int param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char local_34 [4];
  
  if ((DAT_0952263e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091873a8);
    FUN_03f5c2a4(&DAT_09189d20);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_0952263e = 1;
  }
  local_34[0] = '\0';
  lVar4 = thunk_FUN_03f9944c(DAT_091873a8);
  System_Object___ctor(lVar4,0);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberUnderlyingType(param_2,0);
  if ((lVar4 != 0) &&
     (Newtonsoft_Json_Serialization_JsonProperty__set_PropertyType(lVar4,uVar5),
     param_2 != (long *)0x0)) {
    uVar5 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    *(undefined8 *)(lVar4 + 0x50) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar5 = (**(code **)(*param_1 + 0x288))(param_1,param_2,*(undefined8 *)(*param_1 + 0x290));
    *(undefined8 *)(lVar4 + 0x68) = uVar5;
    thunk_FUN_03f5d7b8();
    uVar5 = thunk_FUN_03f9944c(DAT_09189d20);
    Newtonsoft_Json_Serialization_ReflectionAttributeProvider___ctor(uVar5,param_2,0);
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x70),uVar5);
    uVar5 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    uVar6 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
    uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__SetPropertySettingsFromAttributes
                      (param_1,lVar4,param_2,uVar5,uVar6,param_3,local_34);
    cVar2 = local_34[0];
    if (param_3 == 2) {
      bVar3 = 1;
      *(undefined1 *)(lVar4 + 0x81) = 1;
    }
    else {
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__CanReadMemberValue(param_2,cVar2 != '\0',0)
      ;
      *(byte *)(lVar4 + 0x81) = bVar3 & 1;
      uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__CanSetMemberValue
                        (param_2,cVar2 != '\0',*(undefined1 *)(lVar4 + 0x83),0);
      bVar3 = (byte)uVar5 & 1;
    }
    lVar1 = param_1[5];
    *(byte *)(lVar4 + 0x82) = bVar3;
    if ((char)lVar1 == '\0') {
      uVar5 = Newtonsoft_Json_Serialization_DefaultContractResolver__CreateShouldSerializeTest
                        (uVar5,param_2);
      *(undefined8 *)(lVar4 + 0xb0) = uVar5;
      uVar5 = thunk_FUN_03f5d7b8();
    }
    if (*(char *)((long)param_1 + 0x27) == '\0') {
      Newtonsoft_Json_Serialization_DefaultContractResolver__SetIsSpecifiedActions
                (uVar5,lVar4,param_2,local_34[0]);
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

