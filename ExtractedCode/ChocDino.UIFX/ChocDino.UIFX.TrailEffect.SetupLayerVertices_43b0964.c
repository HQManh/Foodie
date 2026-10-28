// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$SetupLayerVertices
// address: 0x43b0964
// body: available
// range: 0x43b0964-0x43b0bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b0b48 to 0x75d9fe8 System.Array$$CopyTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b0b90 to 0x5895040 FUN_05895040 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b0bc0 to 0x589513c FUN_0589513c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b0bc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__SetupLayerVertices(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09517af5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1718);
    FUN_03f5c2a4(&DAT_091b1720);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b3f08);
    FUN_03f5c2a4(&DAT_091807a0);
    DAT_09517af5 = 1;
  }
  if (param_2 != 0) {
    plVar5 = (long *)(param_2 + 0x10);
    lVar6 = *plVar5;
    lVar4 = *(long *)(param_1 + 0x80);
    if (lVar6 == 0) {
      if (lVar4 != 0) {
        lVar4 = FUN_03f5c394(DAT_091807a0,*(undefined4 *)(lVar4 + 0x18));
        *plVar5 = lVar4;
        thunk_FUN_03f5d7b8(plVar5,lVar4);
        if (param_3 < 1) {
          lVar4 = *(long *)(param_1 + 0x80);
          if (lVar4 != 0) {
            lVar2 = *plVar5;
LAB_043b0b84:
            FUN_05895040(lVar4,lVar2,DAT_091b1718);
            return;
          }
        }
        else if (((*(long *)(param_1 + 0x88) != 0) &&
                 (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),param_3 + -1,DAT_091b3f08),
                 lVar4 != 0)) && (*(long *)(lVar4 + 0x10) != 0)) {
          System_Array__CopyTo(*(long *)(lVar4 + 0x10),*plVar5,0,0);
          return;
        }
      }
    }
    else if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x18) == *(int *)(lVar6 + 0x18)) {
        return;
      }
      lVar4 = FUN_03f5c394(DAT_091807a0);
      *plVar5 = lVar4;
      thunk_FUN_03f5d7b8(plVar5,lVar4);
      lVar2 = *plVar5;
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x18) == 0) {
          return;
        }
        if (param_3 == 0) {
          lVar4 = *(long *)(param_1 + 0x80);
          if (lVar4 != 0) goto LAB_043b0b84;
        }
        else {
          iVar3 = (int)*(long *)(lVar2 + 0x18);
          if (*(int *)(lVar6 + 0x18) <= iVar3) {
            iVar3 = *(int *)(lVar6 + 0x18);
          }
          System_Array__Copy(lVar6,0,lVar2,0,iVar3,0);
          lVar4 = *plVar5;
          if (lVar4 != 0) {
            iVar3 = *(int *)(lVar6 + 0x18);
            if (*(int *)(lVar4 + 0x18) <= iVar3) {
              return;
            }
            if (param_3 < 1) {
              lVar2 = *(long *)(param_1 + 0x80);
              if (lVar2 != 0) {
                iVar1 = *(int *)(lVar2 + 0x18);
LAB_043b0ba8:
                FUN_0589513c(lVar2,iVar3,lVar4,iVar3,iVar1 - iVar3,DAT_091b1720);
                return;
              }
            }
            else if (((*(long *)(param_1 + 0x88) != 0) &&
                     (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),param_3 + -1,DAT_091b3f08),
                     lVar4 != 0)) && (*(long *)(param_1 + 0x80) != 0)) {
              iVar3 = *(int *)(lVar6 + 0x18);
              System_Array__Copy(*(undefined8 *)(lVar4 + 0x10),iVar3,*plVar5,iVar3,
                                 *(int *)(*(long *)(param_1 + 0x80) + 0x18) - iVar3,0);
              lVar2 = *(long *)(param_1 + 0x80);
              if (lVar2 != 0) {
                iVar1 = *(int *)(lVar2 + 0x18);
                iVar3 = *(int *)(lVar6 + 0x18);
                lVar4 = *plVar5;
                goto LAB_043b0ba8;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

