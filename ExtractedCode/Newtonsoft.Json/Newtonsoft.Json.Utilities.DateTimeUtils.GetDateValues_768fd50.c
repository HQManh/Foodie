// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$GetDateValues
// address: 0x768fd50
// body: available
// range: 0x768fd50-0x768ff8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768ff4c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768ff88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_DateTimeUtils__GetDateValues
               (undefined8 param_1,int *param_2,uint *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  uint uVar10;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((DAT_09522595 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09522595 = 1;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = System_DateTime__get_Ticks(&local_38,0);
  iVar8 = ((int)(lVar7 / 864000000000) + (int)(lVar7 >> 0x3f)) -
          (SUB164(SEXT816(lVar7) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
  iVar5 = iVar8 % 0x23ab1;
  iVar1 = 3;
  if (0x8eab < iVar5 - 0x23ab0U) {
    iVar1 = iVar5 / 0x8eac;
  }
  iVar5 = iVar5 + iVar1 * -0x8eac;
  iVar6 = iVar5 % 0x5b5;
  iVar2 = 3;
  if (0x16c < iVar6 - 0x5b4U) {
    iVar2 = iVar6 / 0x16d;
  }
  *param_2 = iVar2 + (iVar8 / 0x23ab1) * 400 + iVar1 * 100 + (iVar5 / 0x5b5) * 4 + 1;
  if ((iVar2 == 3) && ((iVar1 == 3 || (0x5b4 < iVar5 - 0x88f8U)))) {
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)(*(long *)(DAT_091835c0 + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar9 = (long *)(*(long *)(DAT_091835c0 + 0xb8) + 8);
  }
  lVar7 = *plVar9;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = *(uint *)(lVar7 + 0x18);
  iVar6 = iVar6 + iVar2 * -0x16d;
  uVar10 = iVar6 >> 6;
  uVar3 = uVar10;
  if (uVar10 <= uVar4) {
    uVar3 = uVar4;
  }
  if (uVar10 < uVar4) {
    do {
      if (iVar6 < *(int *)(lVar7 + (long)(int)uVar10 * 4 + 0x20)) {
        *param_3 = uVar10;
        if (uVar10 - 1 < uVar4) {
          *param_4 = (iVar6 - *(int *)(lVar7 + (long)(int)(uVar10 - 1) * 4 + 0x20)) + 1;
          return;
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

