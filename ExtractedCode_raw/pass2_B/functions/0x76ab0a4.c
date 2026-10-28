// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver.<>c$$<GetExtensionDataMemberForType>b__44_1
// address: 0x76ab0a4
// body: available
// range: 0x76ab0a4-0x76ab457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ab30c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ab38c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ab454 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_DefaultContractResolver_<>c__<GetExtensionDataMemberForType>b__44_1
          (undefined8 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *local_38;
  
  if ((DAT_09522647 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171ba8);
    FUN_03f5c2a4(&DAT_09172150);
    FUN_03f5c2a4(&DAT_09172188);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522647 = 1;
  }
  local_38 = (long *)0x0;
  if (param_2 == (long *)0x0) goto LAB_076ab30c;
  iVar1 = (**(code **)(*param_2 + 0x1a8))(param_2,*(undefined8 *)(*param_2 + 0x1b0));
  uVar2 = DAT_09172188;
  if ((iVar1 == 0x10) || (iVar1 == 4)) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
    uVar3 = (**(code **)(*param_2 + 0x1f8))(param_2,uVar2,0,*(undefined8 *)(*param_2 + 0x200));
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__CanReadMemberValue(param_2,1,0);
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        thunk_FUN_03fc39d4(&DAT_09183878);
        FUN_039afb80();
        uVar4 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName(uVar4);
        FUN_039b1d98(param_2);
        uVar7 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        puVar8 = &DAT_09205768;
      }
      else {
        if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = Newtonsoft_Json_Utilities_ReflectionUtils__GetMemberUnderlyingType(param_2,0);
        uVar2 = DAT_09171ba8;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
        uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__ImplementsGenericDefinition
                          (uVar4,uVar2,&local_38,0);
        if ((uVar3 & 1) != 0) {
          if ((local_38 == (long *)0x0) ||
             (lVar5 = (**(code **)(*local_38 + 0x488))(local_38,*(undefined8 *)(*local_38 + 0x490)),
             lVar5 == 0)) goto LAB_076ab30c;
          if (*(int *)(lVar5 + 0x18) == 0) {
LAB_076ab38c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (local_38 == (long *)0x0) {
LAB_076ab30c:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar11 = *(long **)(lVar5 + 0x20);
          lVar6 = (**(code **)(*local_38 + 0x488))(local_38,*(undefined8 *)(*local_38 + 0x490));
          lVar5 = DAT_09535468;
          if (lVar6 == 0) goto LAB_076ab30c;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_076ab38c;
          plVar10 = *(long **)(lVar6 + 0x28);
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar2 = System_Type__GetTypeFromHandle(lVar5 + 0x20,0);
          if (plVar11 == (long *)0x0) goto LAB_076ab30c;
          uVar3 = (**(code **)(*plVar11 + 0x2b8))(plVar11,uVar2,*(undefined8 *)(*plVar11 + 0x2c0));
          uVar2 = DAT_09172150;
          if ((uVar3 & 1) != 0) {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
            if (plVar10 == (long *)0x0) goto LAB_076ab30c;
            uVar3 = (**(code **)(*plVar10 + 0x2b8))(plVar10,uVar2,*(undefined8 *)(*plVar10 + 0x2c0))
            ;
            if ((uVar3 & 1) != 0) {
              return 1;
            }
          }
        }
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar4 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
        thunk_FUN_03fc39d4(&DAT_09183878);
        FUN_039afb80();
        uVar4 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName(uVar4);
        FUN_039b1d98(param_2);
        uVar7 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
        puVar8 = &DAT_09205770;
      }
      uVar9 = thunk_FUN_03fc39d4(puVar8);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar2,uVar4,uVar7);
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar4 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonException___ctor(uVar4,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091e8d38);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar2);
    }
  }
  return 0;
}

