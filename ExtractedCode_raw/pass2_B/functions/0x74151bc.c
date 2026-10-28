// rea decompile_all
// name: Mono.Globalization.Unicode.CodePointIndexer$$.ctor
// address: 0x74151bc
// body: available
// range: 0x74151bc-0x741531f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74152e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x741531c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Globalization_Unicode_CodePointIndexer___ctor
               (long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  
  if ((DAT_09520f43 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180950);
    DAT_09520f43 = 1;
  }
  System_Object___ctor(param_1,0);
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x20) = param_5;
  if (param_2 != 0) {
    lVar3 = FUN_03f5c394(DAT_09180950,*(undefined4 *)(param_2 + 0x18));
    plVar11 = (long *)(param_1 + 0x10);
    *plVar11 = lVar3;
    thunk_FUN_03f5d7b8(plVar11,lVar3);
    lVar3 = *plVar11;
    if (lVar3 != 0) {
      uVar6 = 0;
      lVar7 = 0x30;
      do {
        uVar9 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
        uVar8 = (uint)*(ulong *)(lVar3 + 0x18);
        if ((long)(int)uVar8 <= (long)uVar6) {
          if (0 < (int)uVar8) {
            iVar5 = *(int *)(param_1 + 0x18);
            piVar4 = (int *)(lVar3 + 0x28);
            do {
              uVar9 = uVar9 - 1;
              iVar5 = *piVar4 + iVar5;
              piVar4 = piVar4 + 5;
            } while (uVar9 != 0);
            *(int *)(param_1 + 0x18) = iVar5;
          }
          return;
        }
        if (*(uint *)(param_2 + 0x18) <= uVar6) {
LAB_0741531c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (param_3 == 0) break;
        if (*(uint *)(param_3 + 0x18) <= uVar6) goto LAB_0741531c;
        iVar5 = *(int *)(param_2 + 0x20 + uVar6 * 4);
        iVar1 = *(int *)(param_3 + 0x20 + uVar6 * 4);
        if (lVar7 == 0x30) {
          iVar10 = 0;
        }
        else {
          if (uVar8 <= (int)uVar6 - 1U) goto LAB_0741531c;
          iVar10 = *(int *)(lVar3 + lVar7 + -0x1c) + *(int *)(lVar3 + lVar7 + -0x18);
        }
        if (uVar9 <= uVar6) goto LAB_0741531c;
        piVar4 = (int *)(lVar3 + lVar7);
        iVar2 = iVar1 - iVar5;
        uVar6 = uVar6 + 1;
        piVar4[-2] = iVar2;
        piVar4[-1] = iVar10;
        lVar7 = lVar7 + 0x14;
        piVar4[-4] = iVar5;
        piVar4[-3] = iVar1;
        *piVar4 = iVar10 + iVar2;
        lVar3 = *plVar11;
      } while (lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

