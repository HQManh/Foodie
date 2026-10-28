// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$OnwardFreesByItself
// address: 0x4466640
// body: available
// range: 0x4466640-0x4466993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4466964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4466990 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__OnwardFreesByItself
               (long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_0951804c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091e7c10);
    FUN_03f5c2a4(&DAT_0918f3e0);
    FUN_03f5c2a4(&DAT_091e7c18);
    FUN_03f5c2a4(&DAT_0918f3e8);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_0951804c = 1;
  }
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f3e0);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass151_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_1);
    uVar5 = DAT_0918f3e8;
    if (param_2 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_2 + 0x10);
      lVar4 = thunk_FUN_03f9944c(uVar5);
      CookingGraph_CookingLevelSimulation_<>c__DisplayClass151_1___ctor(lVar4,0);
      if (lVar4 != 0) {
        plVar8 = (long *)(lVar4 + 0x18);
        *plVar8 = lVar3;
        thunk_FUN_03f5d7b8(plVar8,lVar3);
        lVar3 = *(long *)(param_1 + 0x78);
        *(undefined4 *)(lVar4 + 0x10) = 0;
        if (lVar3 != 0) {
          iVar11 = 0;
          do {
            if ((*plVar8 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) break;
            uVar2 = *(uint *)(*plVar8 + 0x18);
            if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
            if (lVar3 == 0) break;
            iVar1 = *(int *)(lVar3 + 0x18);
            if (iVar1 <= iVar11) goto LAB_04466968;
            if ((uVar2 != (uint)param_3) || (iVar11 != (int)((ulong)param_3 >> 0x20))) {
              uVar9 = *(undefined8 *)(param_2 + 0x30);
              uVar5 = thunk_FUN_03f9944c(DAT_09178290);
              FUN_0530cf38(uVar5,lVar4,DAT_091e7c18,0);
              uVar6 = FUN_04ab46c8(uVar9,uVar5,DAT_091c9390);
              if ((uVar6 & 1) == 0) {
                if (*plVar8 == 0) break;
                uVar5 = CookingGraph_CookingLevelSimulation__LaneSlots
                                  (param_1,*(undefined4 *)(*plVar8 + 0x18),
                                   *(undefined4 *)(lVar4 + 0x10));
                lVar3 = *(long *)(lVar4 + 0x18);
                if (lVar3 == 0) break;
                lVar10 = *(long *)(lVar3 + 0x20);
                if (lVar10 == 0) {
                  lVar10 = thunk_FUN_03f9944c(DAT_09178b98);
                  FUN_05315754(lVar10,lVar3,DAT_091e7c10,0);
                  *(long *)(lVar3 + 0x20) = lVar10;
                  thunk_FUN_03f5d7b8((long *)(lVar3 + 0x20),lVar10);
                }
                uVar6 = FUN_04ab6928(uVar5,lVar10,DAT_091c9498);
                if (*plVar8 == 0) break;
                lVar3 = *(long *)(param_1 + 0xb0);
                local_70 = 0;
                FUN_066c1fdc(&local_70,*(undefined4 *)(*plVar8 + 0x18),*(undefined4 *)(lVar4 + 0x10)
                             ,DAT_091bec98);
                if (lVar3 == 0) break;
                uVar7 = FUN_06e4da10(lVar3,local_70,&local_68,DAT_0919c1a0);
                if ((uVar7 & 1) == 0) {
                  if ((uVar6 & 1) == 0) {
LAB_04466968:
                    return iVar11 < iVar1;
                  }
                }
                else {
                  if (local_68 == 0) break;
                  if (*(char *)(local_68 + 0x38) == '\0') {
                    if (*(long *)(local_68 + 0x40) == 0) break;
                    if ((*(long *)(*(long *)(local_68 + 0x40) + 0x18) == 0) &&
                       (*(char *)(local_68 + 0x3a) == '\0')) goto LAB_04466968;
                  }
                }
              }
            }
            lVar3 = *(long *)(param_1 + 0x78);
            iVar11 = *(int *)(lVar4 + 0x10) + 1;
            *(int *)(lVar4 + 0x10) = iVar11;
          } while (lVar3 != 0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

