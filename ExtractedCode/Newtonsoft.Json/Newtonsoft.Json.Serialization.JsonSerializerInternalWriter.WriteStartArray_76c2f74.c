// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteStartArray
// address: 0x76c2f74
// body: available
// range: 0x76c2f74-0x76c31fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76c31f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteStartArray
          (long param_1,long *param_2,long param_3,long param_4,long param_5,undefined8 param_6,
          undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  
  lVar2 = param_1;
  if ((DAT_095226e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185890);
    FUN_03f5c2a4(&DAT_091b6a50);
    FUN_03f5c2a4(&DAT_091b6a60);
    lVar2 = FUN_03f5c2a4(&DAT_091f7240);
    DAT_095226e5 = 1;
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ResolveIsReference
                    (lVar2,param_4,param_5,param_6,param_7);
  if ((uVar3 & 0xff) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) goto LAB_076c31f8;
    if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 1 & 1) == 0) goto LAB_076c3010;
LAB_076c3054:
    if ((param_5 != 0) && (*(char *)(param_5 + 0x82) == '\0')) {
      uVar1 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__HasCreatorParameter
                        (uVar3,param_6,param_5);
      goto LAB_076c3014;
    }
    uVar10 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
                       (param_1,2,param_4,param_5,param_6,param_7);
    uVar10 = uVar10 & 0xffffffff;
    uVar1 = 1;
LAB_076c3084:
    if (param_2 == (long *)0x0) goto LAB_076c31f8;
    (**(code **)(*param_2 + 0x578))(param_2,*(undefined8 *)(*param_2 + 0x580));
    if ((uVar1 & 1) != 0) {
      if (param_4 == 0) goto LAB_076c31f8;
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteReferenceIdProperty
                (param_1,param_2,*(undefined8 *)(param_4 + 0x60),param_3);
    }
    if ((uVar10 & 1) != 0) {
      if (param_3 == 0) goto LAB_076c31f8;
      uVar5 = System_Object__GetType(param_3,0);
      Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
                (param_1,param_2,uVar5);
    }
    (**(code **)(*param_2 + 0x5e8))(param_2,DAT_091f7240,0,*(undefined8 *)(*param_2 + 0x5f0));
    uVar8 = 1;
  }
  else {
    if (0xff < ((uint)uVar3 & 0xffff)) goto LAB_076c3054;
LAB_076c3010:
    uVar1 = 0;
LAB_076c3014:
    uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldWriteType
                      (param_1,2,param_4,param_5,param_6,param_7);
    uVar10 = uVar3 & 0xffffffff;
    if (((uVar1 & 1) != 0) || ((uVar3 & 1) != 0)) goto LAB_076c3084;
    uVar8 = 0;
  }
  lVar2 = DAT_095353e8;
  if (param_4 != 0) {
    if (*(long *)(param_4 + 0x90) != 0) {
      return uVar8;
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar9 = *(long *)(param_4 + 0xc0);
      plVar7 = *(long **)(*(long *)(param_1 + 0x20) + 0x40);
      if (lVar9 == 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
      }
      if (plVar7 != (long *)0x0) {
        lVar2 = *plVar7;
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_09185890) {
              puVar4 = (undefined8 *)(lVar2 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_076c31a8;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar3 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185890,0);
LAB_076c31a8:
        uVar5 = (*(code *)*puVar4)(plVar7,lVar9,puVar4[1]);
        Newtonsoft_Json_Serialization_JsonContainerContract__set_ItemContract(param_4,uVar5,0);
        return uVar8;
      }
    }
  }
LAB_076c31f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

