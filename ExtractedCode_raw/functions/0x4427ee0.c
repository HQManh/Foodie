// rea decompile_all
// name: CookingGraph.CustomerOrderTranslator$$CollectAuthoredGroups
// address: 0x4427ee0
// body: available
// range: 0x4427ee0-0x4428573 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4428560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4428564 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4428570 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CustomerOrderTranslator__CollectAuthoredGroups
               (long param_1,long param_2,long *param_3,long *param_4,long param_5,long *param_6,
               int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 local_a0;
  undefined8 *puStack_98;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  int local_64;
  
  if ((DAT_09517f5c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183100);
    FUN_03f5c2a4(&DAT_091a3b30);
    FUN_03f5c2a4(&DAT_091a3b38);
    FUN_03f5c2a4(&DAT_091a3b40);
    FUN_03f5c2a4(&DAT_0917a038);
    FUN_03f5c2a4(&DAT_0917a1b0);
    FUN_03f5c2a4(&DAT_0917a1b8);
    FUN_03f5c2a4(&DAT_091aecc0);
    FUN_03f5c2a4(&DAT_091aecc8);
    FUN_03f5c2a4(&DAT_091acfd8);
    FUN_03f5c2a4(&DAT_091acfe0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_092032a0);
    FUN_03f5c2a4(&DAT_091ffab8);
    FUN_03f5c2a4(&DAT_09223e10);
    DAT_09517f5c = 1;
  }
  local_64 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (param_1 == 0) {
    return;
  }
  lVar11 = param_5;
  if ((*(int *)(param_1 + 0x10) == 2) && (iVar1 = *(int *)(param_1 + 0x14), -1 < iVar1)) {
    if ((param_2 == 0) ||
       ((*(long *)(param_2 + 0x30) == 0 ||
        (lVar3 = *(long *)(*(long *)(param_2 + 0x30) + 0x20), lVar3 == 0)))) goto LAB_04428560;
    if (iVar1 < *(int *)(lVar3 + 0x18)) {
      lVar3 = FUN_057e0998(lVar3,iVar1,DAT_091acfe0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Inequality(lVar3,0,0);
      if ((uVar4 & 1) != 0) {
        if (param_3 == (long *)0x0) goto LAB_04428560;
        lVar11 = *param_3;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a1b8) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 7) * 0x10 + 0x138);
              goto LAB_04428170;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a1b8,7);
LAB_04428170:
        uVar4 = (*(code *)*puVar5)(param_3,lVar3,&local_64,puVar5[1]);
        iVar1 = local_64;
        iVar2 = CookingGraph_CustomerOrderTranslator__<CollectAuthoredGroups>g__LeavesIn_18_0
                          (param_1);
        lVar11 = *param_3;
        if ((uVar4 & 1) == 0) {
          iVar1 = 0;
        }
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a1b8) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 1) * 0x10 + 0x138);
              goto LAB_04428200;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917a1b8,1);
LAB_04428200:
        (*(code *)*puVar5)(param_3,lVar3,iVar2 + iVar1,puVar5[1]);
        if (param_4 == (long *)0x0) goto LAB_04428560;
        lVar11 = *param_4;
        uVar4 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a1b0) {
              puVar5 = (undefined8 *)(lVar11 + (long)(*piVar12 + 7) * 0x10 + 0x138);
              goto LAB_04428278;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917a1b0,7);
