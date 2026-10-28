// rea decompile_all
// name: Newtonsoft.Json.Schema.JsonSchemaBuilder$$BuildSchema
// address: 0x76caf9c
// body: available
// range: 0x76caf9c-0x76cb347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76cb340 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76cb344 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Schema_JsonSchemaBuilder__BuildSchema(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long *plVar9;
  undefined4 local_3c;
  long local_38;
  undefined8 local_28;
  
  if ((DAT_09522738 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a1e8);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187250);
    FUN_03f5c2a4(&DAT_091873c0);
    FUN_03f5c2a4(&DAT_091f6eb0);
    FUN_03f5c2a4(&DAT_091f9400);
    FUN_03f5c2a4(&DAT_092139f8);
    FUN_03f5c2a4(&DAT_09214720);
    FUN_03f5c2a4(&DAT_091f8f68);
    FUN_03f5c2a4(&DAT_091f71e8);
    DAT_09522738 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if (param_2 != (long *)0x0) {
    if ((*(byte *)(DAT_09187220 + 0x130) <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09187220 + 0x130) * 8 + -8) ==
        DAT_09187220)) {
      uVar1 = Newtonsoft_Json_Linq_JObject__TryGetValue(param_2,DAT_091f71e8,&local_28,0);
      if ((uVar1 & 1) == 0) {
        uVar3 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__Replace(uVar3,DAT_091f8f68,DAT_091f9400,0);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__Replace(uVar3,DAT_092139f8,DAT_091f9400,0);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__Replace
                          (uVar3,DAT_09214720,**(undefined8 **)(DAT_09535468 + 0xb8),0);
        uVar1 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar3,0);
        if ((uVar1 & 1) == 0) {
          uVar3 = System_String__Concat(DAT_091f9400,uVar3,0);
        }
        uVar3 = System_String__Concat(DAT_091f6eb0,uVar3,0);
        plVar9 = *(long **)(param_1 + 0x20);
        if (plVar9 != (long *)0x0) {
          lVar2 = *plVar9;
          uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
          if (uVar1 != 0) {
            piVar8 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_0917a1e8) {
                puVar4 = (undefined8 *)(lVar2 + (long)(*piVar8 + 7) * 0x10 + 0x138);
                goto LAB_076cb204;
              }
              uVar1 = uVar1 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar1 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a1e8,7);
LAB_076cb204:
          uVar1 = (*(code *)*puVar4)(plVar9,uVar3,&local_38,puVar4[1]);
          if ((uVar1 & 1) == 0) {
            lVar2 = thunk_FUN_03f9944c(DAT_091873c0);
            Newtonsoft_Json_Schema_JsonSchema___ctor();
            if (lVar2 == 0) goto LAB_076cb344;
            *(undefined8 *)(lVar2 + 0x108) = uVar3;
            thunk_FUN_03f5d7b8(lVar2 + 0x108,uVar3);
            Newtonsoft_Json_Schema_JsonSchemaBuilder__Push(param_1,lVar2);
            Newtonsoft_Json_Schema_JsonSchemaBuilder__ProcessSchemaProperties(param_1,param_2);
            local_38 = Newtonsoft_Json_Schema_JsonSchemaBuilder__Pop(param_1);
          }
          return local_38;
        }
      }
      else {
        lVar2 = thunk_FUN_03f9944c(DAT_091873c0);
        Newtonsoft_Json_Schema_JsonSchema___ctor();
        uVar3 = local_28;
        if (*(int *)(DAT_09187250 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Linq_JToken__op_Explicit(uVar3,0);
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x118) = uVar3;
          thunk_FUN_03f5d7b8(lVar2 + 0x118,uVar3);
          return lVar2;
        }
      }
LAB_076cb344:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  FUN_039b1d98(param_2);
  uVar3 = Newtonsoft_Json_Linq_JToken__get_Path(param_2,0);
  thunk_FUN_03fc39d4(&DAT_09182ff8);
  FUN_039afb80();
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  FUN_039b1d98(param_2);
  local_3c = (**(code **)(*param_2 + 0x228))(param_2,*(undefined8 *)(*param_2 + 0x230));
  uVar6 = thunk_FUN_03fc39d4(&DAT_09187268);
  uVar6 = FUN_03f5c42c(uVar6,&local_3c);
  uVar7 = thunk_FUN_03fc39d4(&DAT_09201eb0);
  uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
  uVar3 = Newtonsoft_Json_JsonException__Create(param_2,uVar3,uVar5,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d19c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar5);
}

