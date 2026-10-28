// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$ResolveConvertibleValue
// address: 0x767e63c
// body: available
// range: 0x767e63c-0x767e7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767e7b4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x767e7b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__ResolveConvertibleValue
               (long *param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  
  if ((DAT_09522523 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091858c0);
    DAT_09522523 = 1;
  }
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeInformation(param_1,0);
  if (lVar3 != 0) {
    iVar1 = 0x27;
    if (*(int *)(lVar3 + 0x18) != 1) {
      iVar1 = *(int *)(lVar3 + 0x18);
    }
    *param_2 = iVar1;
    lVar2 = DAT_09535468;
    if (*(int *)(lVar3 + 0x18) == 1) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Type__GetTypeFromHandle(lVar2 + 0x20,0);
    }
    else {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
    }
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (param_1 != (long *)0x0) {
      lVar3 = *param_1;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091858c0) {
            puVar6 = (undefined8 *)(lVar3 + (long)(*piVar8 + 0x10) * 0x10 + 0x138);
            goto LAB_0767e788;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(param_1,DAT_091858c0,0x10);
LAB_0767e788:
      uVar4 = (*(code *)*puVar6)(param_1,uVar4,uVar5,puVar6[1]);
      *param_3 = uVar4;
      thunk_FUN_03f5d7b8(param_3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

