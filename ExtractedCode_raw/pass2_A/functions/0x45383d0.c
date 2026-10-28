// rea decompile_all
// name: DG.Tweening.DOTween$$ToArray
// address: 0x45383d0
// body: available
// range: 0x45383d0-0x4538607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4538600 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4538604 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_DOTween__ToArray(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  float fVar10;
  
  if ((DAT_095186a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c7190);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091cc040);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_091807f8);
    FUN_03f5c2a4(&DAT_09210a10);
    DAT_095186a4 = 1;
  }
  if ((param_4 != 0) && (param_3 != 0)) {
    uVar8 = *(ulong *)(param_4 + 0x18);
    iVar7 = (int)uVar8;
    if (iVar7 == *(int *)(param_3 + 0x18)) {
      lVar1 = FUN_03f5c394(DAT_091807f8,uVar8 & 0xffffffff);
      lVar2 = FUN_03f5c394(DAT_09180528,uVar8 & 0xffffffff);
      fVar10 = 0.0;
      if (0 < iVar7) {
        lVar4 = 0;
        uVar5 = 0;
        do {
          if (*(uint *)(param_3 + 0x18) <= uVar5) goto LAB_04538600;
          if (lVar1 == 0) goto LAB_04538604;
          if (*(uint *)(lVar1 + 0x18) <= uVar5) goto LAB_04538600;
          uVar9 = *(undefined4 *)(param_3 + lVar4 + 0x28);
          *(undefined8 *)(lVar1 + lVar4 + 0x20) = *(undefined8 *)(param_3 + lVar4 + 0x20);
          *(undefined4 *)(lVar1 + lVar4 + 0x28) = uVar9;
          if (*(uint *)(param_4 + 0x18) <= uVar5) goto LAB_04538600;
          if (lVar2 == 0) goto LAB_04538604;
          if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_04538600;
          lVar4 = lVar4 + 0xc;
          *(undefined4 *)(lVar2 + 0x20 + uVar5 * 4) = *(undefined4 *)(param_4 + 0x20 + uVar5 * 4);
          uVar5 = uVar5 + 1;
        } while (((uVar8 & 0xffffffff) * 2 + (uVar8 & 0xffffffff)) * 4 - lVar4 != 0);
        if (0 < iVar7) {
          fVar10 = 0.0;
          uVar8 = uVar8 & 0xffffffff;
          pfVar6 = (float *)(lVar2 + 0x20);
          do {
            if (*(uint *)(lVar2 + 0x18) <= iVar7 - 1U) {
LAB_04538600:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar8 = uVar8 - 1;
            fVar10 = fVar10 + *pfVar6;
            pfVar6 = pfVar6 + 1;
          } while (uVar8 != 0);
        }
      }
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = FUN_04a7d9c8(fVar10,param_1,param_2,lVar1,0,DAT_091c7190);
      lVar1 = FUN_04b265a4(uVar3,DAT_091cc040);
      if (lVar1 == 0) goto LAB_04538604;
      *(long *)(lVar1 + 0x148) = lVar2;
      thunk_FUN_03f5d7b8(lVar1 + 0x148,lVar2);
    }
    else {
      DG_Tweening_Core_Debugger__LogError(DAT_09210a10,0,0);
      lVar1 = 0;
    }
    return lVar1;
  }
LAB_04538604:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

