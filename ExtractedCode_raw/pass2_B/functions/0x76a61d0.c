// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$IsValidCallback
// address: 0x76a61d0
// body: available
// range: 0x76a61d0-0x76a6813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a6550 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a680c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a6810 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_Serialization_DefaultContractResolver__IsValidCallback
               (long *param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  
  if ((DAT_0952263a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091716b8);
    FUN_03f5c2a4(&DAT_09172640);
    FUN_03f5c2a4(&DAT_09172f28);
    DAT_0952263a = 1;
  }
  if (param_1 == (long *)0x0) goto LAB_076a6550;
  uVar1 = (**(code **)(*param_1 + 0x1f8))(param_1,param_3,0,*(undefined8 *)(*param_1 + 0x200));
  if ((uVar1 & 1) == 0) goto LAB_076a6534;
  uVar2 = System_Reflection_MethodInfo__op_Inequality(param_4,0,0);
  if ((uVar2 & 1) == 0) {
    lVar8 = *param_5;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Type__op_Inequality(lVar8,0,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = System_Reflection_MethodBase__get_IsVirtual(param_1,0);
      if ((uVar2 & 1) == 0) {
        uVar3 = (**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
        lVar8 = DAT_095353f8;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        uVar4 = System_Type__GetTypeFromHandle(lVar8 + 0x20,0);
        uVar2 = System_Type__op_Inequality(uVar3,uVar4,0);
        uVar3 = DAT_09172640;
        if ((uVar2 & 1) != 0) {
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(param_1);
          uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
          thunk_FUN_03fc39d4(&DAT_09183878);
          FUN_039afb80();
          uVar4 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName(uVar4);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920cb60);
          uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar4,param_1);
          goto LAB_076a67d4;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
        uVar2 = System_Type__op_Equality(param_3,uVar3,0);
        if ((uVar2 & 1) != 0) {
          if ((param_2 != 0) && (*(int *)(param_2 + 0x18) == 2)) {
            plVar5 = *(long **)(param_2 + 0x20);
            if (plVar5 == (long *)0x0) {
LAB_076a6550:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
            uVar3 = DAT_09172f28;
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
            uVar2 = System_Type__op_Inequality(uVar4,uVar3,0);
            if ((uVar2 & 1) == 0) {
              if ((*(uint *)(param_2 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar5 = *(long **)(param_2 + 0x28);
              if (plVar5 == (long *)0x0) goto LAB_076a6550;
              uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
              uVar3 = DAT_091716b8;
              if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                FUN_03f5c424(DAT_095354b8);
              }
              uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
              uVar2 = System_Type__op_Inequality(uVar4,uVar3,0);
              if ((uVar2 & 1) == 0) goto LAB_076a6524;
            }
          }
          thunk_FUN_03fc39d4(&DAT_09182ff8);
          FUN_039afb80();
          uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          FUN_039b1d98(param_1);
          uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
          thunk_FUN_03fc39d4(&DAT_09183878);
          FUN_039afb80();
          param_5 = (long *)Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName
                                      (uVar4);
          uVar4 = thunk_FUN_03fc39d4(&DAT_09172f28);
          FUN_039afb80(DAT_095354b8);
          uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091716b8);
          param_3 = (long *)System_Type__GetTypeFromHandle(uVar6,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920cb68);
          param_4 = param_1;
          goto LAB_076a66e4;
        }
        if ((param_2 != 0) && (*(int *)(param_2 + 0x18) == 1)) {
          plVar5 = *(long **)(param_2 + 0x20);
          if (plVar5 == (long *)0x0) goto LAB_076a6550;
          uVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          uVar3 = DAT_09172f28;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_095354b8);
          }
          uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
          uVar2 = System_Type__op_Inequality(uVar4,uVar3,0);
          if ((uVar2 & 1) == 0) {
LAB_076a6524:
            *param_5 = (long)param_3;
            thunk_FUN_03f5d7b8(param_5,param_3);
LAB_076a6534:
            return uVar1 & 1;
          }
        }
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_1);
        uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        thunk_FUN_03fc39d4(&DAT_09183878);
        FUN_039afb80();
        plVar5 = (long *)Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName
                                   (uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_09172f28);
        FUN_039afb80(DAT_095354b8);
        param_3 = (long *)System_Type__GetTypeFromHandle(uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920cb58);
        plVar7 = param_1;
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_1);
        uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
        thunk_FUN_03fc39d4(&DAT_09183878);
        FUN_039afb80();
        plVar7 = (long *)Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName
                                   (uVar4);
        uVar4 = thunk_FUN_03fc39d4(&DAT_09212f68);
        plVar5 = param_1;
      }
      uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,plVar5,plVar7,param_3);
      goto LAB_076a67d4;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    param_5 = (long *)*param_5;
    FUN_039b1d98(param_1);
    uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    thunk_FUN_03fc39d4(&DAT_09183878);
    FUN_039afb80();
    uVar4 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName(uVar4);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092051a8);
    param_4 = param_3;
    param_3 = param_1;
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_1);
    uVar4 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    thunk_FUN_03fc39d4(&DAT_09183878);
    FUN_039afb80();
    uVar4 = Newtonsoft_Json_Serialization_DefaultContractResolver__GetClrTypeFullName(uVar4);
    uVar6 = thunk_FUN_03fc39d4(&DAT_092055f8);
    param_5 = param_1;
  }
LAB_076a66e4:
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                    (uVar6,uVar3,param_5,param_4,uVar4,param_3);
LAB_076a67d4:
  thunk_FUN_03fc39d4(&DAT_09187348);
  uVar4 = thunk_FUN_03f9944c();
  Newtonsoft_Json_JsonException___ctor(uVar4,uVar3,0);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c82b0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

