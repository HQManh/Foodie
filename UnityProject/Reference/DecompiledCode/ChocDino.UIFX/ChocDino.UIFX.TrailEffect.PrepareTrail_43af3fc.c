// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$PrepareTrail
// address: 0x43af3fc
// body: available
// range: 0x43af3fc-0x43af61f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43af530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__PrepareTrail(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  
  if ((DAT_09517af8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3ef8);
    FUN_03f5c2a4(&DAT_091b3ee8);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b3f00);
    FUN_03f5c2a4(&DAT_091b3f08);
    FUN_03f5c2a4(&DAT_0917d838);
    DAT_09517af8 = 1;
  }
  plVar5 = (long *)(param_1 + 0x88);
  lVar2 = *plVar5;
  if (lVar2 != 0) {
    if ((0 < *(int *)(lVar2 + 0x18)) && (*(long *)(param_1 + 0x80) != 0)) {
      lVar3 = FUN_057e0998(lVar2,0,DAT_091b3f08);
      if (lVar3 == 0) goto LAB_043af530;
      lVar2 = *plVar5;
      if (*(long *)(lVar3 + 0x10) != 0) {
        if ((((lVar2 == 0) || (lVar2 = FUN_057e0998(lVar2,0,DAT_091b3f08), lVar2 == 0)) ||
            (*(long *)(lVar2 + 0x10) == 0)) || (*(long *)(param_1 + 0x80) == 0)) goto LAB_043af530;
        if (*(int *)(*(long *)(param_1 + 0x80) + 0x18) == *(int *)(*(long *)(lVar2 + 0x10) + 0x18))
        {
          lVar2 = *plVar5;
        }
        else {
          lVar2 = *(long *)(param_1 + 0x88);
          if (*(int *)(param_1 + 0x38) != 0) {
            if (lVar2 != 0) {
              iVar6 = 0;
              do {
                if (*(int *)(lVar2 + 0x18) <= iVar6) goto LAB_043af538;
                uVar4 = FUN_057e0998(lVar2,iVar6,DAT_091b3f08);
                ChocDino_UIFX_TrailEffect__SetupLayerVertices(param_1,uVar4,iVar6);
                lVar2 = *(long *)(param_1 + 0x88);
                iVar6 = iVar6 + 1;
              } while (lVar2 != 0);
            }
            goto LAB_043af530;
          }
        }
      }
      if (lVar2 == 0) goto LAB_043af5ac;
    }
LAB_043af538:
    iVar6 = *(int *)(lVar2 + 0x18) - *(int *)(param_1 + 0x20);
    if (iVar6 == 0) {
      return;
    }
    if (0 < iVar6) {
      do {
        lVar2 = *plVar5;
        if (lVar2 == 0) goto LAB_043af530;
        FUN_057e251c(lVar2,*(int *)(lVar2 + 0x18) + -1,DAT_091b3ef8);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      lVar2 = *plVar5;
      if (lVar2 == 0) {
LAB_043af530:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    iVar6 = *(int *)(param_1 + 0x20) - *(int *)(lVar2 + 0x18);
    if (iVar6 < 1) {
      return;
    }
    do {
      ChocDino_UIFX_TrailEffect__AddTrailLayer(param_1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (*plVar5 != 0) {
      return;
    }
  }
LAB_043af5ac:
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = thunk_FUN_03f9944c(DAT_0917d838);
  FUN_057e0478(uVar4,uVar1,DAT_091b3ee8);
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  thunk_FUN_03f5d7b8(plVar5,uVar4);
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar6 = 0;
    do {
      ChocDino_UIFX_TrailEffect__AddTrailLayer(param_1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  return;
}

