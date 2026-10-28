// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ToolSlotRoutes
// address: 0x44627f8
// body: available
// range: 0x44627f8-0x4462cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4462cb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4462cbc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__ToolSlotRoutes(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  if ((DAT_0951803d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e638);
    FUN_03f5c2a4(&DAT_0919c1a0);
    FUN_03f5c2a4(&DAT_0919e618);
    FUN_03f5c2a4(&DAT_0917b328);
    FUN_03f5c2a4(&DAT_0917b4c0);
    FUN_03f5c2a4(&DAT_091aa890);
    FUN_03f5c2a4(&DAT_091aa898);
    FUN_03f5c2a4(&DAT_091aa888);
    FUN_03f5c2a4(&DAT_0917bac8);
    FUN_03f5c2a4(&DAT_091b6958);
    FUN_03f5c2a4(&DAT_091b6f98);
    FUN_03f5c2a4(&DAT_091bec78);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_0951803d = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_78 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917bac8);
  FUN_05689b18(lVar4,DAT_091aa888);
  lVar9 = *(long *)(param_1 + 0x78);
  if (lVar9 != 0) {
    iVar13 = 0;
    while (lVar9 = *(long *)(lVar9 + 0x20), lVar9 != 0) {
      if (*(uint *)(lVar9 + 0x18) <= param_2) {
LAB_04462cbc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar9 = *(long *)(lVar9 + (long)(int)param_2 * 8 + 0x20);
      if ((lVar9 == 0) || (*(long *)(lVar9 + 0x10) == 0)) break;
      if (*(int *)(lVar9 + 0x1c) + *(int *)(*(long *)(lVar9 + 0x10) + 0x18) <= iVar13) {
        if (lVar4 != 0) {
          FUN_0568a6e4(lVar4,DAT_091aa898);
          return;
        }
        break;
      }
      lVar9 = *(long *)(param_1 + 0x178);
      CookingGraph_CookingLevelSimulation__ToolAddress(&local_90,param_2,iVar13);
      if (lVar9 == 0) break;
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      local_a0 = local_80;
      plVar5 = (long *)CookingGraph_Execution_CookingExecution__UnitsAt(lVar9,&local_b0,0);
      if (plVar5 == (long *)0x0) break;
      lVar9 = *plVar5;
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == DAT_0917b328) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_044629f0;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b328,0);
LAB_044629f0:
      iVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      lVar9 = DAT_091aa890;
      if (iVar2 == 0) {
        if (lVar4 == 0) break;
        lVar10 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (*(uint *)(lVar10 + 0x18) <= uVar1) {
          lVar9 = *(long *)(lVar9 + 0x20);
          uVar8 = 0;
          uVar11 = 0;
          goto LAB_04462c5c;
        }
        lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        *(undefined8 *)(lVar10 + 0x28) = 0;
      }
      else {
        lVar9 = *plVar5;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == DAT_0917b4c0) {
              puVar6 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
              goto LAB_04462a94;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar6 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917b4c0,0);
LAB_04462a94:
        (*(code *)*puVar6)(&local_90,plVar5,0,puVar6[1]);
        uVar11 = uStack_88;
        uVar8 = local_90;
        local_68 = 0;
        if (*(long *)(param_1 + 0xb8) == 0) break;
        uVar7 = FUN_06f535c4(*(long *)(param_1 + 0xb8),local_90,DAT_0919e638);
        if ((uVar7 & 1) == 0) {
          if (*(long *)(param_1 + 0xc0) == 0) break;
          uVar7 = FUN_06f54e88(*(long *)(param_1 + 0xc0),uVar8,&local_70,DAT_0919e618);
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(param_1 + 0x78) == 0) ||
               (lVar9 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar9 == 0)) break;
            if (*(uint *)(lVar9 + 0x18) <= param_2) goto LAB_04462cbc;
            lVar9 = *(long *)(lVar9 + (long)(int)param_2 * 8 + 0x20);
            if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x10), lVar9 == 0)) break;
            if (iVar13 < *(int *)(lVar9 + 0x18)) {
              lVar9 = *(long *)(param_1 + 0xb0);
              uVar3 = CookingGraph_CookingLevelSimulation__LaneOf(param_1,param_2,iVar13);
              local_90 = 0;
              FUN_066c1fdc(&local_90,param_2,uVar3,DAT_091bec98);
              if (lVar9 == 0) break;
              uVar7 = FUN_06e4da10(lVar9,local_90,&local_78,DAT_0919c1a0);
              if ((uVar7 & 1) != 0) {
                if (local_78 == 0) break;
                if (*(char *)(local_78 + 0x3a) == '\0') {
                  uVar3 = *(undefined4 *)(local_78 + 0x1c);
                  goto LAB_04462b0c;
                }
              }
            }
          }
          else {
            if (local_70 == 0) break;
            uVar3 = *(undefined4 *)(local_70 + 0x14);
LAB_04462b0c:
            FUN_05c3078c(&local_68,uVar3,DAT_091b6f98);
          }
        }
        else {
          local_68 = 0;
        }
        local_b8 = 0;
        local_c0 = 0;
        FUN_066be07c(&local_c0,uVar11 & 0xffffffff,local_68,DAT_091bec78);
        local_90 = 0;
        uStack_88 = 0;
        FUN_05c25a54(&local_90,local_c0,local_b8,DAT_091b6958);
        lVar9 = DAT_091aa890;
        if (lVar4 == 0) break;
        lVar10 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar10 == 0) break;
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
          lVar10 = lVar10 + (long)(int)uVar1 * 0x10;
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar10 + 0x20) = local_90;
          *(ulong *)(lVar10 + 0x28) = uStack_88;
        }
        else {
          lVar9 = *(long *)(lVar9 + 0x20);
          uVar8 = local_90;
          uVar11 = uStack_88;
LAB_04462c5c:
          FUN_0568a424(lVar4,uVar8,uVar11,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x70));
        }
      }
      lVar9 = *(long *)(param_1 + 0x78);
      iVar13 = iVar13 + 1;
      if (lVar9 == 0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

