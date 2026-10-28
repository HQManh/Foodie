// rea decompile_all
// name: AnhPD.FoodOrder.VerticalBorderLayout$$.ctor
// address: 0x42226f4
// body: available
// range: 0x42226f4-0x4222b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4222b2c to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4222b30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222b34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4222b40 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_VerticalBorderLayout___ctor(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((DAT_09516d32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091affa0);
    FUN_03f5c2a4(&DAT_091aff90);
    FUN_03f5c2a4(&DAT_0917cbd0);
    FUN_03f5c2a4(&DAT_09180818);
    FUN_03f5c2a4(&DAT_0918cd00);
    DAT_09516d32 = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180818,3);
  lVar2 = thunk_FUN_03f9944c(DAT_0917cbd0);
  FUN_05862d70(lVar2,DAT_091aff90);
  lVar3 = DAT_091affa0;
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar6 = *(uint *)(lVar2 + 0x18);
      if (uVar6 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar2 + 0x18) = uVar6 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20) = 0;
      }
      else {
        FUN_05863604(0,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = thunk_FUN_03f9944c(DAT_0918cd00);
      AnhPD_FoodOrder_VerticalBorderConfig___ctor(0x3f800000,lVar3,lVar2);
      if (plVar1 != (long *)0x0) {
        if ((lVar3 != 0) &&
           (lVar2 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0)) {
LAB_04222b38:
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar1[3] == 0) {
LAB_04222b34:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar1[4] = lVar3;
        thunk_FUN_03f5d7b8(plVar1 + 4,lVar3);
        lVar2 = thunk_FUN_03f9944c(DAT_0917cbd0);
        FUN_05862d70(lVar2,DAT_091aff90);
        lVar3 = DAT_091affa0;
        if (lVar2 != 0) {
          lVar5 = *(long *)(lVar2 + 0x10);
          iVar8 = (int)((ulong)*(undefined8 *)(lVar2 + 0x18) >> 0x20);
          *(int *)(lVar2 + 0x1c) = iVar8 + 1;
          if (lVar5 != 0) {
            uVar6 = (uint)*(undefined8 *)(lVar2 + 0x18);
            if (uVar6 < *(uint *)(lVar5 + 0x18)) {
              uVar7 = uVar6 + 1;
              *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20) = 0x3e99999a;
              *(ulong *)(lVar2 + 0x18) = CONCAT44(iVar8 + 2,uVar7);
            }
            else {
              FUN_05863604(0x3e99999a,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
              lVar3 = DAT_091affa0;
              uVar7 = *(uint *)(lVar2 + 0x18);
              lVar5 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
              if (lVar5 == 0) goto LAB_04222b30;
            }
            if (uVar7 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar7 + 1;
              *(undefined4 *)(lVar5 + (long)(int)uVar7 * 4 + 0x20) = 0xbe99999a;
            }
            else {
              FUN_05863604(0xbe99999a,lVar2,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
            lVar3 = thunk_FUN_03f9944c(DAT_0918cd00);
            AnhPD_FoodOrder_VerticalBorderConfig___ctor(0x3f666666,lVar3,lVar2);
            if ((lVar3 != 0) &&
               (lVar2 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
            goto LAB_04222b38;
            if ((*(uint *)(plVar1 + 3) & 0xfffffffe) == 0) goto LAB_04222b34;
            plVar1[5] = lVar3;
            thunk_FUN_03f5d7b8(plVar1 + 5,lVar3);
            lVar2 = thunk_FUN_03f9944c(DAT_0917cbd0);
            FUN_05862d70(lVar2,DAT_091aff90);
            lVar3 = DAT_091affa0;
            if (lVar2 != 0) {
              iVar8 = *(int *)(lVar2 + 0x1c);
              lVar5 = *(long *)(lVar2 + 0x10);
              *(int *)(lVar2 + 0x1c) = iVar8 + 1;
              if (lVar5 != 0) {
                uVar6 = *(uint *)(lVar2 + 0x18);
                if (uVar6 < *(uint *)(lVar5 + 0x18)) {
                  uVar7 = uVar6 + 1;
                  iVar8 = iVar8 + 2;
                  *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20) = 0x3ef0a3d7;
                  *(uint *)(lVar2 + 0x18) = uVar7;
                  *(int *)(lVar2 + 0x1c) = iVar8;
                }
                else {
                  FUN_05863604(0x3ef0a3d7,lVar2,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  lVar3 = DAT_091affa0;
                  uVar7 = *(uint *)(lVar2 + 0x18);
                  lVar5 = *(long *)(lVar2 + 0x10);
                  iVar8 = *(int *)(lVar2 + 0x1c) + 1;
                  *(int *)(lVar2 + 0x1c) = iVar8;
                  if (lVar5 == 0) goto LAB_04222b30;
                }
                if (uVar7 < *(uint *)(lVar5 + 0x18)) {
                  uVar6 = uVar7 + 1;
                  *(uint *)(lVar2 + 0x18) = uVar6;
                  *(int *)(lVar2 + 0x1c) = iVar8 + 1;
                  *(undefined4 *)(lVar5 + (long)(int)uVar7 * 4 + 0x20) = 0;
                }
                else {
                  FUN_05863604(0,lVar2,*(undefined8 *)
                                        (*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                  lVar3 = DAT_091affa0;
                  uVar6 = *(uint *)(lVar2 + 0x18);
                  lVar5 = *(long *)(lVar2 + 0x10);
                  *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
                  if (lVar5 == 0) goto LAB_04222b30;
                }
                if (uVar6 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(lVar2 + 0x18) = uVar6 + 1;
                  *(undefined4 *)(lVar5 + (long)(int)uVar6 * 4 + 0x20) = 0xbef0a3d7;
                }
                else {
                  FUN_05863604(0xbef0a3d7,lVar2,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
                lVar3 = thunk_FUN_03f9944c(DAT_0918cd00);
                AnhPD_FoodOrder_VerticalBorderConfig___ctor(0x3f4ccccd,lVar3,lVar2);
                if ((lVar3 != 0) &&
                   (lVar2 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar2 == 0))
                goto LAB_04222b38;
                if (2 < *(uint *)(plVar1 + 3)) {
                  plVar1[6] = lVar3;
                  thunk_FUN_03f5d7b8(plVar1 + 6,lVar3);
                  *(long *)(param_1 + 0x20) = (long)plVar1;
                  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),plVar1);
                  UnityEngine_MonoBehaviour___ctor(param_1,0);
                  return;
                }
                goto LAB_04222b34;
              }
            }
          }
        }
      }
    }
  }
LAB_04222b30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

