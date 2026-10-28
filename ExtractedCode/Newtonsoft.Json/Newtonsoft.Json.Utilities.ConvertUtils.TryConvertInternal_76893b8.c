// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$TryConvertInternal
// address: 0x76893b8
// body: available
// range: 0x76893b8-0x7689d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7689d78 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7689d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_ConvertUtils__TryConvertInternal
          (long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long *local_58;
  
  puVar7 = &local_90;
  if ((DAT_09522568 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09170ff0);
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09170bb0);
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_091c6248);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183158);
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091719c8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09173188);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c1f8);
    FUN_03f5c2a4(&DAT_091dc130);
    FUN_03f5c2a4(&DAT_091733e8);
    FUN_03f5c2a4(&DAT_0918c918);
    FUN_03f5c2a4(&DAT_09173528);
    DAT_09522568 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_58 = (long *)0x0;
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_0921d520);
    System_ArgumentNullException___ctor(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c6248);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,uVar3);
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3);
  if ((uVar1 & 1) != 0) {
    param_3 = System_Nullable__GetUnderlyingType(param_3,0);
  }
  uVar2 = System_Object__GetType(param_1,0);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar1 = System_Type__op_Equality(param_3,uVar2,0);
  if ((uVar1 & 1) != 0) {
    *param_4 = (long)param_1;
    plVar4 = param_1;
    goto LAB_07689878;
  }
  uVar3 = System_Object__GetType(param_1,0);
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182b90);
  }
  uVar1 = Newtonsoft_Json_Utilities_ConvertUtils__IsConvertible(uVar3);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Newtonsoft_Json_Utilities_ConvertUtils__IsConvertible(param_3);
    if ((uVar1 & 1) == 0) goto LAB_07689638;
    uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(param_3,0);
    if ((uVar1 & 1) == 0) {
LAB_076897bc:
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Convert__ChangeType(param_1,param_3,param_2,0);
    }
    else if (*param_1 == DAT_09535468) {
      uVar2 = (**(code **)(DAT_09535468 + 0x168))(param_1,*(undefined8 *)(DAT_09535468 + 0x170));
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      plVar4 = (long *)System_Enum__Parse(param_3,uVar2,1,0);
    }
    else {
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = Newtonsoft_Json_Utilities_ConvertUtils__IsInteger(param_1);
      if ((uVar1 & 1) == 0) goto LAB_076897bc;
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Enum__ToObject(param_3,param_1,0);
    }
    goto LAB_0768986c;
  }
