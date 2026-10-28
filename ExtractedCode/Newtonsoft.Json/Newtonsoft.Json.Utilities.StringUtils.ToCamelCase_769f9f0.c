// rea decompile_all
// name: Newtonsoft.Json.Utilities.StringUtils$$ToCamelCase
// address: 0x769f9f0
// body: available
// range: 0x769f9f0-0x769fbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x769fba8 to 0x742cd54 System.String$$CreateString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x769fbac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x769fbb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Newtonsoft_Json_Utilities_StringUtils__ToCamelCase(long param_1)

{
  ulong uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined2 *puVar8;
  uint uVar9;
  
  uVar4 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar4 & 1) != 0) {
    return param_1;
  }
  if (param_1 == 0) {
LAB_0769fbb0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = System_String__get_Chars(param_1,0,0);
  if (*(int *)(DAT_09535460 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09535460);
  }
  uVar4 = System_Char__IsUpper(uVar3,0);
  if ((uVar4 & 1) == 0) {
    return param_1;
  }
  lVar5 = System_String__ToCharArray(param_1,0);
  if (lVar5 == 0) goto LAB_0769fbb0;
  if ((int)*(ulong *)(lVar5 + 0x18) < 1) {
LAB_0769fb8c:
    lVar5 = System_String__CreateString(0,lVar5,0);
    return lVar5;
  }
  uVar7 = *(ulong *)(lVar5 + 0x18) & 0xffffffff;
  puVar8 = (undefined2 *)(lVar5 + 0x20);
  uVar4 = 0;
LAB_0769fa80:
  if (uVar4 == 1) {
    uVar2 = *(undefined2 *)(lVar5 + 0x22);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_Char__IsUpper(uVar2,0);
    if ((uVar7 & 1) == 0) goto LAB_0769fb8c;
    uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
  }
  uVar1 = uVar4 + 1;
  if ((uVar4 != 0) && ((int)uVar1 < (int)uVar7)) {
    if (uVar7 <= uVar1) goto LAB_0769fbac;
    uVar2 = puVar8[1];
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_Char__IsUpper(uVar2,0);
    uVar7 = (ulong)*(uint *)(lVar5 + 0x18);
    if ((uVar6 & 1) == 0) {
      uVar9 = (uint)uVar4;
      if (uVar9 + 1 < *(uint *)(lVar5 + 0x18)) {
        uVar2 = puVar8[1];
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = System_Char__IsSeparator(uVar2,0);
        if ((uVar4 & 1) != 0) {
          if ((*(uint *)(lVar5 + 0x18) <= uVar9) ||
             (uVar2 = Newtonsoft_Json_Utilities_StringUtils__ToLower(*puVar8),
             *(uint *)(lVar5 + 0x18) <= uVar9)) goto LAB_0769fbac;
          *puVar8 = uVar2;
        }
        goto LAB_0769fb8c;
      }
      goto LAB_0769fbac;
    }
  }
  if (uVar4 < uVar7) {
    uVar2 = Newtonsoft_Json_Utilities_StringUtils__ToLower(*puVar8);
    uVar9 = *(uint *)(lVar5 + 0x18);
    uVar7 = (ulong)uVar9;
    if (uVar7 <= uVar4) goto LAB_0769fbac;
    *puVar8 = uVar2;
    puVar8 = puVar8 + 1;
    uVar4 = uVar1;
    if ((long)(int)uVar9 <= (long)uVar1) goto LAB_0769fb8c;
    goto LAB_0769fa80;
  }
LAB_0769fbac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

