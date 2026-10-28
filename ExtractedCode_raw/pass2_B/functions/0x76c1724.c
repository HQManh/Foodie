// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonTypeReflector$$CanTypeDescriptorConvertString
// address: 0x76c1724
// body: available
// range: 0x76c1724-0x76c18ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c18e4 to 0x7d26ecc System.ComponentModel.TypeConverter$$CanConvertTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76c18fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonTypeReflector__CanTypeDescriptorConvertString
          (undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  if ((DAT_095226f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091732b8);
    FUN_03f5c2a4(&DAT_0918c1f8);
    FUN_03f5c2a4(&DAT_0920e058);
    FUN_03f5c2a4(&DAT_0920e048);
    FUN_03f5c2a4(&DAT_0920e268);
    DAT_095226f1 = 1;
  }
  if (*(int *)(DAT_0918c1f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = System_ComponentModel_TypeDescriptor__GetConverter(param_1,0);
  *param_2 = lVar1;
  thunk_FUN_03f5d7b8(param_2,lVar1);
  if (*param_2 != 0) {
    plVar2 = (long *)System_Object__GetType(*param_2,0);
    if (plVar2 == (long *)0x0) {
LAB_076c18fc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
    uVar4 = System_String__Equals(uVar3,DAT_0920e048,4,0);
    if ((uVar4 & 1) == 0) {
      uVar3 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
      uVar4 = System_String__Equals(uVar3,DAT_0920e058,4,0);
      if ((uVar4 & 1) == 0) {
        uVar3 = (**(code **)(*plVar2 + 0x2f8))(plVar2,*(undefined8 *)(*plVar2 + 0x300));
        uVar4 = System_String__Equals(uVar3,DAT_0920e268,4,0);
        uVar3 = DAT_091732b8;
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          uVar4 = System_Type__op_Inequality(plVar2,uVar3,0);
          lVar1 = DAT_09535468;
          if ((uVar4 & 1) != 0) {
            lVar5 = *param_2;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = System_Type__GetTypeFromHandle(lVar1 + 0x20,0);
            if (lVar5 != 0) {
              uVar3 = System_ComponentModel_TypeConverter__CanConvertTo(lVar5,uVar3,0);
              return uVar3;
            }
            goto LAB_076c18fc;
          }
        }
      }
    }
  }
  return 0;
}

