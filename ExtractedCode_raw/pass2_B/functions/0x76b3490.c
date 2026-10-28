// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$DeserializeConvertable
// address: 0x76b3490
// body: available
// range: 0x76b3490-0x76b38a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b38a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
          (long param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

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
  
  if ((DAT_095226c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09202a78);
    FUN_03f5c2a4(&DAT_0920d968);
    DAT_095226c1 = 1;
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
          goto LAB_076b3570;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,0);
LAB_076b3570:
    iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
    if (2 < iVar1) {
      if (param_3 == (long *)0x0) goto LAB_076b38a4;
      plVar10 = *(long **)(param_1 + 0x28);
      uVar3 = (**(code **)(*param_3 + 0x278))(param_3,*(undefined8 *)(*param_3 + 0x280));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (param_2 == (long *)0x0) goto LAB_076b38a4;
      uVar5 = System_Object__GetType(param_2,0);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920d968,uVar4,param_4,uVar5);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187398);
      }
      uVar5 = thunk_FUN_03f99350(param_3,DAT_09185f18);
      uVar3 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar5,uVar3,uVar4,0);
      if (plVar10 == (long *)0x0) goto LAB_076b38a4;
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_076b3698;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,1);
LAB_076b3698:
      (*(code *)*puVar2)(plVar10,3,uVar3,0,puVar2[1]);
    }
  }
  uVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(param_1)
  ;
  if (param_2 != (long *)0x0) {
    uVar3 = (**(code **)(*param_2 + 0x188))
                      (param_2,param_3,param_4,param_5,uVar3,*(undefined8 *)(*param_2 + 400));
    plVar10 = *(long **)(param_1 + 0x28);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076b3740;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,0);
LAB_076b3740:
      iVar1 = (*(code *)*puVar2)(plVar10,puVar2[1]);
      if (2 < iVar1) {
        if (param_3 != (long *)0x0) {
          plVar10 = *(long **)(param_1 + 0x28);
          uVar4 = (**(code **)(*param_3 + 0x278))(param_3,*(undefined8 *)(*param_3 + 0x280));
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar6 = System_Object__GetType(param_2,0);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                            (DAT_09202a78,uVar5,param_4,uVar6);
          if (*(int *)(DAT_09187398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187398);
          }
          uVar6 = thunk_FUN_03f99350(param_3,DAT_09185f18);
          uVar4 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar6,uVar4,uVar5,0);
          if (plVar10 != (long *)0x0) {
            lVar7 = *plVar10;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09186850) {
                  puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_076b386c;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar2 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,1);
LAB_076b386c:
            (*(code *)*puVar2)(plVar10,3,uVar4,0,puVar2[1]);
            return uVar3;
          }
        }
        goto LAB_076b38a4;
      }
    }
    return uVar3;
  }
LAB_076b38a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

