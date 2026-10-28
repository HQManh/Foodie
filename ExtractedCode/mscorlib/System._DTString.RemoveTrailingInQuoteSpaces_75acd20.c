// rea decompile_all
// name: System.__DTString$$RemoveTrailingInQuoteSpaces
// address: 0x75acd20
// body: available
// range: 0x75acd20-0x75acf47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75aced0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75acf44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System___DTString__RemoveTrailingInQuoteSpaces(undefined1 (*param_1) [16])

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  long local_50;
  ulong uStack_48;
  
  if ((DAT_09521c8d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091ba9a0);
    FUN_03f5c2a4(&DAT_091ba9a8);
    FUN_03f5c2a4(&DAT_0918db18);
    DAT_09521c8d = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  if (*(int *)(DAT_0918db18 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09521c7b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c7b = 1;
  }
  uVar7 = *(int *)(*param_1 + 8) - 1;
  if (1 < (int)uVar7) {
    sVar2 = *(short *)(*(long *)*param_1 + (ulong)uVar7 * 2);
    if ((sVar2 == 0x27) || (sVar2 == 0x22)) {
      uVar9 = (ulong)(*(int *)(*param_1 + 8) - 2);
      uVar3 = *(undefined2 *)(*(long *)*param_1 + uVar9 * 2);
      if (*(int *)(DAT_09535460 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Char__IsWhiteSpace(uVar3,0);
      if ((uVar4 & 1) != 0) {
        do {
          uVar9 = uVar9 - 1;
          if ((int)uVar9 + 1 < 1) {
            uVar7 = 0;
            break;
          }
          if (*(uint *)(*param_1 + 8) <= uVar9) goto LAB_075acf44;
          uVar3 = *(undefined2 *)(*(long *)*param_1 + uVar9 * 2);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Char__IsWhiteSpace(uVar3,0);
          uVar7 = uVar7 - 1;
        } while ((uVar4 & 1) != 0);
        uVar5 = FUN_03f5c394(DAT_0917fcc8,uVar7 + 1);
        auVar10 = FUN_06109734(uVar5,DAT_091ba9a8);
        lVar6 = auVar10._0_8_;
        if (auVar10._8_4_ <= uVar7) {
LAB_075acf44:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar1 = *(uint *)(*param_1 + 8);
        *(short *)(lVar6 + (ulong)uVar7 * 2) = sVar2;
        if (uVar1 < uVar7) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar8 = *(long *)*param_1;
        if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        uStack_48 = (ulong)uVar7;
        local_50 = lVar8;
        FUN_05ff6b08(&local_50,lVar6,auVar10._8_8_,DAT_091b97d0);
        auVar10 = FUN_06109338(lVar6,auVar10._8_8_,DAT_091ba9a0);
        *param_1 = auVar10;
      }
    }
  }
  return;
}

