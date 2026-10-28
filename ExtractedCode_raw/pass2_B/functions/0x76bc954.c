// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldDeserialize
// address: 0x76bc954
// body: available
// range: 0x76bc954-0x76bcbab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76bcba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldDeserialize
               (long param_1,long *param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  byte local_44 [4];
  
  if ((DAT_095226c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09186850);
    FUN_03f5c2a4(&DAT_09187398);
    FUN_03f5c2a4(&DAT_0920d018);
    DAT_095226c5 = 1;
  }
  if (param_3 == 0) goto LAB_076bcba8;
  lVar7 = *(long *)(param_3 + 0xb8);
  if (lVar7 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = (**(code **)(lVar7 + 0x18))
                      (*(undefined8 *)(lVar7 + 0x40),param_4,*(undefined8 *)(lVar7 + 0x28));
    plVar11 = *(long **)(param_1 + 0x28);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186850) {
            puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_076bca44;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,0);
LAB_076bca44:
      iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
      if (3 < iVar2) {
        if (param_2 != (long *)0x0) {
          plVar11 = *(long **)(param_1 + 0x28);
          uVar4 = (**(code **)(*param_2 + 0x278))(param_2,*(undefined8 *)(*param_2 + 0x280));
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09182ff8);
          }
          uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar12 = *(undefined8 *)(param_3 + 0x30);
          uVar10 = *(undefined8 *)(param_3 + 0x50);
          local_44[0] = bVar1 & 1;
          uVar6 = FUN_03f5c42c(DAT_09535400,local_44);
          uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                            (DAT_0920d018,uVar5,uVar12,uVar10,uVar6);
          if (*(int *)(DAT_09187398 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09187398);
          }
          uVar4 = Newtonsoft_Json_JsonPosition__FormatMessage(0,uVar4,uVar5,0);
          if (plVar11 != (long *)0x0) {
            lVar7 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar8 != 0) {
              piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == DAT_09186850) {
                  puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
                  goto LAB_076bcb74;
                }
                uVar8 = uVar8 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar8 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186850,1);
LAB_076bcb74:
            (*(code *)*puVar3)(plVar11,4,uVar4,0,puVar3[1]);
            goto LAB_076bcb8c;
          }
        }
LAB_076bcba8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
LAB_076bcb8c:
  return bVar1 & 1;
}

