// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolveTypeName
// address: 0x76b7db8
// body: available
// range: 0x76b7db8-0x76b82ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b8210 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76b8214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b8218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b821c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b827c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolveTypeName
               (long param_1,long *param_2,long *param_3,undefined8 *param_4,long param_5,
               long param_6,long param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  if ((DAT_095226ae & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09171bb0);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_091865c0);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091b7598);
    FUN_03f5c2a4(&DAT_091b75a0);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_0920be68);
    DAT_095226ae = 1;
  }
  if ((param_5 == 0) || ((*(ulong *)(param_5 + 0xa8) & 0xff) == 0)) {
    if (((param_6 == 0) || (uVar8 = *(ulong *)(param_6 + 0xb4), (uVar8 & 0xff) == 0)) &&
       ((param_7 == 0 || (uVar8 = *(ulong *)(param_7 + 0xdc), (uVar8 & 0xff) == 0)))) {
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b8214;
      iVar1 = *(int *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    else {
      iVar1 = (int)(uVar8 >> 0x20);
    }
  }
  else {
    iVar1 = (int)(*(ulong *)(param_5 + 0xa8) >> 0x20);
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  auVar12 = Newtonsoft_Json_Utilities_ReflectionUtils__SplitFullyQualifiedTypeName(param_8,0);
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar11 = *(long **)(*(long *)(param_1 + 0x20) + 0x58);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar11;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_091865c0) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_076b7f7c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091865c0,0);
LAB_076b7f7c:
  plVar11 = (long *)(*(code *)*puVar2)(plVar11,auVar12._0_8_,auVar12._8_8_,puVar2[1]);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_Type__op_Equality(plVar11,0,0);
  if ((uVar8 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_092112d0);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar4,uVar3,param_8);
LAB_076b8254:
    uVar3 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar3,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d1b88);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09186850) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_076b801c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,0);
LAB_076b801c:
    iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (3 < iVar1) {
      if (param_2 == (long *)0x0) goto LAB_076b8214;
      plVar10 = *(long **)(param_1 + 0x28);
      uVar3 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920be68,uVar4,param_8,plVar11);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187398);
      }
      uVar5 = thunk_FUN_03f99350(param_2,DAT_09185f18);
      uVar3 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar5,uVar3,uVar4,0);
      if (plVar10 == (long *)0x0) goto LAB_076b8214;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_076b8130;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,1);
LAB_076b8130:
      (*(code *)*puVar2)(plVar10,4,uVar3,0,puVar2[1]);
    }
  }
  lVar7 = *param_3;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_Type__op_Inequality(lVar7,0,0);
  uVar3 = DAT_09171bb0;
  if ((uVar8 & 1) != 0) {
    lVar7 = *param_3;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar8 = System_Type__op_Inequality(lVar7,uVar3,0);
    if ((uVar8 & 1) != 0) {
      plVar10 = (long *)*param_3;
      if (plVar10 == (long *)0x0) {
LAB_076b8214:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = (**(code **)(*plVar10 + 0x2b8))(plVar10,plVar11,*(undefined8 *)(*plVar10 + 0x2c0));
      if ((uVar8 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(plVar11);
        uVar4 = (**(code **)(*plVar11 + 0x2e8))(plVar11,*(undefined8 *)(*plVar11 + 0x2f0));
        param_3 = (long *)*param_3;
        FUN_039b1d98(param_3);
        uVar5 = (**(code **)(*param_3 + 0x2e8))(param_3,*(undefined8 *)(*param_3 + 0x2f0));
        uVar6 = thunk_FUN_03fc39d4(&DAT_092112c8);
        uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar4,uVar5);
        goto LAB_076b8254;
      }
    }
  }
  *param_3 = (long)plVar11;
  thunk_FUN_03f5d7b8(param_3,plVar11);
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(param_1,plVar11);
  *param_4 = uVar3;
  thunk_FUN_03f5d7b8(param_4);
  return;
}

