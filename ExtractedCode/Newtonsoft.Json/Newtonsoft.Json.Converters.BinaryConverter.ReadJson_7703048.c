// rea decompile_all
// name: Newtonsoft.Json.Converters.BinaryConverter$$ReadJson
// address: 0x7703048
// body: available
// range: 0x7703048-0x7703447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7703364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703434 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703438 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7703444 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_BinaryConverter__ReadJson(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09522950 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c10);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09172d88);
    FUN_03f5c2a4(&DAT_0918afb8);
    FUN_03f5c2a4(&DAT_0920e070);
    DAT_09522950 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_07703364;
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 0xb) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar5 = &DAT_091fdb60;
  }
  else {
    uVar4 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if ((int)uVar4 == 2) {
      lVar6 = Newtonsoft_Json_Converters_BinaryConverter__ReadByteArray(uVar4,param_2);
    }
    else {
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar1 != 9) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        local_38 = CONCAT44(local_38._4_4_,uVar2);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09187478);
        param_3 = (long *)FUN_03f5c42c(uVar9,&local_38);
        uVar9 = thunk_FUN_03fc39d4(&DAT_09211ec0);
        goto LAB_07703404;
      }
      plVar7 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (plVar7 == (long *)0x0) goto LAB_07703364;
      uVar4 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b88);
      }
      lVar6 = System_Convert__FromBase64String(uVar4,0);
    }
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
    plVar7 = param_3;
    if ((uVar3 & 1) != 0) {
      plVar7 = (long *)System_Nullable__GetUnderlyingType(param_3,0);
    }
    if (plVar7 == (long *)0x0) {
LAB_07703364:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar7 + 0x2f8))(plVar7,*(undefined8 *)(*plVar7 + 0x300));
    uVar3 = System_String__op_Equality(uVar4,DAT_0920e070,0);
    uVar4 = DAT_09172d88;
    if ((uVar3 & 1) != 0) {
      Newtonsoft_Json_Converters_BinaryConverter__EnsureReflectionObject(plVar7);
      if (**(long **)(DAT_09181c10 + 0xb8) != 0) {
        lVar10 = *(long *)(**(long **)(DAT_09181c10 + 0xb8) + 0x10);
        plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar7 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar8 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0)) {
            uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar4,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7[4] = lVar6;
          thunk_FUN_03f5d7b8(plVar7 + 4,lVar6);
          if (lVar10 != 0) {
                    /* WARNING: Could not recover jumptable at 0x077032d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (**(code **)(lVar10 + 0x18))
                              (*(undefined8 *)(lVar10 + 0x40),plVar7,*(undefined8 *)(lVar10 + 0x28))
            ;
            return uVar4;
          }
        }
      }
      goto LAB_07703364;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    uVar3 = System_Type__op_Equality(plVar7,uVar4,0);
    if ((uVar3 & 1) != 0) {
      local_38 = 0;
      System_Data_SqlTypes_SqlBinary___ctor(&local_38,lVar6,0);
      local_40 = local_38;
      uVar4 = FUN_03f5c42c(DAT_0918afb8,&local_40);
      return uVar4;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar5 = &DAT_09211df0;
  }
  uVar9 = thunk_FUN_03fc39d4(puVar5);
LAB_07703404:
  uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar4,param_3,0);
  uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar4,0);
  uVar9 = thunk_FUN_03fc39d4(&DAT_091c38c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar9);
}

