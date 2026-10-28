// rea decompile_all
// name: System.__DTString$$RemoveLeadingInQuoteSpaces
// address: 0x75acf48
// body: available
// range: 0x75acf48-0x75ad12f inclusive
// range: 0x75ad134-0x75ad1d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75ad12c to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75ad1d0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System___DTString__RemoveLeadingInQuoteSpaces(undefined1 (*param_1) [16])

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  long local_70;
  ulong uStack_68;
  
  if ((DAT_09521c8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b97e0);
    FUN_03f5c2a4(&DAT_091b9810);
    FUN_03f5c2a4(&DAT_091ba978);
    FUN_03f5c2a4(&DAT_091ba9a0);
    FUN_03f5c2a4(&DAT_091ba9a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c8e = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  if (2 < *(int *)(*param_1 + 8)) {
    sVar2 = **(short **)*param_1;
    if ((sVar2 == 0x27) || (sVar2 == 0x22)) {
      lVar11 = 0;
      lVar4 = -2;
      do {
        lVar9 = lVar4;
        lVar8 = lVar11;
        if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((DAT_09521c7b & 1) == 0) {
          FUN_03f5c2a4(&DAT_091b9810);
          DAT_09521c7b = 1;
        }
        if ((long)(int)*(uint *)(*param_1 + 8) <= (long)(lVar8 + 1U)) break;
        if ((ulong)*(uint *)(*param_1 + 8) <= lVar8 + 1U) goto LAB_075ad1d0;
        uVar3 = *(undefined2 *)(*(long *)*param_1 + lVar8 * 2 + 2);
        if (*(int *)(DAT_09535460 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_Char__IsWhiteSpace(uVar3,0);
        lVar11 = lVar8 + 1;
        lVar4 = lVar9 + -2;
      } while ((uVar5 & 1) != 0);
      uVar10 = (uint)lVar8;
      if (uVar10 != 0) {
        uVar6 = FUN_03f5c394(DAT_0917fcc8,*(int *)(*param_1 + 8) - uVar10);
        auVar12 = FUN_06109734(uVar6,DAT_091ba9a8);
        psVar7 = auVar12._0_8_;
        if (auVar12._8_4_ == 0) {
LAB_075ad1d0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(uint *)(*param_1 + 8);
        *psVar7 = sVar2;
        if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar11 = *(long *)*param_1;
        if ((*(ushort *)(*(long *)(DAT_091b97e0 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_70 = lVar11 - lVar9;
        uStack_68 = (ulong)(~uVar10 + uVar1);
        if ((*(byte *)(*(long *)(DAT_091ba978 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        FUN_05ff6b08(&local_70,psVar7 + 1,auVar12._8_4_ + -1,DAT_091b97d0);
        auVar12 = FUN_06109338(psVar7,auVar12._8_8_,DAT_091ba9a0);
        *param_1 = auVar12;
      }
    }
  }
  return;
}

