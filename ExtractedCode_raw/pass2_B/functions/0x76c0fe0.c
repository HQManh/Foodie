// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$CheckForCircularReference
// address: 0x76c0fe0
// body: available
// range: 0x76c0fe0-0x76c142b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c12a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76c1428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__CheckForCircularReference
          (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
          long param_7)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_48;
  
  if ((DAT_095226d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4f00);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091aeae0);
    FUN_03f5c2a4(&DAT_091b72b8);
    FUN_03f5c2a4(&DAT_091b72c0);
    FUN_03f5c2a4(&DAT_091f9038);
    FUN_03f5c2a4(&DAT_091f9030);
    FUN_03f5c2a4(&DAT_091f6be0);
    FUN_03f5c2a4(&DAT_0920caa0);
    FUN_03f5c2a4(&DAT_091f6460);
    DAT_095226d5 = 1;
  }
  local_48 = 0;
  if (param_3 == 0) {
    return 1;
  }
  if (param_5 != 0) {
    if (*(int *)(param_5 + 0x24) - 3U < 2) {
      return 1;
    }
    local_48 = 0;
    if (param_4 == 0) {
      uVar8 = 0;
    }
    else {
      local_48 = *(undefined8 *)(param_4 + 0x98);
      uVar8 = (uint)local_48 & 0xff;
    }
    if ((param_7 != 0) && (uVar8 == 0)) {
      local_48 = *(undefined8 *)(param_7 + 0xe4);
      uVar8 = (uint)local_48 & 0xff;
    }
    if ((param_6 != 0) && (uVar8 == 0)) {
      local_48 = *(undefined8 *)(param_6 + 0xac);
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
      lVar2 = *(long *)(param_1 + 0x48);
      if (lVar7 == 0) {
        if (lVar2 == 0) goto LAB_076c1428;
        uVar3 = FUN_057e1004(lVar2,param_3,DAT_091aeae0);
        uVar5 = DAT_0920caa0;
      }
      else {
        uVar3 = FUN_04a66b74(lVar2,param_3,lVar7,DAT_091c4f00);
        uVar5 = DAT_0920caa0;
      }
      if ((uVar3 & 1) == 0) {
        DAT_0920caa0 = uVar5;
        return 1;
      }
      DAT_0920caa0 = uVar5;
      if (param_4 != 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                          (DAT_091f6460,uVar4,*(undefined8 *)(param_4 + 0x30),0);
        uVar5 = System_String__Concat(uVar5,uVar4,0);
      }
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar6 = System_Object__GetType(param_3,0);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_091f6be0,uVar4,uVar6,0);
      uVar5 = System_String__Concat(uVar5,uVar4,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        iVar1 = FUN_05c30b5c(&local_48,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x1c),
                             DAT_091b72b8);
        if (iVar1 == 1) {
          if (*(long *)(param_1 + 0x28) == 0) {
            return 0;
          }
          iVar1 = FUN_039afee4(0,DAT_09186850);
          if (iVar1 < 4) {
            return 0;
          }
          if (param_2 != 0) {
            lVar2 = *(long *)(param_1 + 0x28);
            uVar4 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
            uVar5 = System_String__Concat(uVar5,DAT_091f9038,0);
            if (*(int *)(DAT_09187398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187398);
            }
            uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar4,uVar5,0);
            if (lVar2 != 0) {
              FUN_03ebc3ec(1,DAT_09186850,lVar2,4,uVar5,0);
              return 0;
            }
          }
        }
        else {
          if (iVar1 != 2) {
            if (iVar1 != 0) {
              return 1;
            }
            FUN_039b1d98(param_2);
            uVar4 = Newtonsoft_Json_JsonWriter__get_ContainerPath(param_2,0);
            uVar5 = Newtonsoft_Json_JsonSerializationException__Create(0,uVar4,uVar5,0,0);
            uVar4 = thunk_FUN_03fc39d4(&DAT_091d1ba8);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,uVar4);
          }
          if (*(long *)(param_1 + 0x28) == 0) {
            return 1;
          }
          iVar1 = FUN_039afee4(0,DAT_09186850);
          if (iVar1 < 4) {
            return 1;
          }
          if (param_2 != 0) {
            lVar2 = *(long *)(param_1 + 0x28);
            uVar4 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
            uVar5 = System_String__Concat(uVar5,DAT_091f9030,0);
            if (*(int *)(DAT_09187398 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09187398);
            }
            uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar4,uVar5,0);
            if (lVar2 != 0) {
              FUN_03ebc3ec(1,DAT_09186850,lVar2,4,uVar5,0);
              return 1;
            }
          }
        }
      }
    }
  }
LAB_076c1428:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

