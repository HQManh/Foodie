// rea decompile_all
// name: System.Random$$.ctor
// address: 0x75c70c8
// body: available
// range: 0x75c70c8-0x75c7273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c726c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75c7270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Random___ctor(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  
  if ((DAT_09521d9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521d9a = 1;
  }
  lVar5 = FUN_03f5c394(DAT_091801b8,0x38);
  plVar11 = (long *)(param_1 + 0x18);
  *plVar11 = lVar5;
  thunk_FUN_03f5d7b8(plVar11,lVar5);
  System_Object___ctor(param_1,0);
  if (param_2 == -0x80000000) {
    iVar6 = -0x765b1379;
  }
  else {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar6 = -param_2;
    if (-1 < param_2) {
      iVar6 = param_2;
    }
    iVar6 = 0x9a4ec86 - iVar6;
  }
  lVar5 = *plVar11;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(uint *)(lVar5 + 0x18);
  if (0x37 < uVar3) {
    uVar10 = 0;
    iVar7 = 0x36;
    *(int *)(lVar5 + 0xfc) = iVar6;
    iVar8 = 1;
    while( true ) {
      uVar1 = uVar10 + 0x15;
      uVar4 = uVar10 - 0x22;
      uVar10 = uVar1;
      if (0x36 < (int)uVar1) {
        uVar10 = uVar4;
      }
      if (uVar3 <= uVar10) break;
      iVar6 = iVar6 - iVar8;
      iVar2 = iVar6 + 0x7fffffff;
      if (-1 < iVar6) {
        iVar2 = iVar6;
      }
      iVar7 = iVar7 + -1;
      *(int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20) = iVar8;
      iVar6 = iVar8;
      iVar8 = iVar2;
      if (iVar7 == 0) {
        iVar6 = 1;
        do {
          lVar9 = 9;
          do {
            iVar7 = 0x1e;
            if (0x18 < lVar9 - 8U) {
              iVar7 = -0x19;
            }
            uVar10 = ((int)lVar9 + iVar7) - 7;
            if (uVar3 <= uVar10) goto LAB_075c726c;
            iVar8 = *(int *)(lVar5 + lVar9 * 4) - *(int *)(lVar5 + (long)(int)uVar10 * 4 + 0x20);
            iVar7 = iVar8 + 0x7fffffff;
            if (-1 < iVar8) {
              iVar7 = iVar8;
            }
            *(int *)(lVar5 + lVar9 * 4) = iVar7;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x40);
          iVar6 = iVar6 + 1;
          if (iVar6 == 5) {
            *(undefined8 *)(param_1 + 0x10) = 0x1500000000;
            return;
          }
        } while( true );
      }
    }
  }
LAB_075c726c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

