// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
// address: 0x76b99dc
// body: available
// range: 0x76b99dc-0x76b9c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b9c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b9c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b9c94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b9c98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b9c9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
               (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  
  if ((DAT_095226b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09186440);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_0920b588);
    DAT_095226b5 = 1;
  }
  plVar9 = *(long **)(param_1 + 0x28);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186850) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076b9ab8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186850,0);
LAB_076b9ab8:
    iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
    if (3 < iVar1) {
      if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar9 = *(long **)(param_1 + 0x28);
      uVar3 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = System_Object__GetType(param_4,0);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920b588,uVar4,param_3,uVar5);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = thunk_FUN_03f99350(param_2,DAT_09185f18);
      uVar3 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar5,uVar3,uVar4,0);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_076b9bd4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186850,1);
LAB_076b9bd4:
      (*(code *)*puVar2)(plVar9,4,uVar3,0,puVar2[1]);
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar9 = (long *)Newtonsoft_Json_JsonSerializer__GetReferenceResolver(*(long *)(param_1 + 0x20),0)
  ;
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar9;
  uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == DAT_09186440) {
        puVar2 = (undefined8 *)(lVar6 + (long)(*piVar8 + 3) * 0x10 + 0x138);
        goto LAB_076b9c5c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186440,3);
LAB_076b9c5c:
  (*(code *)*puVar2)(plVar9,param_1,param_3,param_4,puVar2[1]);
  return;
}