LAB_04428278:
        uVar4 = (*(code *)*puVar5)(param_4,lVar3,&local_70,puVar5[1]);
        lVar6 = local_70;
        lVar11 = lVar3;
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Inequality(lVar6,param_5,0);
          if ((uVar4 & 1) == 0) goto LAB_044280c8;
        }
        lVar6 = thunk_FUN_03f9944c(DAT_09183100);
        *(undefined4 *)(lVar6 + 0x28) = 0xffffffff;
        System_Object___ctor(lVar6,0);
        *(undefined8 *)(lVar6 + 0x10) = DAT_092032a0;
        thunk_FUN_03f5d7b8();
        *(int *)(lVar6 + 0x18) = param_7;
        *(int *)(lVar6 + 0x1c) = param_8;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(param_1 + 0x14);
        uVar10 = DAT_09180318;
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_04428560;
        *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18);
        plVar7 = (long *)FUN_03f5c394(uVar10,5);
        local_a0 = CONCAT44(local_a0._4_4_,param_7 + 1);
        lVar8 = FUN_03f5c42c(DAT_09535420,&local_a0);
        if (plVar7 == (long *)0x0) goto LAB_04428560;
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_04428568:
          uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,0);
        }
        if ((int)plVar7[3] == 0) {
LAB_04428564:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar7[4] = lVar8;
        thunk_FUN_03f5d7b8(plVar7 + 4,lVar8);
        local_8c = param_8 + 1;
        lVar8 = FUN_03f5c42c(DAT_09535420,&local_8c);
        if ((lVar8 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
        goto LAB_04428568;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_04428564;
        plVar7[5] = lVar8;
        thunk_FUN_03f5d7b8(plVar7 + 5,lVar8);
        if (lVar3 == 0) goto LAB_04428560;
        lVar3 = *(long *)(lVar3 + 0x18);
        if ((lVar3 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar8 == 0))
        goto LAB_04428568;
        if (*(uint *)(plVar7 + 3) < 3) goto LAB_04428564;
        plVar7[6] = lVar3;
        thunk_FUN_03f5d7b8(plVar7 + 6,lVar3);
        uVar10 = DAT_091ffab8;
        lVar3 = 0;
        if (local_70 != 0) {
          lVar3 = *(long *)(local_70 + 0x18);
        }
        lVar8 = DAT_09223e10;
        if (lVar3 != 0) {
          lVar8 = lVar3;
        }
        if ((lVar8 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
        goto LAB_04428568;
        if ((*(uint *)(plVar7 + 3) & 0xfffffffc) == 0) goto LAB_04428564;
        plVar7[7] = lVar8;
        thunk_FUN_03f5d7b8(plVar7 + 7,lVar8);
        if (param_5 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(long *)(param_5 + 0x18);
        }
        lVar8 = DAT_09223e10;
        if (lVar3 != 0) {
          lVar8 = lVar3;
        }
        if ((lVar8 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
        goto LAB_04428568;
        if (*(uint *)(plVar7 + 3) < 5) goto LAB_04428564;
        plVar7[8] = lVar8;
        thunk_FUN_03f5d7b8(plVar7 + 8,lVar8);
        uVar10 = System_String__Format(uVar10,plVar7,0);
        *(undefined8 *)(lVar6 + 0x30) = uVar10;
        thunk_FUN_03f5d7b8();
        if (param_6 == (long *)0x0) goto LAB_04428560;
        lVar3 = *param_6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar12 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917a038) {
              puVar5 = (undefined8 *)(lVar3 + (long)(*piVar12 + 2) * 0x10 + 0x138);
              goto LAB_0442854c;
            }
            uVar4 = uVar4 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar4 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(param_6,DAT_0917a038,2);
LAB_0442854c:
        (*(code *)*puVar5)(param_6,lVar6,puVar5[1]);
      }
    }
  }
LAB_044280c8:
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x28),DAT_091aecc0);
    local_a0 = 0;
    puStack_98 = &local_88;
    while (uVar4 = FUN_071bd28c(&local_88,DAT_091a3b38), (uVar4 & 1) != 0) {
      CookingGraph_CustomerOrderTranslator__CollectAuthoredGroups
                (local_78,param_2,param_3,param_4,lVar11,param_6,param_7,param_8);
    }
    FUN_071bd288(&local_88,DAT_091a3b30);
    return;
  }
LAB_04428560:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

