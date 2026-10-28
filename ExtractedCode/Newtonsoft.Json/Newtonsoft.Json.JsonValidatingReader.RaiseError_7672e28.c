// rea decompile_all
// name: Newtonsoft.Json.JsonValidatingReader$$RaiseError
// address: 0x7672e28
// body: available
// range: 0x7672e28-0x7673163 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7673160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonValidatingReader__RaiseError(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_09522499 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_091873d8);
    FUN_03f5c2a4(&DAT_091f5fb0);
    DAT_09522499 = 1;
  }
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185f18) {
        puVar3 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_07672edc;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,0);
LAB_07672edc:
  uVar8 = (*(code *)*puVar3)(param_1,puVar3[1]);
  if ((uVar8 & 1) != 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185f18) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07672f60;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,1);
LAB_07672f60:
    local_34 = (*(code *)*puVar3)(param_1,puVar3[1]);
    uVar5 = FUN_03f5c42c(DAT_09535420,&local_34);
    lVar7 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185f18) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07672fdc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,2);
LAB_07672fdc:
    local_38 = (*(code *)*puVar3)(param_1,puVar3[1]);
    uVar6 = FUN_03f5c42c(DAT_09535420,&local_38);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_091f5fb0,uVar4,uVar5,uVar6,0);
    param_2 = System_String__Concat(param_2,uVar4,0);
  }
  uVar4 = (**(code **)(*param_1 + 0x278))(param_1,*(undefined8 *)(*param_1 + 0x280));
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185f18) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_0767309c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,1);
LAB_0767309c:
  uVar1 = (*(code *)*puVar3)(param_1,puVar3[1]);
  lVar7 = *param_1;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == DAT_09185f18) {
        puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
        goto LAB_07673104;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,2);
LAB_07673104:
  uVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
  uVar5 = thunk_FUN_03f9944c(DAT_091873d8);
  Newtonsoft_Json_Schema_JsonSchemaException___ctor(uVar5,param_2,0,uVar4,uVar1,uVar2,0);
  Newtonsoft_Json_JsonValidatingReader__OnValidationEvent(param_1,uVar5);
  return;
}

