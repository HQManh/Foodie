// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CalculatePropertyDetails
// address: 0x76b9344
// body: available
// range: 0x76b9344-0x76b98d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b98d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CalculatePropertyDetails
          (long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,long *param_6,
          undefined8 param_7,byte *param_8,long *param_9,long *param_10,undefined1 *param_11,
          undefined1 *param_12)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((DAT_095226b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09186938);
    FUN_03f5c2a4(&DAT_09187388);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_091b7188);
    FUN_03f5c2a4(&DAT_091b6ce8);
    FUN_03f5c2a4(&DAT_092119a0);
    DAT_095226b4 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  *param_9 = 0;
  thunk_FUN_03f5d7b8(param_9,0);
  *param_8 = 0;
  *param_10 = 0;
  thunk_FUN_03f5d7b8(param_10,0);
  *param_11 = 0;
  *param_12 = 0;
  if (param_2 == 0) goto LAB_076b98d0;
  if (*(char *)(param_2 + 0x80) != '\0') {
    return 1;
  }
  if (param_6 == (long *)0x0) goto LAB_076b98d0;
  iVar2 = (**(code **)(*param_6 + 0x238))(param_6,*(undefined8 *)(*param_6 + 0x240));
  plVar13 = (long *)(param_2 + 0x48);
  if (*plVar13 == 0) {
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                      (param_1,*(undefined8 *)(param_2 + 0x40));
    *(undefined8 *)(param_2 + 0x48) = uVar5;
    thunk_FUN_03f5d7b8(plVar13,uVar5);
  }
  local_68 = *(undefined8 *)(param_2 + 0xa0);
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b98d0;
  iVar3 = FUN_05c30b5c(&local_68,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),DAT_091b7188);
  if ((iVar3 != 2) &&
     ((((iVar2 - 1U < 2 || (*param_3 != 0)) && (*(char *)(param_2 + 0x81) != '\0')) &&
      ((*plVar13 == 0 || (*(int *)(*plVar13 + 0x24) != 8)))))) {
    plVar12 = *(long **)(param_2 + 0x68);
    if (plVar12 == (long *)0x0) goto LAB_076b98d0;
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_09186938) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_076b9558;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar12,DAT_09186938,1);
LAB_076b9558:
    lVar9 = (*(code *)*puVar6)(plVar12,param_7,puVar6[1]);
    *param_9 = lVar9;
    thunk_FUN_03f5d7b8(param_9,lVar9);
    *param_11 = 1;
    if (*param_9 != 0) {
      uVar5 = System_Object__GetType(*param_9,0);
      lVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(param_1,uVar5)
      ;
      *param_10 = lVar9;
      thunk_FUN_03f5d7b8(param_10,lVar9);
      lVar9 = *param_10;
      if (lVar9 == 0) goto LAB_076b98d0;
      if (*(char *)(lVar9 + 0x28) == '\0') {
        if (*(long *)(lVar9 + 0x60) == 0) goto LAB_076b98d0;
        bVar1 = System_Type__get_IsValueType(*(long *)(lVar9 + 0x60),0);
        bVar1 = (bVar1 ^ 0xff) & 1;
      }
      else {
        bVar1 = 0;
      }
      *param_8 = bVar1;
    }
  }
  if ((*(char *)(param_2 + 0x82) == '\0') && (*param_8 == 0)) {
    plVar13 = *(long **)(param_1 + 0x28);
    if (plVar13 != (long *)0x0) {
      lVar9 = *plVar13;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_09186850) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_076b97f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_09186850,0);
LAB_076b97f0:
      iVar2 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if (2 < iVar2) {
        lVar9 = *(long *)(param_1 + 0x28);
        uVar5 = (**(code **)(*param_6 + 0x278))(param_6,*(undefined8 *)(*param_6 + 0x280));
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar7 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                          (DAT_092119a0,uVar7,*(undefined8 *)(param_2 + 0x30),
                           *(undefined8 *)(param_2 + 0x50));
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187398);
        }
        uVar8 = thunk_FUN_03f99350(param_6,DAT_09185f18);
        uVar5 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar8,uVar5,uVar7,0);
        if (lVar9 != 0) {
          FUN_03ebc3ec(1,DAT_09186850,lVar9,3,uVar5,0);
          return 1;
        }
        goto LAB_076b98d0;
      }
    }
    return 1;
  }
  if (iVar2 == 0xb) {
    if (param_4 == (long *)0x0) {
LAB_076b9624:
      plVar12 = (long *)0x0;
    }
    else {
      if (*(byte *)(*param_4 + 0x130) < *(byte *)(DAT_09187388 + 0x130)) goto LAB_076b9624;
      plVar12 = param_4;
      if (*(long *)(*(long *)(*param_4 + 200) + (ulong)*(byte *)(DAT_09187388 + 0x130) * 8 + -8) !=
          DAT_09187388) {
        plVar12 = (long *)0x0;
      }
    }
    iVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ResolvedNullValueHandling
                      (param_1,plVar12,param_2);
    if (iVar3 == 1) goto LAB_076b96a8;
  }
  local_70 = *(undefined8 *)(param_2 + 0x90);
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar10 = FUN_05c30b5c(&local_70,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),DAT_091b6ce8);
    if ((uVar10 & 1) != 0) {
      local_70 = *(undefined8 *)(param_2 + 0x90);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_076b98d0;
      uVar4 = FUN_05c30b5c(&local_70,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x2c),DAT_091b6ce8)
      ;
      if (((uVar4 >> 1 & 1) == 0) &&
         (uVar10 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsPrimitiveToken(iVar2,0),
         (uVar10 & 1) != 0)) {
        uVar5 = (**(code **)(*param_6 + 0x248))(param_6,*(undefined8 *)(*param_6 + 0x250));
        uVar7 = Newtonsoft_Json_Serialization_JsonProperty__GetResolvedDefaultValue(param_2);
        uVar10 = Newtonsoft_Json_Utilities_MiscellaneousUtils__ValueEquals(uVar5,uVar7,0);
        if ((uVar10 & 1) != 0) {
LAB_076b96a8:
          *param_12 = 1;
          return 1;
        }
      }
    }
    if (*param_9 == 0) {
      *param_10 = *plVar13;
      param_3 = param_10;
    }
    else {
      uVar5 = System_Object__GetType(*param_9,0);
      lVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContract(param_1,uVar5)
      ;
      *param_10 = lVar9;
      thunk_FUN_03f5d7b8(param_10,lVar9);
      if (*param_10 == *plVar13) {
        return 0;
      }
      lVar9 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                        (param_1,*param_10,*(undefined8 *)(param_2 + 0x78),param_4,param_5);
      *param_3 = lVar9;
    }
    thunk_FUN_03f5d7b8(param_3);
    return 0;
  }
LAB_076b98d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

