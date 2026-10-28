// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.PrimitiveArray$$SetValue
// address: 0x74cbf0c
// body: available
// range: 0x74cbf0c-0x74cc33b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74cc334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74cc338 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_PrimitiveArray__SetValue
               (long param_1,long param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  
  if ((DAT_095214df & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09214960);
    DAT_095214df = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 9) {
    if (iVar1 < 6) {
      if (iVar1 == 1) {
        lVar8 = *(long *)(param_1 + 0x18);
        if (*(int *)(DAT_09535400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar2 = System_Boolean__Parse(param_2,0);
        if (lVar8 != 0) {
          if (param_3 < *(uint *)(lVar8 + 0x18)) {
            *(byte *)(lVar8 + (int)param_3 + 0x20) = bVar2 & 1;
            return;
          }
          goto LAB_074cc338;
        }
        goto LAB_074cc334;
      }
      if (iVar1 != 3) {
        return;
      }
      if (param_2 == 0) goto LAB_074cc334;
      sVar4 = System_String__get_Chars(param_2,0,0);
      if ((sVar4 == 0x5f) &&
         (uVar7 = System_String__Equals(param_2,DAT_09214960,0), (uVar7 & 1) != 0)) {
        lVar8 = *(long *)(param_1 + 0x20);
        if (lVar8 != 0) {
          if (param_3 < *(uint *)(lVar8 + 0x18)) {
            *(undefined2 *)(lVar8 + (long)(int)param_3 * 2 + 0x20) = 0;
            return;
          }
          goto LAB_074cc338;
        }
        goto LAB_074cc334;
      }
      lVar8 = *(long *)(param_1 + 0x20);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Char__Parse(param_2,0);
    }
    else {
      if (iVar1 == 6) {
        lVar8 = *(long *)(param_1 + 0x28);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar6 = System_Double__Parse(param_2,uVar6,0);
        if (lVar8 == 0) goto LAB_074cc334;
        if (param_3 < *(uint *)(lVar8 + 0x18)) {
          *(undefined8 *)(lVar8 + (long)(int)param_3 * 8 + 0x20) = uVar6;
          return;
        }
        goto LAB_074cc338;
      }
      if (iVar1 != 7) {
        if (iVar1 != 8) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0x38);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar9 = System_Int32__Parse(param_2,uVar6,0);
        goto joined_r0x074cc020;
      }
      lVar8 = *(long *)(param_1 + 0x30);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar5 = System_Int16__Parse(param_2,uVar6,0);
    }
joined_r0x074cc164:
    if (lVar8 == 0) goto LAB_074cc334;
    if (*(uint *)(lVar8 + 0x18) <= param_3) goto LAB_074cc338;
    *(undefined2 *)(lVar8 + (long)(int)param_3 * 2 + 0x20) = uVar5;
  }
  else {
    if (iVar1 < 0xe) {
      if (iVar1 != 9) {
        if (iVar1 == 10) {
          lVar8 = *(long *)(param_1 + 0x48);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar3 = System_SByte__Parse(param_2,uVar6,0);
          if (lVar8 == 0) goto LAB_074cc334;
          if (param_3 < *(uint *)(lVar8 + 0x18)) {
            *(undefined1 *)(lVar8 + (int)param_3 + 0x20) = uVar3;
            return;
          }
        }
        else {
          if (iVar1 != 0xb) {
            return;
          }
          lVar8 = *(long *)(param_1 + 0x50);
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
          uVar9 = System_Single__Parse(param_2,uVar6,0);
          if (lVar8 == 0) goto LAB_074cc334;
          if (param_3 < *(uint *)(lVar8 + 0x18)) {
            *(undefined4 *)(lVar8 + (long)(int)param_3 * 4 + 0x20) = uVar9;
            return;
          }
        }
        goto LAB_074cc338;
      }
      lVar8 = *(long *)(param_1 + 0x40);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar6 = System_Int64__Parse(param_2,uVar6,0);
    }
    else {
      if (iVar1 == 0xe) {
        lVar8 = *(long *)(param_1 + 0x58);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar5 = System_UInt16__Parse(param_2,uVar6,0);
        goto joined_r0x074cc164;
      }
      if (iVar1 == 0xf) {
        lVar8 = *(long *)(param_1 + 0x60);
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar9 = System_UInt32__Parse(param_2,uVar6,0);
joined_r0x074cc020:
        if (lVar8 == 0) goto LAB_074cc334;
        if (param_3 < *(uint *)(lVar8 + 0x18)) {
          *(undefined4 *)(lVar8 + (long)(int)param_3 * 4 + 0x20) = uVar9;
          return;
        }
        goto LAB_074cc338;
      }
      if (iVar1 != 0x10) {
        return;
      }
      lVar8 = *(long *)(param_1 + 0x68);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar6 = System_UInt64__Parse(param_2,uVar6,0);
    }
    if (lVar8 == 0) {
LAB_074cc334:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar8 + 0x18) <= param_3) {
LAB_074cc338:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar8 + (long)(int)param_3 * 8 + 0x20) = uVar6;
  }
  return;
}

