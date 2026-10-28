// rea decompile_all
// name: Newtonsoft.Json.JsonPosition$$FormatMessage
// address: 0x7641604
// body: available
// range: 0x7641604-0x7641923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7641920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonPosition__FormatMessage(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined4 local_48;
  undefined4 local_44;
  
  if ((DAT_095222d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f88e0);
    FUN_03f5c2a4(&DAT_0920a5c0);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095222d2 = 1;
  }
  uVar1 = System_Environment__get_NewLine(0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_String__EndsWith(param_3,uVar1,4,0);
  if ((uVar2 & 1) == 0) {
    uVar1 = System_String__Trim(param_3,0);
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__EndsWith(uVar1,0x2e,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = System_String__Concat(uVar1,DAT_091f8f68,0);
    }
    param_3 = System_String__Concat(uVar1,DAT_091f5a98,0);
  }
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  uVar1 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_0920a5c0,uVar1,param_2,0);
  uVar1 = System_String__Concat(param_3,uVar1,0);
  if (param_1 != (long *)0x0) {
    lVar7 = *param_1;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_09185f18) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_076417a8;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,0);
LAB_076417a8:
    uVar2 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar7 = *param_1;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185f18) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_07641824;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,1);
LAB_07641824:
      local_44 = (*(code *)*puVar3)(param_1,puVar3[1]);
      uVar5 = FUN_03f5c42c(DAT_09535420,&local_44);
      lVar7 = *param_1;
      uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_09185f18) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_076418a0;
          }
          uVar2 = uVar2 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_09185f18,2);
LAB_076418a0:
      local_48 = (*(code *)*puVar3)(param_1,puVar3[1]);
      uVar6 = FUN_03f5c42c(DAT_09535420,&local_48);
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(DAT_091f88e0,uVar4,uVar5,uVar6,0);
      uVar1 = System_String__Concat(uVar1,uVar4,0);
    }
  }
  System_String__Concat(uVar1,DAT_091f8f68,0);
  return;
}

