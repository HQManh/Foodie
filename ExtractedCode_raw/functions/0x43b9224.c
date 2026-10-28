// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$SetupLayerVertices
// address: 0x43b9224
// body: available
// range: 0x43b9224-0x43b949f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b945c to 0x43b94a0 ChocDino.UIFX.TrailEffectTMP.LayerVertices$$CopyTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b9498 to 0x43b95fc ChocDino.UIFX.TrailEffectTMP.LayerVertices$$CopyTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b949c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__SetupLayerVertices(long param_1,long param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09517b3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091951e0);
    FUN_03f5c2a4(&DAT_091b3f30);
    DAT_09517b3b = 1;
  }
  if (param_2 != 0) {
    plVar6 = (long *)(param_2 + 0x10);
    lVar7 = *plVar6;
    if (lVar7 == 0) {
      if ((*(long *)(param_1 + 0x88) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar7 != 0)) {
        uVar2 = *(undefined4 *)(lVar7 + 0x18);
        lVar7 = thunk_FUN_03f9944c(DAT_091951e0);
        ChocDino_UIFX_TrailEffectTMP_LayerVertices___ctor(lVar7,uVar2);
        *plVar6 = lVar7;
        thunk_FUN_03f5d7b8(plVar6,lVar7);
        if (param_3 < 1) {
          lVar7 = *(long *)(param_1 + 0x88);
        }
        else {
          if ((*(long *)(param_1 + 0x98) == 0) ||
             (lVar7 = FUN_057e0998(*(long *)(param_1 + 0x98),param_3 + -1,DAT_091b3f30), lVar7 == 0)
             ) goto LAB_043b949c;
          lVar7 = *(long *)(lVar7 + 0x10);
        }
        if (lVar7 != 0) {
          lVar4 = *plVar6;
LAB_043b944c:
          ChocDino_UIFX_TrailEffectTMP_LayerVertices__CopyTo(lVar7,lVar4);
          return;
        }
      }
    }
    else if (((*(long *)(lVar7 + 0x10) != 0) && (*(long *)(param_1 + 0x88) != 0)) &&
            (lVar4 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar4 != 0)) {
      iVar3 = *(int *)(lVar4 + 0x18);
      if (*(int *)(*(long *)(lVar7 + 0x10) + 0x18) == iVar3) {
        return;
      }
      lVar4 = thunk_FUN_03f9944c(DAT_091951e0);
      ChocDino_UIFX_TrailEffectTMP_LayerVertices___ctor(lVar4,iVar3);
      *plVar6 = lVar4;
      thunk_FUN_03f5d7b8(plVar6,lVar4);
      lVar4 = *plVar6;
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
        iVar3 = *(int *)(*(long *)(lVar4 + 0x10) + 0x18);
        if (iVar3 < 1) {
          return;
        }
        if (param_3 == 0) {
          lVar7 = *(long *)(param_1 + 0x88);
          if (lVar7 != 0) goto LAB_043b944c;
        }
        else if (*(long *)(lVar7 + 0x10) != 0) {
          iVar1 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
          if (iVar1 <= iVar3) {
            iVar3 = iVar1;
          }
          ChocDino_UIFX_TrailEffectTMP_LayerVertices__CopyTo(lVar7,lVar4,0,iVar3);
          lVar4 = *plVar6;
          if (((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) && (*(long *)(lVar7 + 0x10) != 0)) {
            iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
            if (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) <= iVar3) {
              return;
            }
            if (param_3 < 1) {
              lVar5 = *(long *)(param_1 + 0x88);
              if ((lVar5 != 0) && (*(long *)(lVar5 + 0x10) != 0)) {
                iVar1 = *(int *)(*(long *)(lVar5 + 0x10) + 0x18);
LAB_043b9480:
                ChocDino_UIFX_TrailEffectTMP_LayerVertices__CopyTo
                          (lVar5,iVar3,lVar4,iVar3,iVar1 - iVar3);
                return;
              }
            }
            else if (((((*(long *)(param_1 + 0x98) != 0) &&
                       (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x98),param_3 + -1,DAT_091b3f30),
                       lVar4 != 0)) && (*(long *)(lVar7 + 0x10) != 0)) &&
                     ((*(long *)(param_1 + 0x88) != 0 &&
                      (lVar5 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar5 != 0)))) &&
                    (*(long *)(lVar4 + 0x10) != 0)) {
              iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
              ChocDino_UIFX_TrailEffectTMP_LayerVertices__CopyTo
                        (*(long *)(lVar4 + 0x10),iVar3,*plVar6,iVar3,*(int *)(lVar5 + 0x18) - iVar3)
              ;
              if (((*(long *)(lVar7 + 0x10) != 0) && (lVar5 = *(long *)(param_1 + 0x88), lVar5 != 0)
                  ) && (*(long *)(lVar5 + 0x10) != 0)) {
                iVar3 = *(int *)(*(long *)(lVar7 + 0x10) + 0x18);
                iVar1 = *(int *)(*(long *)(lVar5 + 0x10) + 0x18);
                lVar4 = *plVar6;
                goto LAB_043b9480;
              }
            }
          }
        }
      }
    }
  }
LAB_043b949c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

