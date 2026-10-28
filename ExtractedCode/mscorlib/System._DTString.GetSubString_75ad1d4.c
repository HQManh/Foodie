// rea decompile_all
// name: System.__DTString$$GetSubString
// address: 0x75ad1d4
// body: available
// range: 0x75ad1d4-0x75ad34b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ad348 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System___DTString__GetSubString(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  if ((DAT_09521c8f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c8f = 1;
  }
  lVar11 = param_2[1];
  lVar10 = *param_2;
  iVar8 = 0;
  lVar2 = param_2[2];
  iVar6 = 0;
  iVar5 = 0;
  iVar4 = (int)lVar2;
  do {
    if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((DAT_09521c7b & 1) == 0) {
      FUN_03f5c2a4(&DAT_091b9810);
      DAT_09521c7b = 1;
    }
    iVar7 = iVar6;
    if ((int)*(uint *)(param_2 + 1) <= iVar4 + iVar8) {
      iVar7 = 3;
      if (iVar8 != 0) {
        iVar7 = iVar6;
      }
      goto LAB_075ad314;
    }
    iVar4 = (int)param_2[2];
    if (*(uint *)(param_2 + 1) <= (uint)(iVar8 + iVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar3 = (uint)*(ushort *)(*param_2 + (long)(iVar8 + iVar4) * 2);
    uVar1 = uVar3 - 0x30;
    if (iVar8 == 0) {
      if (9 < uVar1) {
        iVar8 = 1;
        iVar7 = 4;
        goto LAB_075ad314;
      }
      iVar6 = 2;
    }
    else {
      iVar9 = 2;
      if (9 < uVar1) {
        iVar9 = 4;
      }
      if (iVar6 != iVar9) goto LAB_075ad314;
      if (9 < uVar1) {
        iVar8 = iVar8 + 1;
        goto LAB_075ad314;
      }
      if (iVar8 == 8) {
        iVar8 = 9;
        iVar7 = 1;
LAB_075ad314:
        *(int *)(param_1 + 3) = iVar7;
        *(int *)((long)param_1 + 0x1c) = iVar5;
        *(int *)(param_1 + 2) = (int)lVar2;
        *(int *)((long)param_1 + 0x14) = iVar8;
        param_1[1] = lVar11;
        *param_1 = lVar10;
        return;
      }
    }
    iVar8 = iVar8 + 1;
    iVar5 = uVar3 + iVar5 * 10 + -0x30;
  } while( true );
}

