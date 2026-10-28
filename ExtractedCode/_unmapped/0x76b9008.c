// rea decompile_all
// name: FUN_076b9008
// address: 0x76b9008
// body: available
// range: 0x76b9008-0x76b9043 inclusive
// range: 0x76b907c-0x76b9343 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b9340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_076b9008(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *in_x10;
  int *piVar8;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long *plVar9;
  undefined8 in_stack_00000028;
  long in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000058;
  
  uVar7 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *in_x10) {
        puVar2 = (undefined8 *)(param_1 + (long)(*piVar8 + 1) * 0x10 + 0x138);
        goto LAB_076b908c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8();
LAB_076b908c:
  in_stack_00000040 = (*(code *)*puVar2)();
  if (unaff_x20 == 0) goto LAB_076b9340;
  lVar3 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable();
  if ((in_stack_00000048._4_1_ == '\0') || (lVar3 != in_stack_00000040)) {
    uVar7 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue();
    if ((uVar7 & 1) == 0) {
      return in_stack_00000048._4_1_ != '\0';
    }
    plVar9 = *(long **)(unaff_x20 + 0x68);
    if (plVar9 == (long *)0x0) goto LAB_076b9340;
    lVar3 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09186938) {
          puVar2 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076b918c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186938,0);
LAB_076b918c:
    (*(code *)*puVar2)(plVar9);
    if (*(long *)(unaff_x20 + 200) == 0) {
      return true;
    }
    plVar9 = *(long **)(unaff_x22 + 0x28);
    if (plVar9 != (long *)0x0) {
      lVar3 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09186850) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_076b9204;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09186850,0);
LAB_076b9204:
      iVar1 = (*(code *)*puVar2)(plVar9,puVar2[1]);
      if (3 < iVar1) {
        if (unaff_x21 == (long *)0x0) goto LAB_076b9340;
        lVar3 = *(long *)(unaff_x22 + 0x28);
        uVar4 = (**(code **)(*unaff_x21 + 0x278))();
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09182ff8);
        }
        uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith
                          (DAT_09206028,uVar5,*(undefined8 *)(unaff_x20 + 0x30),
                           *(undefined8 *)(unaff_x20 + 0x50));
        if (*(int *)(DAT_09187398 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09187398);
        }
        uVar6 = thunk_FUN_03f99350();
        uVar4 = Newtonsoft_Json_JsonPosition__FormatMessage(uVar6,uVar4,uVar5,0);
        if (lVar3 == 0) goto LAB_076b9340;
        FUN_03ebc3ec(1,DAT_09186850,lVar3,4,uVar4,0);
      }
    }
    lVar3 = *(long *)(unaff_x20 + 200);
    in_stack_00000028._4_1_ = 1;
    FUN_03f5c42c(DAT_09535400,(long)&stack0x00000028 + 4);
    if (lVar3 == 0) {
LAB_076b9340:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
  }
  return true;
}

