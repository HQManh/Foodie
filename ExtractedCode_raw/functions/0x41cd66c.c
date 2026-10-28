// rea decompile_all
// name: AnhPD.PopupMinigame.LiquidWave$$UpdateSprings
// address: 0x41cd66c
// body: available
// range: 0x41cd66c-0x41cd883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41cd87c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41cd880 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_PopupMinigame_LiquidWave__UpdateSprings(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09516a11 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae358);
    FUN_03f5c2a4(&DAT_091ae360);
    FUN_03f5c2a4(&DAT_09180528);
    DAT_09516a11 = 1;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
LAB_041cd87c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 0x18);
  uVar7 = (ulong)uVar1;
  lVar3 = FUN_03f5c394(DAT_09180528,uVar7);
  lVar4 = FUN_03f5c394(DAT_09180528,uVar7);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    do {
      if (uVar8 != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_041cd87c;
        fVar10 = *(float *)(param_1 + 0x3c);
        lVar5 = FUN_057e0998(*(long *)(param_1 + 0x30),uVar8 & 0xffffffff,DAT_091ae360);
        if ((lVar5 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_041cd87c;
        iVar2 = (int)uVar8 + -1;
        fVar11 = *(float *)(lVar5 + 0x2c);
        lVar5 = FUN_057e0998(*(long *)(param_1 + 0x30),iVar2,DAT_091ae360);
        if ((lVar5 == 0) || (lVar3 == 0)) goto LAB_041cd87c;
        if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_041cd880;
        lVar6 = *(long *)(param_1 + 0x30);
        pfVar9 = (float *)(lVar3 + uVar8 * 4 + 0x20);
        *pfVar9 = fVar10 * (fVar11 - *(float *)(lVar5 + 0x2c));
        if ((lVar6 == 0) || (lVar5 = FUN_057e0998(lVar6,iVar2,DAT_091ae360), lVar5 == 0))
        goto LAB_041cd87c;
        if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_041cd880;
        *(float *)(lVar5 + 0x24) = *(float *)(lVar5 + 0x24) + *pfVar9;
      }
      if ((long)uVar8 < (long)(ulong)(uVar1 - 1)) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_041cd87c;
        fVar10 = *(float *)(param_1 + 0x3c);
        lVar5 = FUN_057e0998(*(long *)(param_1 + 0x30),uVar8 & 0xffffffff,DAT_091ae360);
        if ((lVar5 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_041cd87c;
        fVar11 = *(float *)(lVar5 + 0x2c);
        lVar5 = FUN_057e0998(*(long *)(param_1 + 0x30),uVar8 + 1 & 0xffffffff,DAT_091ae360);
        if ((lVar5 == 0) || (lVar4 == 0)) goto LAB_041cd87c;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) {
LAB_041cd880:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(param_1 + 0x30);
        pfVar9 = (float *)(lVar4 + uVar8 * 4 + 0x20);
        *pfVar9 = fVar10 * (fVar11 - *(float *)(lVar5 + 0x2c));
        if ((lVar6 == 0) ||
           (lVar5 = FUN_057e0998(lVar6,uVar8 + 1 & 0xffffffff,DAT_091ae360), lVar5 == 0))
        goto LAB_041cd87c;
        if (*(uint *)(lVar4 + 0x18) <= uVar8) goto LAB_041cd880;
        *(float *)(lVar5 + 0x24) = *(float *)(lVar5 + 0x24) + *pfVar9;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar7);
  }
  return;
}

