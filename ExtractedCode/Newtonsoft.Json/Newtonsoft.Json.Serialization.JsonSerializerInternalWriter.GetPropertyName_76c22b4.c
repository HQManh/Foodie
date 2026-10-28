// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetPropertyName
// address: 0x76c22b4
// body: available
// range: 0x76c22b4-0x76c27bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c27a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c27b0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c27b8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetPropertyName
          (undefined8 param_1,long param_2,long *param_3,long *param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  if ((DAT_095226eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_091873a0);
    FUN_03f5c2a4(&DAT_0918b438);
    FUN_03f5c2a4(&DAT_0920b300);
    DAT_095226eb = 1;
  }
  local_38 = 0;
  local_3c = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_4 == (long *)0x0) goto LAB_076c27a8;
  if (*(int *)((long)param_4 + 0x24) != 3) {
    if (param_3 != (long *)0x0) {
      uVar4 = System_Object__GetType(param_3,0);
      uVar8 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__TryConvertToString
                        (param_3,uVar4,&local_50);
      *param_5 = 1;
      if ((uVar8 & 1) != 0) {
        return local_50;
      }
      uVar4 = (**(code **)(*param_3 + 0x168))(param_3,*(undefined8 *)(*param_3 + 0x170));
      return uVar4;
    }
    goto LAB_076c27a8;
  }
  if ((*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_091873a0 + 0x130)) ||
     (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_091873a0 + 0x130) * 8 + -8) !=
      DAT_091873a0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_4);
  }
  uVar1 = *(uint *)((long)param_4 + 0x8c);
  if (uVar1 < 0x1e) {
    uVar3 = 1 << (ulong)(uVar1 & 0x1f);
    if ((uVar3 & 0x3000000) != 0) {
      if (param_3 == (long *)0x0) goto LAB_076c27a8;
      if (*(long *)(*param_3 + 0x40) == *(long *)(DAT_09535458 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_3);
        local_38 = *puVar6;
        *param_5 = 0;
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = System_Double__ToString(&local_38,DAT_0920b300,uVar4,0);
        return uVar4;
      }
      goto LAB_076c27b4;
    }
    if ((uVar3 & 0xc000000) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 0x30000000U) == 0) goto LAB_076c24f4;
      *param_5 = 0;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b438);
      System_IO_StringWriter___ctor(plVar5,uVar4,0);
      if (param_2 == 0) goto LAB_076c27a8;
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      uVar10 = *(undefined8 *)(param_2 + 0x50);
      uVar4 = Newtonsoft_Json_JsonWriter__get_Culture(param_2,0);
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835c0);
      }
      if (param_3 == (long *)0x0) goto LAB_076c27a8;
      if (*(long *)(*param_3 + 0x40) != *(long *)(DAT_09183590 + 0x40)) goto LAB_076c27b4;
      puVar6 = (undefined8 *)thunk_FUN_03f99594(param_3);
      Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffsetString
                (plVar5,*puVar6,puVar6[1],uVar2,uVar10,uVar4,0);
    }
    else {
      if (param_2 == 0) goto LAB_076c27a8;
      uVar2 = *(undefined4 *)(param_2 + 0x40);
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (param_3 == (long *)0x0) goto LAB_076c27a8;
      if (*(long *)(*param_3 + 0x40) != *(long *)(DAT_09183548 + 0x40)) goto LAB_076c27b4;
      puVar6 = (undefined8 *)thunk_FUN_03f99594(param_3);
      uVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(*puVar6,uVar2,0);
      *param_5 = 0;
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar10 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      plVar5 = (long *)thunk_FUN_03f9944c(DAT_0918b438);
      System_IO_StringWriter___ctor(plVar5,uVar10,0);
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      uVar11 = *(undefined8 *)(param_2 + 0x50);
      uVar10 = Newtonsoft_Json_JsonWriter__get_Culture(param_2,0);
      Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeString
                (plVar5,uVar4,uVar2,uVar11,uVar10,0);
    }
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x076c2678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return uVar4;
    }
LAB_076c27a8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_076c24f4:
  if (uVar1 - 0x16 < 2) {
    if (param_3 == (long *)0x0) goto LAB_076c27a8;
    if (*(long *)(*param_3 + 0x40) != *(long *)(DAT_09535450 + 0x40)) {
LAB_076c27b4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(param_3);
    }
    puVar7 = (undefined4 *)thunk_FUN_03f99594(param_3);
    local_3c = *puVar7;
    *param_5 = 0;
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar4 = System_Single__ToString(&local_3c,DAT_0920b300,uVar4,0);
  }
  else {
    *param_5 = 1;
    if (*(char *)((long)param_4 + 0x12) != '\0') {
      lVar9 = param_4[3];
      if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = Newtonsoft_Json_Utilities_EnumUtils__TryToString(lVar9,param_3,0,&local_48,0);
      if ((uVar8 & 1) != 0) {
        return local_48;
      }
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b88);
    }
    uVar4 = System_Convert__ToString(param_3,uVar4,0);
  }
  return uVar4;
}

