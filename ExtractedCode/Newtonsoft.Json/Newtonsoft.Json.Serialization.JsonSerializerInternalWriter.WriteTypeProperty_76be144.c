// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$WriteTypeProperty
// address: 0x76be144
// body: available
// range: 0x76be144-0x76be3c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76be3c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__WriteTypeProperty
               (long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  
  if ((DAT_095226e0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_091f7220);
    FUN_03f5c2a4(&DAT_09213498);
    DAT_095226e0 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 == 0) goto LAB_076be3c0;
  uVar1 = *(undefined4 *)(lVar6 + 0x14);
  uVar9 = *(undefined8 *)(lVar6 + 0x58);
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar9 = Newtonsoft_Json_Utilities_ReflectionUtils__GetTypeName(param_3,uVar1,uVar9,0);
  plVar10 = *(long **)(param_1 + 0x28);
  if (plVar10 != (long *)0x0) {
    lVar6 = *plVar10;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186850) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076be258;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,0);
LAB_076be258:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (3 < iVar2) {
      if (param_2 == (long *)0x0) goto LAB_076be3c0;
      plVar10 = *(long **)(param_1 + 0x28);
      uVar4 = Newtonsoft_Json_JsonWriter__get_Path(param_2,0);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182ff8);
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_09213498,uVar5,uVar9,param_3,0);
      if (*(int *)(DAT_09187398 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09187398);
      }
      uVar4 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar4,uVar5,0);
      if (plVar10 == (long *)0x0) goto LAB_076be3c0;
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186850) {
            puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_076be358;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_09186850,1);
LAB_076be358:
      (*(code *)*puVar3)(plVar10,4,uVar4,0,puVar3[1]);
    }
  }
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x5e8))(param_2,DAT_091f7220,0,*(undefined8 *)(*param_2 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x076be3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x698))(param_2,uVar9,*(undefined8 *)(*param_2 + 0x6a0));
    return;
  }
LAB_076be3c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

