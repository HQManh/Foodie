// rea decompile_all
// name: System.Security.Cryptography.SHA1Internal$$ProcessFinalBlock
// address: 0x7476348
// body: available
// range: 0x7476348-0x747650f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74764e8 to 0x7475d70 System.Security.Cryptography.SHA1Internal$$ProcessBlock (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7476508 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x747650c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_SHA1Internal__ProcessFinalBlock
               (long param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  
  lVar6 = param_1;
  if ((DAT_09521213 & 1) == 0) {
    lVar6 = FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09521213 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18) + (long)(int)param_4;
  uVar5 = (uint)lVar2 & 0x3f;
  iVar7 = 0x38;
  if (0x37 < uVar5) {
    iVar7 = 0x78;
  }
  iVar4 = (iVar7 - uVar5) + param_4;
  iVar3 = iVar4 + 8;
  if (iVar3 == 0x40) {
    lVar12 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar6 = FUN_03f5c394(DAT_0917fc88,iVar3);
    lVar12 = lVar6;
  }
  if ((int)param_4 < 1) {
    if (lVar12 == 0) goto LAB_0747650c;
  }
  else {
    if (param_2 == 0) {
LAB_0747650c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar11 = param_3 << 0x20;
    uVar9 = 0;
    do {
      if ((ulong)*(uint *)(param_2 + 0x18) <= (param_3 & 0xffffffff) + uVar9) goto LAB_07476508;
      if (lVar12 == 0) goto LAB_0747650c;
      if (*(uint *)(lVar12 + 0x18) <= uVar9) goto LAB_07476508;
      lVar1 = lVar11 >> 0x20;
      lVar11 = lVar11 + 0x100000000;
      *(undefined1 *)(lVar12 + 0x20 + uVar9) = *(undefined1 *)(param_2 + lVar1 + 0x20);
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
  }
  if (*(uint *)(lVar12 + 0x18) <= param_4) {
LAB_07476508:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  uVar8 = param_4 + 1;
  *(undefined1 *)(lVar12 + (int)param_4 + 0x20) = 0x80;
  if ((int)uVar8 < iVar4) {
    iVar7 = ~uVar5 + iVar7;
    puVar10 = (undefined1 *)(lVar12 + (int)uVar8 + 0x20);
    do {
      if (*(uint *)(lVar12 + 0x18) <= uVar8) goto LAB_07476508;
      iVar7 = iVar7 + -1;
      uVar8 = uVar8 + 1;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    } while (iVar7 != 0);
  }
  System_Security_Cryptography_SHA1Internal__AddLength(lVar6,lVar2 * 8,lVar12,iVar4);
  System_Security_Cryptography_SHA1Internal__ProcessBlock(param_1,lVar12,0);
  if (iVar3 != 0x80) {
    return;
  }
  System_Security_Cryptography_SHA1Internal__ProcessBlock(param_1,lVar12,0x40);
  return;
}

