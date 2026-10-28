// rea decompile_all
// name: Newtonsoft.Json.Converters.EntityKeyMemberConverter$$ReadJson
// address: 0x77075a4
// body: available
// range: 0x77075a4-0x770785f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770785c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_EntityKeyMemberConverter__ReadJson
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09522966 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_091c8f48);
    FUN_03f5c2a4(&DAT_09184078);
    FUN_03f5c2a4(&DAT_091dc128);
    FUN_03f5c2a4(&DAT_09212b98);
    FUN_03f5c2a4(&DAT_09211128);
    FUN_03f5c2a4(&DAT_09206568);
    DAT_09522966 = 1;
  }
  Newtonsoft_Json_Converters_EntityKeyMemberConverter__EnsureReflectionObject(param_3);
  lVar1 = DAT_091c0270;
  if (**(long **)(DAT_09184078 + 0xb8) != 0) {
    lVar7 = *(long *)(**(long **)(DAT_09184078 + 0xb8) + 0x10);
    lVar6 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar6 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar6 = *(long *)(lVar1 + 0x38);
    }
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    if (lVar7 != 0) {
      uVar2 = (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),**(undefined8 **)(lVar1 + 0xb8),
                         *(undefined8 *)(lVar7 + 0x28));
      Newtonsoft_Json_Converters_EntityKeyMemberConverter__ReadAndAssertProperty
                (param_2,DAT_09206568);
      if (param_2 != (long *)0x0) {
        Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
        lVar1 = **(long **)(DAT_09184078 + 0xb8);
        plVar3 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        uVar5 = DAT_09206568;
        if (plVar3 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        if (lVar1 != 0) {
          Newtonsoft_Json_Utilities_ReflectionObject__SetValue(lVar1,uVar2,uVar5,uVar4,0);
          Newtonsoft_Json_Converters_EntityKeyMemberConverter__ReadAndAssertProperty
                    (param_2,DAT_09211128);
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          plVar3 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar3 == (long *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          }
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = FUN_03f5c738(uVar5,DAT_091dc128,DAT_091c8f48);
          Newtonsoft_Json_Converters_EntityKeyMemberConverter__ReadAndAssertProperty
                    (param_2,DAT_09212b98);
          Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
          if (param_5 != 0) {
            lVar1 = **(long **)(DAT_09184078 + 0xb8);
            uVar5 = Newtonsoft_Json_JsonSerializer__Deserialize(param_5,param_2,uVar5,0);
            if (lVar1 != 0) {
              Newtonsoft_Json_Utilities_ReflectionObject__SetValue(lVar1,uVar2,DAT_09212b98,uVar5,0)
              ;
              Newtonsoft_Json_JsonReader__ReadAndAssert(param_2,0);
              return uVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

