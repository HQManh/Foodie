// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
// address: 0x76b8ed0
// body: available
// range: 0x76b8ed0-0x76b9007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b9004 to 0x89db640 FUN_089db640 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
                (long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                long *param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auStack_74 [4];
  char local_70 [4];
  char local_6c [4];
  undefined8 local_68;
  long lStack_60;
  char local_54 [4];
  long *local_48;
  
  local_48 = param_3;
  if ((DAT_095226b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09186938);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09206028);
    DAT_095226b3 = 1;
  }
  local_54[0] = '\0';
  local_68 = 0;
  lStack_60 = 0;
  local_6c[0] = '\0';
  local_70[0] = '\0';
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
                    (param_1,param_2,&local_48,param_4,param_5,param_6,param_7,local_54,&lStack_60,
                     &local_68,local_6c,local_70);
  if ((uVar3 & 1) != 0) {
    return (ulong)(local_70[0] != '\0');
  }
  if ((local_48 == (long *)0x0) ||
     (uVar3 = (**(code **)(*local_48 + 0x1a8))(local_48,*(undefined8 *)(*local_48 + 0x1b0)),
     (uVar3 & 1) == 0)) {
    cVar1 = local_54[0];
    if ((param_2 == 0) || (param_1 == 0)) goto LAB_076b9340;
    lVar4 = 0;
    if (local_54[0] != '\0') {
      lVar4 = lStack_60;
    }
    lVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                      (param_1,param_6,*(undefined8 *)(param_2 + 0x40),local_68,param_2,param_4,
                       param_5,lVar4);
  }
  else {
    if (local_6c[0] == '\0') {
      if (param_2 == 0) goto LAB_076b9340;
      if (*(char *)(param_2 + 0x81) != '\0') {
        if (*(undefined8 **)(param_2 + 0x68) != (undefined8 *)0x0) {
          uVar3 = FUN_089db640(**(undefined8 **)(param_2 + 0x68));
          return uVar3;
        }
        goto LAB_076b9340;
      }
    }
    else if (param_2 == 0) goto LAB_076b9340;
    lVar4 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                      (param_1,local_48,param_6,*(undefined8 *)(param_2 + 0x40),lStack_60);
    cVar1 = local_54[0];
  }
  if ((cVar1 != '\0') && (lVar4 == lStack_60)) {
    return 1;
  }
  if (param_4 == (long *)0x0) {
LAB_076b9100:
    param_4 = (long *)0x0;
  }
  else {
    if (*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_09187388 + 0x130)) goto LAB_076b9100;
    if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8) !=
        DAT_09187388) {
      param_4 = (long *)0x0;
    }
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue
                    (param_1,param_2,param_4,lVar4);
  if ((uVar3 & 1) == 0) {
    return (ulong)(cVar1 != '\0');
  }
  plVar11 = *(long **)(param_2 + 0x68);
  if (plVar11 == (long *)0x0) goto LAB_076b9340;
  lVar9 = *plVar11;
  uVar3 = (ulong)*(ushort *)(lVar9 + 0x12e);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
    do {
      if (*(long *)(piVar10 + -2) == DAT_09186938) {
        puVar5 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
        goto LAB_076b918c;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186938,0);
LAB_076b918c:
  (*(code *)*puVar5)(plVar11,param_7,lVar4,puVar5[1]);
  if (*(long *)(param_2 + 200) != 0) {
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar4 = *plVar11;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar3 != 0) {
        piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09186850) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_076b9204;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,0);
LAB_076b9204:
      iVar2 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      if (3 < iVar2) {
        if (param_6 == (long *)0x0) goto LAB_076b9340;
        lVar4 = *(long *)(param_1 + 0x28);
        uVar6 = (**(code **)(*param_6 + 0x278))(param_6,*(undefined8 *)(*param_6 + 0x280));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                          (DAT_09206028,uVar7,*(undefined8 *)(param_2 + 0x30),
                           *(undefined8 *)(param_2 + 0x50));
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187398);
        }
        uVar8 = thunk_FUN_03f99350(param_6,DAT_09185f18);
        uVar6 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar8,uVar6,uVar7,0);
        if (lVar4 == 0) goto LAB_076b9340;
        FUN_03ebc3ec(1,DAT_09186850,lVar4,4,uVar6,0);
      }
    }
    lVar4 = *(long *)(param_2 + 200);
    auStack_74[0] = 1;
    uVar6 = FUN_03f5c42c(DAT_09535400,auStack_74);
    if (lVar4 == 0) {
LAB_076b9340:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar4 + 0x18))
              (*(undefined8 *)(lVar4 + 0x40),param_7,uVar6,*(undefined8 *)(lVar4 + 0x28));
  }
  return 1;
}