LAB_07689638:
  if (*param_1 == DAT_09183548) {
    puVar5 = (undefined8 *)thunk_FUN_03f99594(param_1);
    uVar3 = DAT_09171468;
    uVar8 = *puVar5;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar1 = System_Type__op_Equality(param_3,uVar3,0);
    if ((uVar1 & 1) == 0) goto LAB_076896bc;
    local_80._0_8_ = 0;
    local_80._8_8_ = 0;
    System_DateTimeOffset___ctor(local_80,uVar8,0);
    plVar4 = &DAT_09183590;
LAB_07689730:
    lVar6 = *plVar4;
LAB_07689738:
    uStack_88 = local_80._8_8_;
    local_90 = local_80._0_8_;
LAB_07689868:
    plVar4 = (long *)FUN_03f5c42c(lVar6,puVar7);
  }
  else {
LAB_076896bc:
    lVar6 = thunk_FUN_03f99350(param_1,DAT_0917fc88);
    uVar3 = DAT_091719c8;
    if (lVar6 != 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      if ((uVar1 & 1) != 0) {
        local_80._0_8_ = 0;
        local_80._8_8_ = 0;
        System_Guid___ctor(local_80,lVar6,0);
        plVar4 = &DAT_09184f30;
        goto LAB_07689730;
      }
    }
    lVar6 = *param_1;
    if (lVar6 == DAT_09184f30) {
      puVar5 = (undefined8 *)thunk_FUN_03f99594(param_1);
      uVar3 = DAT_09170bb0;
      uStack_68 = puVar5[1];
      local_70 = *puVar5;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      if ((uVar1 & 1) != 0) {
        plVar4 = (long *)System_Guid__ToByteArray(&local_70,0);
        goto LAB_0768986c;
      }
      lVar6 = *param_1;
    }
    uVar3 = DAT_091719c8;
    if (lVar6 == DAT_09535468) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      uVar3 = DAT_091733e8;
      if ((uVar1 & 1) != 0) {
        local_80._0_8_ = 0;
        local_80._8_8_ = 0;
        System_Guid___ctor(local_80,param_1,0);
        lVar6 = DAT_09184f30;
        goto LAB_07689738;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      uVar3 = DAT_09173188;
      if ((uVar1 & 1) != 0) {
        plVar4 = (long *)thunk_FUN_03f9944c(DAT_0918c918);
        System_Uri___ctor(plVar4,param_1,0,0);
        *param_4 = (long)plVar4;
        goto LAB_07689878;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      uVar3 = DAT_09170bb0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = Newtonsoft_Json_Utilities_ConvertUtils__ParseTimeSpan(param_1);
        local_80._0_8_ = uVar2;
        plVar4 = &DAT_0918bd60;
        goto LAB_0768985c;
      }
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      uVar3 = DAT_09173528;
      if ((uVar1 & 1) == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
        uVar1 = System_Type__op_Equality(param_3,uVar3,0);
        lVar6 = DAT_095354b8;
        if ((uVar1 & 1) != 0) {
          if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar1 = System_Version__TryParse(param_1,&local_58,0);
          if ((uVar1 & 1) != 0) {
            *param_4 = (long)local_58;
            plVar4 = local_58;
            goto LAB_07689878;
          }
          goto LAB_07689ca8;
        }
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_095354b8);
        }
        plVar4 = (long *)System_Type__GetTypeFromHandle(lVar6 + 0x20,0);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar1 = (**(code **)(*plVar4 + 0x2b8))(plVar4,param_3,*(undefined8 *)(*plVar4 + 0x2c0));
        if ((uVar1 & 1) == 0) goto LAB_076897fc;
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)FUN_03f5c7b8(param_1,1,DAT_091dc130,DAT_091c6248);
      }
      else {
        if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)System_Convert__FromBase64String(param_1,0);
      }
    }
    else {
LAB_076897fc:
      uVar3 = DAT_09170ff0;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      uVar1 = System_Type__op_Equality(param_3,uVar3,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_80 = Newtonsoft_Json_Utilities_ConvertUtils__ToBigInteger(param_1);
        plVar4 = &DAT_09181b78;
LAB_0768985c:
        lVar6 = *plVar4;
        puVar7 = (undefined8 *)local_80;
        goto LAB_07689868;
      }
      if (*param_1 == DAT_09181b78) {
        puVar7 = (undefined8 *)FUN_039aef84(param_1);
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)Newtonsoft_Json_Utilities_ConvertUtils__FromBigInteger(uVar2,uVar3,param_3)
        ;
      }
      else {
        if (*(int *)(DAT_0918c1f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)System_ComponentModel_TypeDescriptor__GetConverter(uVar2,0);
        if ((plVar4 == (long *)0x0) ||
           (uVar1 = System_ComponentModel_TypeConverter__CanConvertTo(plVar4,param_3,0),
           (uVar1 & 1) == 0)) {
          if (*(int *)(DAT_0918c1f8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)System_ComponentModel_TypeDescriptor__GetConverter(param_3,0);
          if ((plVar4 == (long *)0x0) ||
             (uVar1 = System_ComponentModel_TypeConverter__CanConvertFrom(plVar4,uVar2,0),
             (uVar1 & 1) == 0)) {
            if (*(int *)(DAT_09183158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if ((long *)**(undefined8 **)(DAT_09183158 + 0xb8) != param_1) {
              uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsInterface(param_3,0);
              if ((((uVar1 & 1) != 0) ||
                  (uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsGenericTypeDefinition
                                     (param_3,0), (uVar1 & 1) != 0)) ||
                 (uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsAbstract(param_3,0),
                 (uVar1 & 1) != 0)) {
                *param_4 = 0;
                thunk_FUN_03f5d7b8(param_4,0);
                return 2;
              }
LAB_07689ca8:
              *param_4 = 0;
              thunk_FUN_03f5d7b8(param_4,0);
              return 3;
            }
            if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3);
            if ((uVar1 & 1) == 0) {
              *param_4 = 0;
              thunk_FUN_03f5d7b8(param_4,0);
              return 1;
            }
            if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = (long *)Newtonsoft_Json_Utilities_ConvertUtils__EnsureTypeAssignable
                                       (0,uVar2,param_3);
          }
          else {
            plVar4 = (long *)(**(code **)(*plVar4 + 0x198))
                                       (plVar4,0,param_2,param_1,*(undefined8 *)(*plVar4 + 0x1a0));
          }
        }
        else {
          plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))
                                     (plVar4,0,param_2,param_1,param_3,
                                      *(undefined8 *)(*plVar4 + 0x1b0));
        }
      }
    }
  }
LAB_0768986c:
  *param_4 = (long)plVar4;
LAB_07689878:
  thunk_FUN_03f5d7b8(param_4,plVar4);
  return 0;
}

