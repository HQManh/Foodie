// rea decompile_all
// name: Newtonsoft.Json.Serialization.DefaultContractResolver$$CreateContract
// address: 0x76a94d0
// body: available
// range: 0x76a94d0-0x76a98d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a98d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_DefaultContractResolver__CreateContract
               (long *param_1,long *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  if ((DAT_09522636 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183878);
    FUN_03f5c2a4(&DAT_09171bb0);
    FUN_03f5c2a4(&DAT_09171bb8);
    FUN_03f5c2a4(&DAT_09171d68);
    FUN_03f5c2a4(&DAT_09172150);
    FUN_03f5c2a4(&DAT_091872d8);
    FUN_03f5c2a4(&DAT_09187330);
    FUN_03f5c2a4(&DAT_09187380);
    FUN_03f5c2a4(&DAT_091d1d68);
    FUN_03f5c2a4(&DAT_09187480);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522636 = 1;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__EnsureNotByRefType(param_2,0);
  if (*(int *)(DAT_09183878 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183878);
  }
  uVar2 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsJsonPrimitiveType(uVar1);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined8 *)(*param_1 + 0x210);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x208);
    goto LAB_076a9788;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar3 = (long *)Newtonsoft_Json_Utilities_ReflectionUtils__EnsureNotNullableType(uVar1,0);
  if (*(int *)(DAT_09187480 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09187480);
  }
  plVar4 = (long *)FUN_04bdd338(plVar3,DAT_091d1d68);
  uVar1 = DAT_09172150;
  if (plVar4 == (long *)0x0) {
LAB_076a9678:
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
    uVar2 = System_Type__op_Equality(plVar3,uVar1,0);
    uVar1 = DAT_09172150;
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = System_Type__GetTypeFromHandle(uVar1,0);
      if (plVar3 == (long *)0x0) {
LAB_076a98d0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,uVar1,*(undefined8 *)(*plVar3 + 0x2b0));
      if ((uVar2 & 1) == 0) {
        uVar2 = Newtonsoft_Json_Utilities_CollectionUtils__IsDictionaryType(plVar3,0);
        uVar1 = DAT_09171bb8;
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
          if (plVar4 == (long *)0x0) goto LAB_076a98d0;
          uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar2 & 1) != 0) goto LAB_076a9778;
          if (*(int *)(DAT_09183878 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Newtonsoft_Json_Serialization_DefaultContractResolver__CanConvertToString(plVar3);
          uVar1 = DAT_09171d68;
          if ((uVar2 & 1) != 0) {
            uVar1 = *(undefined8 *)(*param_1 + 0x250);
            UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x248);
            goto LAB_076a9788;
          }
          if (*(char *)((long)param_1 + 0x25) == '\0') {
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
            if (plVar4 == (long *)0x0) goto LAB_076a98d0;
            uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2c0));
            if ((uVar2 & 1) != 0) {
              if (*(int *)(DAT_09187480 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = Newtonsoft_Json_Serialization_JsonTypeReflector__IsSerializable(plVar3,0);
              if ((uVar2 & 1) != 0) {
                uVar1 = *(undefined8 *)(*param_1 + 0x230);
                UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x228);
                goto LAB_076a9788;
              }
            }
          }
          uVar1 = DAT_09171bb0;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar4 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
          if (plVar4 == (long *)0x0) goto LAB_076a98d0;
          uVar2 = (**(code **)(*plVar4 + 0x2b8))(plVar4,plVar3,*(undefined8 *)(*plVar4 + 0x2c0));
          if ((uVar2 & 1) != 0) {
            uVar1 = *(undefined8 *)(*param_1 + 0x240);
            UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x238);
            goto LAB_076a9788;
          }
          if (*(int *)(DAT_09183878 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = Newtonsoft_Json_Serialization_DefaultContractResolver__IsIConvertible(plVar3);
          lVar5 = *param_1;
          if ((uVar2 & 1) != 0) {
            uVar1 = *(undefined8 *)(lVar5 + 0x210);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x208);
            param_2 = plVar3;
            goto LAB_076a9788;
          }
          goto LAB_076a9710;
        }
        goto LAB_076a9728;
      }
    }
    uVar1 = *(undefined8 *)(*param_1 + 0x220);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x218);
  }
  else {
    lVar5 = *plVar4;
    if (lVar5 == DAT_09187380) {
      lVar5 = *param_1;
LAB_076a9710:
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x1a8);
      uVar1 = *(undefined8 *)(lVar5 + 0x1b0);
      goto LAB_076a9788;
    }
    if (lVar5 == DAT_091872d8) {
LAB_076a9778:
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
      uVar1 = *(undefined8 *)(*param_1 + 0x200);
      goto LAB_076a9788;
    }
    if (lVar5 != DAT_09187330) goto LAB_076a9678;
LAB_076a9728:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1e8);
    uVar1 = *(undefined8 *)(*param_1 + 0x1f0);
  }
LAB_076a9788:
                    /* WARNING: Could not recover jumptable at 0x076a979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar1);
  return;
}

