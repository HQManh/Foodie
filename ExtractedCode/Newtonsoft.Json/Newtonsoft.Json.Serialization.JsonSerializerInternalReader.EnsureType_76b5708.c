// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$EnsureType
// address: 0x76b5708
// body: available
// range: 0x76b5708-0x76b5b4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b5b3c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b5b40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b5b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b5b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Newtonsoft_Json_Serialization_JsonSerializerInternalReader__EnsureType
                 (undefined8 param_1,long param_2,long *param_3,undefined8 param_4,long *param_5,
                 undefined8 param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_70 [2];
  undefined4 local_60;
  undefined8 local_58;
  
  if ((DAT_095226b2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09171448);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091873a0);
    FUN_03f5c2a4(&DAT_09189548);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_095226b2 = 1;
  }
  local_58 = 0;
  local_60 = 0;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Type__op_Equality(param_6,0,0);
  if ((uVar2 & 1) != 0) {
    return param_3;
  }
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__GetObjectType(param_3,0);
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__op_Inequality(uVar3,param_6,0);
  uVar3 = DAT_09171448;
  if ((uVar2 & 1) == 0) {
    return param_3;
  }
  if (param_3 == (long *)0x0) {
    if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((char)param_5[2] != '\0') {
      return (long *)0x0;
    }
  }
  else if (param_5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)((long)param_5 + 0x11) == '\0') {
    lVar6 = param_5[3];
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar4 = (long *)Newtonsoft_Json_Utilities_ConvertUtils__ConvertOrCast(param_3,param_4,lVar6,0);
    return plVar4;
  }
  if ((*(byte *)(*param_5 + 0x130) < *(byte *)(DAT_091873a0 + 0x130)) ||
     (*(long *)(*(long *)(*param_5 + 200) + (ulong)*(byte *)(DAT_091873a0 + 0x130) * 8 + -8) !=
      DAT_091873a0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_5);
  }
  if (*(char *)((long)param_5 + 0x12) == '\0') {
    lVar6 = param_5[3];
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
    uVar2 = System_Type__op_Equality(lVar6,uVar3,0);
    if ((uVar2 & 1) == 0) goto LAB_076b5a4c;
    if (param_3 == (long *)0x0) goto LAB_076b5a68;
    if (*param_3 == DAT_09535468) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined4 *)(param_2 + 0x48);
      uVar7 = *(undefined8 *)(param_2 + 0x60);
      uVar3 = Newtonsoft_Json_JsonReader__get_Culture(param_2,0);
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTime
                        (param_3,uVar1,uVar7,uVar3,&local_58,0);
      uVar3 = local_58;
      if ((uVar2 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_2 + 0x48);
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_70[0] = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(uVar3,uVar1,0);
        plVar4 = (long *)FUN_03f5c42c(DAT_09183548,local_70);
        return plVar4;
      }
    }
  }
  else {
    if ((param_3 != (long *)0x0) && (*param_3 == DAT_09535468)) {
      lVar6 = param_5[3];
      if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)Newtonsoft_Json_Utilities_EnumUtils__ParseEnum(lVar6,0,param_3,0,0);
      return plVar4;
    }
    local_70[0] = CONCAT44(local_70[0]._4_4_,*(undefined4 *)((long)param_5 + 0x8c));
    uVar3 = FUN_03f5c42c(DAT_09189548,local_70);
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_ConvertUtils__IsInteger(uVar3,0);
    if ((uVar2 & 1) != 0) {
      lVar6 = param_5[3];
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)System_Enum__ToObject(lVar6,param_3,0);
      return plVar4;
    }
LAB_076b5a4c:
    if (param_3 == (long *)0x0) goto LAB_076b5a68;
  }
  if (*param_3 == DAT_09181b78) {
    puVar5 = (undefined8 *)thunk_FUN_03f99594(param_3);
    uVar3 = *puVar5;
    uVar7 = puVar5[1];
    lVar6 = param_5[3];
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b90);
    }
    plVar4 = (long *)Newtonsoft_Json_Utilities_ConvertUtils__FromBigInteger(uVar3,uVar7,lVar6,0);
    return plVar4;
  }
LAB_076b5a68:
  lVar6 = param_5[3];
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar4 = (long *)System_Convert__ChangeType(param_3,lVar6,param_4,0);
  return plVar4;
}

