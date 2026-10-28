// rea decompile_all
// name: System.Runtime.InteropServices.Marshal$$SecureStringToBSTR
// address: 0x74ce364
// body: available
// range: 0x74ce364-0x74ce49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ce44c to 0x3f68f30 FUN_03f68f30 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74ce450 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ce498 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ce49c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_InteropServices_Marshal__SecureStringToBSTR(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  if ((DAT_095214fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187dd0);
    DAT_095214fd = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_09221e00);
    System_ArgumentNullException___ctor(uVar9,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d29f8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar6);
  }
  lVar5 = System_Security_SecureString__GetBuffer(param_1,0);
  uVar4 = System_Security_SecureString__get_Length(param_1,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(lVar5 + 0x18);
  iVar8 = (int)uVar9;
  if (0 < iVar8) {
    uVar7 = 1;
    do {
      if (((uint)uVar9 <= uVar7 - 1) || ((uint)uVar9 <= uVar7)) {
LAB_074ce450:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      puVar10 = (undefined1 *)(lVar5 + (int)uVar7 + 0x20);
      puVar11 = (undefined1 *)(lVar5 + (int)(uVar7 - 1) + 0x20);
      uVar3 = *puVar11;
      *puVar11 = *puVar10;
      if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_074ce450;
      *puVar10 = uVar3;
      iVar1 = uVar7 + 1;
      uVar7 = uVar7 + 2;
      uVar9 = *(undefined8 *)(lVar5 + 0x18);
      iVar8 = (int)uVar9;
    } while (iVar1 < iVar8);
  }
  if (*(int *)(DAT_09187dd0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = 0;
  if (iVar8 != 0) {
    lVar2 = lVar5 + 0x20;
  }
  FUN_03f68f30(lVar2,uVar4);
  return;
}

