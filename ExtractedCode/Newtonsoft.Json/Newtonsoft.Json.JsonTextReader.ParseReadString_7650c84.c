// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseReadString
// address: 0x7650c84
// body: available
// range: 0x7650c84-0x7651023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ParseReadString(long param_1,undefined2 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_095223aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4ec0);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_095223aa = 1;
  }
  uVar6 = 8;
  local_50 = 0;
  uStack_48 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_68 = 0;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar6 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar6 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  if (*(char *)(param_1 + 0x38) != '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  lVar2 = DAT_091c4ec0;
  if (param_3 < 4) {
    if (param_3 == 1) {
      return;
    }
    if (param_3 != 3) goto LAB_07650de8;
    iVar8 = *(int *)(param_1 + 0xbc);
    if (iVar8 == 0x24) {
      uVar5 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b90);
      }
      uVar4 = Newtonsoft_Json_Utilities_ConvertUtils__TryConvertGuid(uVar5,&local_50,0);
      if ((uVar4 & 1) == 0) {
        iVar8 = *(int *)(param_1 + 0xbc);
        goto LAB_07650f9c;
      }
      uVar5 = System_Guid__ToByteArray(&local_50,0);
    }
    else if (iVar8 == 0) {
      lVar7 = *(long *)(DAT_091c4ec0 + 0x38);
      if (lVar7 == 0) {
        FUN_03f95ac8(DAT_091c4ec0);
        lVar7 = *(long *)(lVar2 + 0x38);
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_03f95a6c();
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar5 = **(undefined8 **)(lVar2 + 0xb8);
    }
    else {
LAB_07650f9c:
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      uVar6 = *(undefined4 *)(param_1 + 0xb8);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Convert__FromBase64CharArray(uVar5,uVar6,iVar8,0);
    }
    uVar6 = 0x11;
    *(undefined8 *)(param_1 + 0x18) = uVar5;
LAB_07650fe0:
    *(undefined4 *)(param_1 + 0x10) = uVar6;
    thunk_FUN_03f5d7b8(param_1 + 0x18,uVar5);
    uVar6 = 8;
    if ((*(int *)(param_1 + 0x28) == 0) && (uVar6 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
      uVar6 = 8;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar6;
  }
  else {
    if (param_3 != 4) {
      if (param_3 == 5) {
        return;
      }
      if (param_3 == 9) {
        return;
      }
LAB_07650de8:
      if (*(int *)(param_1 + 0x58) != 0) {
        if ((param_3 == 6) || ((param_3 != 7 && (*(int *)(param_1 + 0x58) == 1)))) {
          uVar5 = *(undefined8 *)(param_1 + 0xb0);
          uVar1 = *(undefined8 *)(param_1 + 0xb8);
          uVar6 = *(undefined4 *)(param_1 + 0x48);
          uVar9 = *(undefined8 *)(param_1 + 0x60);
          uVar3 = Newtonsoft_Json_JsonReader__get_Culture(param_1);
          if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835c0);
          }
          uVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTime
                            (uVar5,uVar1,uVar6,uVar9,uVar3,&local_58,0);
          if ((uVar4 & 1) != 0) {
            local_80 = local_58;
            uVar5 = DAT_09183548;
            goto LAB_07650f2c;
          }
        }
        else {
          uVar5 = *(undefined8 *)(param_1 + 0xb0);
          uVar1 = *(undefined8 *)(param_1 + 0xb8);
          uVar9 = *(undefined8 *)(param_1 + 0x60);
          uVar3 = Newtonsoft_Json_JsonReader__get_Culture(param_1);
          if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835c0);
          }
          uVar4 = Newtonsoft_Json_Utilities_DateTimeUtils__TryParseDateTimeOffset
                            (uVar5,uVar1,uVar9,uVar3,&local_68,0);
          if ((uVar4 & 1) != 0) {
            uStack_78 = uStack_60;
            local_80 = local_68;
            uVar5 = DAT_09183590;
LAB_07650f2c:
            uVar5 = FUN_03f5c42c(uVar5,&local_80);
            uVar6 = 0x10;
            *(undefined8 *)(param_1 + 0x18) = uVar5;
            goto LAB_07650fe0;
          }
        }
      }
    }
    uVar5 = Newtonsoft_Json_Utilities_StringReference__ToString(param_1 + 0xb0,0);
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = 9;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar5);
    uVar6 = 8;
    if ((*(int *)(param_1 + 0x28) == 0) && (uVar6 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
      uVar6 = 8;
    }
    *(undefined4 *)(param_1 + 0x24) = uVar6;
    *(undefined2 *)(param_1 + 0x20) = param_2;
  }
  return;
}

