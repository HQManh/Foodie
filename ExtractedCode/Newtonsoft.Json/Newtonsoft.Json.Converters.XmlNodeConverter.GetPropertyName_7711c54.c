// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$GetPropertyName
// address: 0x7711c54
// body: available
// range: 0x7711c54-0x77120d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7711f5c to 0x77118c8 Newtonsoft.Json.Converters.XmlNodeConverter$$ResolveFullName (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771202c to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7712030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77120d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_XmlNodeConverter__GetPropertyName
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_095229c6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_0921ce18);
    FUN_03f5c2a4(&DAT_091f6cf8);
    FUN_03f5c2a4(&DAT_091f7070);
    FUN_03f5c2a4(&DAT_091fae08);
    FUN_03f5c2a4(&DAT_091fadd0);
    FUN_03f5c2a4(&DAT_091f7068);
    FUN_03f5c2a4(&DAT_091f70a0);
    FUN_03f5c2a4(&DAT_091f7020);
    FUN_03f5c2a4(&DAT_091fae10);
    FUN_03f5c2a4(&DAT_091f7028);
    FUN_03f5c2a4(&DAT_091f7078);
    DAT_095229c6 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *param_2;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_091869f8) {
        puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_07711d64;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,0);
LAB_07711d64:
  uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  iVar1 = (int)uVar4;
  if (7 < iVar1) {
    if (iVar1 < 0xd) {
      if (iVar1 != 8) {
        if (iVar1 == 10) {
          uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__ResolveFullName
                            (uVar4,param_2,param_3);
          puVar3 = &DAT_091f6cf8;
          goto LAB_07712010;
        }
        goto LAB_07712034;
      }
      puVar3 = &DAT_091f7028;
    }
    else if (iVar1 == 0xd) {
      puVar3 = &DAT_091f7078;
    }
    else if (iVar1 == 0xe) {
      puVar3 = &DAT_091f7068;
    }
    else {
      if (iVar1 != 0x11) goto LAB_07712034;
      puVar3 = &DAT_091fae08;
    }
LAB_07711ecc:
    return *puVar3;
  }
  if (2 < iVar1) {
    if (iVar1 == 3) {
      puVar3 = &DAT_091f7070;
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 == 7) {
          uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__ResolveFullName
                            (uVar4,param_2,param_3);
          puVar3 = &DAT_091fadd0;
          goto LAB_07712010;
        }
        goto LAB_07712034;
      }
      puVar3 = &DAT_091f7020;
    }
    goto LAB_07711ecc;
  }
  if (iVar1 == 1) {
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_07711ef0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,8);
LAB_07711ef0:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    uVar7 = System_String__op_Equality(uVar4,DAT_0921ce18,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__ResolveFullName(uVar7,param_2,param_3);
      return uVar4;
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869f8) goto LAB_07711fec;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  else {
    if (iVar1 != 2) {
LAB_07712034:
      FUN_039b1d98(param_2);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091869f8);
      uVar2 = FUN_039afee4(0,uVar4,param_2);
      local_38 = thunk_FUN_03fc39d4(&DAT_0918d638);
      uStack_30 = 0xffffffffffffffff;
      local_28 = uVar2;
      uVar4 = System_Enum__ToString(&local_38,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_09211c20);
      uVar4 = System_String__Concat(uVar5,uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09187420);
      uVar5 = thunk_FUN_03f9944c();
      Newtonsoft_Json_JsonSerializationException___ctor(uVar5,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091e0078);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar4);
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 8) * 0x10 + 0x138);
          goto LAB_07711f70;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,8);
LAB_07711f70:
    uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
    uVar7 = System_String__op_Equality(uVar4,DAT_0921ce18,0);
    if ((uVar7 & 1) == 0) {
      uVar4 = Newtonsoft_Json_Converters_XmlNodeConverter__ResolveFullName(uVar7,param_2,param_3);
      puVar3 = &DAT_091fae10;
      goto LAB_07712010;
    }
    lVar6 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091869f8) goto LAB_07711fec;
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,1);
LAB_07711ffc:
  uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
  puVar3 = &DAT_091f70a0;
LAB_07712010:
  uVar4 = System_String__Concat(*puVar3,uVar4,0);
  return uVar4;
LAB_07711fec:
  puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
  goto LAB_07711ffc;
}

