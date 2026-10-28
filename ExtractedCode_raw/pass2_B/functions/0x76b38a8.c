// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
// address: 0x76b38a8
// body: available
// range: 0x76b38a8-0x76b3d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b396c to 0x76b3e60 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateJToken (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b3a44 to 0x76b5708 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b3b2c to 0x76b5090 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b3b68 to 0x76b4680 Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b3c1c to 0x7529044 System.Convert$$FromBase64String (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b3d60 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b3d64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b3d6c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b3d74 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
          (undefined8 param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  uVar5 = param_1;
  if ((DAT_095226a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091713e8);
    FUN_03f5c2a4(&DAT_09183158);
    uVar5 = FUN_03f5c2a4(&DAT_09187248);
    DAT_095226a9 = 1;
  }
  if ((param_4 != 0) && (*(int *)(param_4 + 0x24) == 8)) {
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateJToken
                      (uVar5,param_2,param_4);
    return uVar5;
  }
  if (param_2 == (long *)0x0) {
LAB_076b3d64:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  do {
    uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar5 = DAT_091713e8;
    if (uVar3 != 5) {
      if ((int)uVar3 < 6) {
        if (uVar3 == 1) {
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateObject
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar5;
        }
        if (uVar3 == 2) {
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList
                            (param_1,param_2,param_3,param_4,param_5,param_8,0);
          return uVar5;
        }
        if (uVar3 == 3) {
          plVar7 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          if (plVar7 != (long *)0x0) {
            pcVar9 = *(code **)(*plVar7 + 0x168);
            uVar5 = *(undefined8 *)(*plVar7 + 0x170);
            goto LAB_076b39ec;
          }
          goto LAB_076b3d64;
        }
      }
      else {
        if (uVar3 < 0x12) {
          uVar2 = 1 << (ulong)(uVar3 & 0x1f);
          if ((uVar2 & 0x30580) == 0) {
            if ((uVar2 & 0x1800) == 0) {
              if (uVar3 == 9) {
                plVar7 = (long *)(**(code **)(*param_2 + 0x248))
                                           (param_2,*(undefined8 *)(*param_2 + 0x250));
                uVar5 = DAT_09170bb0;
                if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar7);
                }
                if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
                uVar6 = System_Type__op_Equality(param_3,uVar5,0);
                if ((uVar6 & 1) != 0) {
                  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar5 = System_Convert__FromBase64String(plVar7,0);
                  return uVar5;
                }
                uVar6 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CoerceEmptyStringToNull
                                  (param_3,param_4,plVar7);
                if ((uVar6 & 1) != 0) {
                  return 0;
                }
                iVar1 = *(int *)(DAT_09182ff8 + 0xe4);
                goto joined_r0x076b3a04;
              }
              goto LAB_076b3c20;
            }
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
            uVar6 = System_Type__op_Equality(param_3,uVar5,0);
            if ((uVar6 & 1) != 0) {
              if (*(int *)(DAT_09183158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              return **(undefined8 **)(DAT_09183158 + 0xb8);
            }
          }
          pcVar9 = *(code **)(*param_2 + 0x248);
          uVar5 = *(undefined8 *)(*param_2 + 0x250);
          plVar7 = param_2;
LAB_076b39ec:
          plVar7 = (long *)(*pcVar9)(plVar7,uVar5);
          iVar1 = *(int *)(DAT_09182ff8 + 0xe4);
joined_r0x076b3a04:
          if (iVar1 == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                            (uVar5,param_2,plVar7,uVar5,param_4,param_3);
          return uVar5;
        }
LAB_076b3c20:
        if (uVar3 == 6) {
          plVar7 = (long *)(**(code **)(*param_2 + 0x248))
                                     (param_2,*(undefined8 *)(*param_2 + 0x250));
          uVar5 = thunk_FUN_03f9944c(DAT_09187248);
          if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar7);
          }
          Newtonsoft_Json_Linq_JRaw___ctor(uVar5,plVar7,0);
          return uVar5;
        }
      }
      FUN_039b1d98(param_2);
      uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      local_68 = thunk_FUN_03fc39d4(&DAT_09187478);
      uStack_60 = 0xffffffffffffffff;
      local_58 = uVar4;
      uVar5 = System_Enum__ToString(&local_68,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09211f38);
      uVar5 = System_String__Concat(uVar8,uVar5,0);
      goto LAB_076b3d38;
    }
    uVar6 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290));
  } while ((uVar6 & 1) != 0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_09211d00);
LAB_076b3d38:
  uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091d1b18);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar8);
}

